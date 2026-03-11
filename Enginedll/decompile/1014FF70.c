/*
 * func-name: ?GetXYByPos@CItemHolder@@QAE_NHAAH0@Z
 * func-address: 0x1014ff70
 * callers: none
 * callees: none
 */

char __thiscall CItemHolder::GetXYByPos(CItemHolder *this, int a2, int *a3, int *a4)
{
  if ( a2 >= *((_DWORD *)this + 142) )
    return 0;
  *a3 = a2 % *((_DWORD *)this + 149);
  *a4 = a2 / *((_DWORD *)this + 149);
  return 1;
}
