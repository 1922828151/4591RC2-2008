/*
 * func-name: ?PosOnPoint@CItemHolder@@QAE_NAAUtagPOINT@@AAH1@Z
 * func-address: 0x1014fd50
 * callers: 0x10153480
 * callees: none
 */

char __thiscall CItemHolder::PosOnPoint(CItemHolder *this, struct tagPOINT *a2, int *a3, int *a4)
{
  LONG x; // ebx
  LONG y; // edi
  _DWORD *v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  int v14; // ecx

  x = a2->x;
  y = a2->y;
  v7 = (_DWORD *)((char *)this + 164);
  if ( !PtInRect((const RECT *)((char *)this + 164), *a2) )
    return 0;
  v8 = x - (*v7 + *((_DWORD *)this + 145));
  v9 = y - (*((_DWORD *)this + 42) + *((_DWORD *)this + 146));
  v10 = *((_DWORD *)this + 148);
  if ( v9 % (*((_DWORD *)this + 144) + v10) > v10 )
    return 0;
  v11 = *((_DWORD *)this + 144) + v10;
  if ( v9 / v11 >= *((_DWORD *)this + 150) )
    return 0;
  *a4 = v9 / v11;
  v12 = *((_DWORD *)this + 147);
  v13 = *((_DWORD *)this + 143);
  if ( v8 % (v13 + v12) > v12 )
    return 0;
  v14 = v13 + v12;
  if ( v8 / v14 >= *((_DWORD *)this + 149) )
    return 0;
  *a3 = v8 / v14;
  return 1;
}
