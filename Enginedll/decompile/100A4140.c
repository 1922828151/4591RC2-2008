/*
 * func-name: sub_100A4140
 * func-address: 0x100a4140
 * callers: none
 * callees: 0x100d5bd0, 0x100d6d20
 */

int __thiscall sub_100A4140(_DWORD *this)
{
  GUISystem *v2; // eax
  int v3; // eax
  int result; // eax
  struct tagPOINT v5; // [esp+4h] [ebp-8h] BYREF

  v2 = GUISystem::Instance();
  GUISystem::GetLogicMousePos(v2, &v5);
  v3 = this[28];
  if ( v3 )
  {
    v5.x -= *(_DWORD *)(v3 + 692);
    v5.y -= *(_DWORD *)(v3 + 696);
  }
  result = (*(int (__thiscall **)(_DWORD *, LONG, LONG))(*this + 124))(this, v5.x, v5.y);
  *((_BYTE *)this + 709) = result != 0;
  return result;
}
