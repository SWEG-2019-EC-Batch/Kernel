
flowchart TD
    A([Start]) --> B[/Input assignment, midterm and final marks/]
    B --> C[Calculate total = assignment * 0.20 + midterm * 0.30 + final * 0.50]
    C --> D{Is total >= 50?}
    D -->|Yes| E[Result = Pass]
    D -->|No| F[Result = Fail]
    E --> G[/Display total and result/]
    F --> G
    G --> H([End])
  

