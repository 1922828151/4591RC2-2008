/*
 * func-name: ??0EditorVar@@QAE@XZ
 * func-address: 0x100092d0
 * callers: 0x10006780, 0x10012bf0, 0x1002bbd0
 * callees: none
 */

EditorVar *__thiscall EditorVar::EditorVar(EditorVar *this)
{
  std::string::string((char *)this + 4);
  std::string::string((char *)this + 32);
  std::string::string((char *)this + 60);
  *((_BYTE *)this + 92) = 1;
  *((_BYTE *)this + 93) = 0;
  return this;
}
