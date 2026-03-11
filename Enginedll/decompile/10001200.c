/*
 * func-name: ?SelectionChanged@Editor@@QAE_NXZ
 * func-address: 0x10001200
 * callers: none
 * callees: none
 */

bool __thiscall Editor::SelectionChanged(Editor *this)
{
  bool result; // al

  result = *((_BYTE *)this + 2060);
  *((_BYTE *)this + 2060) = 0;
  return result;
}
