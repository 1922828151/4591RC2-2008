/*
 * func-name: ?FindPoint@CMultiLineEB@@IAE_NABUtagPOINT@@AAH1@Z
 * func-address: 0x100ae4a0
 * callers: 0x100ae570
 * callees: 0x10019470, 0x100a57f0
 */

char __thiscall CMultiLineEB::FindPoint(CMultiLineEB *this, const struct tagPOINT *a2, int *a3, int *a4)
{
  const struct tagPOINT *v4; // edi
  _DWORD *v6; // ebp
  int v8; // ebx
  unsigned int *v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  void ***v13; // eax
  int *v14; // esi

  v4 = a2;
  v6 = (_DWORD *)((char *)this + 564);
  if ( !PtInRect((const RECT *)((char *)this + 564), *a2) )
    return 0;
  v8 = v4->x - *v6;
  v9 = (unsigned int *)a3;
  v10 = (v4->y - *((_DWORD *)this + 142)) / *((_DWORD *)this + 203) - 1;
  *a3 = v10;
  if ( v4->y % *((_DWORD *)this + 203) )
    *v9 = v10 + 1;
  v11 = *((_DWORD *)this + 224);
  if ( v11 )
    v12 = (*((_DWORD *)this + 225) - v11) >> 2;
  else
    v12 = 0;
  if ( (int)*v9 > v12 - 1 || (*v9 & 0x80000000) != 0 )
    return 0;
  v13 = *(void ****)std::vector<Model *>::operator[]((_DWORD *)this + 223, *v9);
  v14 = a4;
  a2 = 0;
  CREEditBox::CUniBuffer::XtoCP(*v13, v8, a4, (int *)&a2);
  if ( a2 )
    ++*v14;
  return 1;
}
