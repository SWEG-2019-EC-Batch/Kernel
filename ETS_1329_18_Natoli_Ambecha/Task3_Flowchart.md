```mermaid
flowchart TD
    A([Start]) --> B[/Input distance, hours, minutes, fuel rate and price per liter/]
    B --> C[Convert time to hours = hours + minutes / 60]
    C --> D[Calculate speed = distance / total hours]
    D --> E[Calculate fuel used = distance * fuel rate / 100]
    E --> F[Calculate fuel cost = fuel used * price per liter]
    F --> G[/Display average speed, fuel used and fuel cost/]
    G --> H([End])
