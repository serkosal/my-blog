# Personal blog site using c++ drogon framework and HTMX

## dependecies
drogon and it's dependencies

## How to build

```bash
cd backend/build
cmake ..
make -j$(nproc)
```

## development notice
In order to supress IDE errors, you might need to run this command
```bash
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DCMAKE_CXX_STANDARD=20 ..
```