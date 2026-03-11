/*
 * func-name: ?GetCurMousePos@GUISystem@@QAEXAAUtagPOINT@@@Z
 * func-address: 0x1006bc60
 * callers: none
 * callees: none
 */

void __thiscall GUISystem::GetCurMousePos(GUISystem *this, struct tagPOINT *a2)
{
  *a2 = *(struct tagPOINT *)((char *)this + 36);
}
