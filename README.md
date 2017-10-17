# klondike.craftmanship

## Master of Software Craftmanship (UPM - ERICSSON).

Simply klondike (solitaire) developed in c++ (OOP)  with the patterns indicated by clean code and the craftmanship rules.

### Build the game (Microsoft Visual C++ Build tools):

#### You could build manually
```bash
    cl /EHsc /c klondike.cpp deck.cpp card.cpp
    cl /EHsc klondike.obj deck.obj card.obj /link /out:klondike.exe
```

#### You could run build.bat from powershell:

```bash
    start-process build.bat
```

#### Or create VScode task:

```json
"tasks": [
        {
            "taskName": "build",
            "type": "shell",
            "command": "start-process",
            "args": [
                "build.bat"
            ]
        }
    ]
````