import java.util.*;

public class DijkstraAlgorithm {
    
    private static final int INF = Integer.MAX_VALUE;
    
    public static void dijkstra(int[][] graph, int source) {
        int n = graph.length;
        int[] dist = new int[n];
        int[] parent = new int[n];
        Arrays.fill(dist, INF);
        Arrays.fill(parent, -1);
        dist[source] = 0;
        
        PriorityQueue<Node> pq = new PriorityQueue<>(Comparator.comparingInt(node -> node.dist));
        pq.offer(new Node(source, 0));
        
        while (!pq.isEmpty()) {
            Node curr = pq.poll();
            int u = curr.vertex;
            for (int v = 0; v < n; v++) {
                if (graph[u][v] != INF && dist[u] + graph[u][v] < dist[v]) {
                    dist[v] = dist[u] + graph[u][v];
                    parent[v] = u;
                    pq.offer(new Node(v, dist[v]));
                }
            }
        }
        
        // Print shortest paths
        for (int i = 0; i < n; i++) {
            System.out.print("Shortest path from " + source + " to " + i + ": ");
            if (dist[i] == INF) {
                System.out.println("No path exists");
            } else {
                List<Integer> path = new ArrayList<>();
                int u = i;
                while (u != -1) {
                    path.add(0, u);
                    u = parent[u];
                }
                System.out.println(path + ", Distance: " + dist[i]);
            }
        }
    }
    
    static class Node {
        int vertex;
        int dist;
        
        public Node(int vertex, int dist) {
            this.vertex = vertex;
            this.dist = dist;
        }
    }
    
    public static void main(String[] args) {
        int[][] graph = {
            {0, 10, INF, 5},
            {INF, 0, 1, 2},
            {INF, INF, 0, 4},
            {INF, 3, 9, 0}
        };
        dijkstra(graph, 0);
    }
}
