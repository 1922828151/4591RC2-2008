/*
 * func-name: sub_10119430
 * func-address: 0x10119430
 * callers: 0x10097ea0
 * callees: 0x100971c0, 0x1017c4e0
 */

int __thiscall sub_10119430(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int Builtins; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD v15[7]; // [esp-3Ch] [ebp-C4h] BYREF
  char v16; // [esp-20h] [ebp-A8h] BYREF
  int v17; // [esp-1Ch] [ebp-A4h]
  int v18; // [esp-18h] [ebp-A0h]
  int v19; // [esp-14h] [ebp-9Ch]
  int v20; // [esp-10h] [ebp-98h]
  int v21; // [esp-Ch] [ebp-94h]
  int v22; // [esp-8h] [ebp-90h]
  const char *v23; // [esp-4h] [ebp-8Ch]
  char *v24; // [esp+4h] [ebp-84h]
  _DWORD *v25; // [esp+8h] [ebp-80h]
  _BYTE v26[28]; // [esp+Ch] [ebp-7Ch] BYREF
  _BYTE v27[28]; // [esp+28h] [ebp-60h] BYREF
  _BYTE v28[28]; // [esp+44h] [ebp-44h] BYREF
  _BYTE v29[28]; // [esp+60h] [ebp-28h] BYREF
  int v30; // [esp+84h] [ebp-4h]

  v30 = 0;
  Py_Initialize();
  *this = PyDict_New();
  Builtins = PyEval_GetBuiltins();
  PyDict_SetItemString(*this, "__builtins__", Builtins);
  v23 = "\\Scripts\\";
  v24 = &v16;
  std::string::string(&v16, &unk_101C91EF);
  v25 = v15;
  LOBYTE(v30) = 1;
  std::string::string(v15, "SearchPath");
  LOBYTE(v30) = 2;
  Engine::Instance();
  LOBYTE(v30) = 0;
  v10 = sub_1017C4E0(v27, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v17, v18, v19, v20, v21, v22);
  LOBYTE(v30) = 3;
  std::operator+<char>(v26, v10, v23);
  LOBYTE(v30) = 5;
  std::string::~string(v27);
  v11 = std::operator+<char>(v29, &a2, ";");
  LOBYTE(v30) = 6;
  v12 = std::operator+<char>(v28, v11, v26);
  LOBYTE(v30) = 7;
  std::string::operator=(v26, v12);
  LOBYTE(v30) = 6;
  std::string::~string(v28);
  LOBYTE(v30) = 5;
  std::string::~string(v29);
  v13 = std::string::c_str(v26);
  PySys_SetPath(v13);
  LOBYTE(v30) = 0;
  std::string::~string(v26);
  v30 = -1;
  return std::string::~string(&a2);
}
