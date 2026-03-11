/*
 * func-name: ?getScrollBarWidth@CMultiLineEB@@QAEHXZ
 * func-address: 0x1006ac90
 * callers: none
 * callees: none
 */

int __thiscall CMultiLineEB::getScrollBarWidth(CMultiLineEB *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 198) + 172) - *(_DWORD *)(*((_DWORD *)this + 198) + 164);
}
