```mermaid
flowchart TD
    A([Start]) --> B[/Input assignment, midterm and final marks/]
    B --> C[Calculate weighted total]
    C --> D{Is total >= 50?}
    D -->|Yes| E[Result = Pass]
    D -->|No| F[Result = Fail]
    E --> G[/Display total and result/]
    F --> G
    G --> H([End])
