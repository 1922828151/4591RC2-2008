/*
 * func-name: ??0EditorVar@@QAE@ABV0@@Z
 * func-address: 0x100095b0
 * callers: 0x1000c0c0, 0x1000cc70, 0x1000f8d0, 0x1001e530, 0x1002be20
 * callees: none
 */

EditorVar *__thiscall EditorVar::EditorVar(EditorVar *this, const struct EditorVar *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  std::string::string((char *)this + 4, (char *)a2 + 4);
  std::string::string((char *)this + 32, (char *)a2 + 32);
  std::string::string((char *)this + 60, (char *)a2 + 60);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_BYTE *)this + 92) = *((_BYTE *)a2 + 92);
  *((_BYTE *)this + 93) = *((_BYTE *)a2 + 93);
  return this;
}
