/*
 * func-name: sub_10119D20
 * func-address: 0x10119d20
 * callers: 0x10118c20
 * callees: 0x10097800, 0x10119160, 0x1011a980, 0x1017aa50
 */

int __thiscall sub_10119D20(void *this, const char *a2)
{
  int v3; // eax
  int v4; // esi
  int Path; // eax
  char *v6; // eax
  int Dict; // edi
  int v9; // esi
  const char *v10; // [esp-8h] [ebp-48h]
  const char *v11; // [esp-4h] [ebp-44h]
  _DWORD v12[3]; // [esp+Ch] [ebp-34h] BYREF
  _BYTE v13[28]; // [esp+18h] [ebp-28h] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v3 = PyImport_ImportModule(a2);
  v4 = v3;
  if ( v3 )
  {
    Dict = PyModule_GetDict(v3);
    std::string::string(v13);
    v12[0] = dword_112417AC;
    v14 = 0;
    v12[1] = v4;
    v12[2] = Dict;
    ++dword_112417AC;
    std::string::operator=(v13, a2);
    sub_1011A980((int)this + 4, v12);
    v9 = v12[0];
    v14 = -1;
    std::string::~string(v13);
    return v9;
  }
  else
  {
    Path = Py_GetPath();
    v10 = (const char *)sub_1017AA50(Path);
    v6 = sub_10119160();
    Warning(
      "Couldn't load script '%s'. %s. \nExtended info: Current directory = %s\nPython search paths = %s",
      a2,
      v6,
      v10,
      v11);
    return -1;
  }
}
