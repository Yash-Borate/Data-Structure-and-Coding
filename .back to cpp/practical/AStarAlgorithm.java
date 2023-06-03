import java.util.*;

public class AStarAlgorithm {
    private static class Node {
        int x, y;
        int gScore, fScore;
        Node parent;

        public Node(int x, int y) {
            this.x = x;
            this.y = y;
            gScore = Integer.MAX_VALUE;
            fScore = Integer.MAX_VALUE;
            parent = null;
        }
    }

    public static List<Node> AStar(int[][] graph, int startX, int startY, int endX, int endY) {
        List<Node> path = new ArrayList<>();

        PriorityQueue<Node> openSet = new PriorityQueue<>(Comparator.comparingInt(node -> node.fScore));
        Set<Node> closedSet = new HashSet<>();
        Node startNode = new Node(startX, startY);
        startNode.gScore = 0;
        startNode.fScore = heuristic(startX, startY, endX, endY);
        openSet.add(startNode);

        while (!openSet.isEmpty()) {
            Node current = openSet.poll();
            if (current.x == endX && current.y == endY) {
                while (current != null) {
                    path.add(current);
                    current = current.parent;
                }
                Collections.reverse(path);
                break;
            }
            closedSet.add(current);
            for (Node neighbor : getNeighbors(graph, current)) {
                if (closedSet.contains(neighbor)) {
                    continue;
                }
                int tentativeGScore = current.gScore + 1;
                if (!openSet.contains(neighbor)) {
                    openSet.add(neighbor);
                } else if (tentativeGScore >= neighbor.gScore) {
                    continue;
                }
                neighbor.parent = current;
                neighbor.gScore = tentativeGScore;
                neighbor.fScore = neighbor.gScore + heuristic(neighbor.x, neighbor.y, endX, endY);
            }
        }
        return path;
    }

    private static int heuristic(int x1, int y1, int x2, int y2) {
        return Math.abs(x1 - x2) + Math.abs(y1 - y2);
    }

    private static List<Node> getNeighbors(int[][] graph, Node node) {
        List<Node> neighbors = new ArrayList<>();
        int x = node.x;
        int y = node.y;
        if (x > 0 && graph[x - 1][y] == 0) {
            neighbors.add(new Node(x - 1, y));
        }
        if (x < graph.length - 1 && graph[x + 1][y] == 0) {
            neighbors.add(new Node(x + 1, y));
        }
        if (y > 0 && graph[x][y - 1] == 0) {
            neighbors.add(new Node(x, y - 1));
        }
        if (y < graph[0].length - 1 && graph[x][y + 1] == 0) {
            neighbors.add(new Node(x, y + 1));
        }
        return neighbors;
    }
    public static void main(String[] args) {
        int[][] graph = {
            {0, 0, 0, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 0, 0, 0}
        };
        int startX = 0;
        int startY = 0;
        int endX = 4;
        int endY = 4;
    
        List<Node> path = AStarAlgorithm.AStar(graph, startX, startY, endX, endY);
    
        if (path.isEmpty()) {
            System.out.println("No path found!");
        } else {
            System.out.println("Shortest path found:");
            for (Node node : path) {
                System.out.println("(" + node.x + ", " + node.y + ")");
            }
        }
    }

}
