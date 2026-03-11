/*
 * func-name: ?GetControlAtPoint@CREDialog@@QAEPAVCREControl@@UtagPOINT@@@Z
 * func-address: 0x100a99f0
 * callers: 0x100a9a80, 0x100afae0, 0x10153480
 * callees: none
 */

struct CREControl *__thiscall CREDialog::GetControlAtPoint(CREDialog *this, struct tagPOINT a2)
{
  struct CREControl *result; // eax
  int v4; // ebp
  int v5; // edi
  _DWORD *v6; // esi
  _DWORD *v7; // [esp+Ch] [ebp-4h]

  result = 0;
  v4 = -1;
  v5 = 0;
  v7 = 0;
  if ( *((int *)this + 192) > 0 )
  {
    do
    {
      v6 = *(_DWORD **)(*((_DWORD *)this + 191) + 4 * v5);
      if ( v6
        && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 140))(v6)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 148))(v6)
        && (*(int (__thiscall **)(_DWORD *, LONG, LONG))(*v6 + 124))(v6, a2.x, a2.y)
        && v6[131] > v4 )
      {
        v7 = v6;
        v4 = v6[131];
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)this + 192) );
    return (struct CREControl *)v7;
  }
  return result;
}
