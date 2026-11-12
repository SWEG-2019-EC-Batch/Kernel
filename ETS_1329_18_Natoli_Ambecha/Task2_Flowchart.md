'''
flowchart TD
    A([Start]) --> B[/Input electricity units/]
    B --> C{Are units <= 50?}
    C -->|Yes| D[Energy charge = units * 1.50]
    C -->|No| E[Energy charge = 50 * 1.50 + units above 50 * 2.00]
    D --> F[Service charge = 10]
    E --> F
    F --> G[Total bill = Energy charge + Service charge]
    G --> H[/Display energy charge, service charge and total bill/]
    H --> I([End])
