# File Explorer

> A modern file explorer for Linux, built with C++17 and Qt.  
> CLI & GUI modes supported. Fast, extensible.

---

## ✨ 주요 기능 (Features)

- 파일/폴더 트리 탐색 (CLI/GUI)
- 파일 복사, 이동, 삭제, 이름 변경 등 관리 기능
- 검색/정렬/북마크/탐색 히스토리
- 콘솔/GUI 전환 가능 (옵션)

---

## 📦 설치 & 빌드 (Build & Install)

### 1. 패키지 설치
```bash
sudo apt update
sudo apt install build-essential cmake git \
                 libncurses5-dev libncursesw5-dev
```

### 2. 빌드
```bash
./build.sh
```

### 3. 실행
- CLI 모드
```bash
./FileExplorer
```

- GUI 모드
```bash
./FileExplorer --gui
```


---

## 📁 프로젝트 구조 (Structure)

> 개발중

```bash
FileExplorer/
├── src/
│   ├── CMakeLists.txt
│   └── main.cpp
├── include/
├── resources/
├── build.sh
├── CMakeLists.txt
├── .gitignore
└── README.md
```

---

## 🛠️ 개발 환경 (Development Environment)

- **운영체제**: WSL Ubuntu 20.04 이상 (Windows 10/11)
- **필수 패키지**:
  - C++17 지원 컴파일러 (`g++`, `clang++`)
  - `cmake` (>=3.14)
  - **Qt 6** (또는 5) 개발 패키지  
  - **ncurses** (CLI UI용, 옵션)  
  - 기타: `git`, `make`, `pkg-config` 등

---

## ❗ 참고
- 현재는 CLI(콘솔) 모드만 구현할 예정
- GUI 확장은 추후 개발 예정