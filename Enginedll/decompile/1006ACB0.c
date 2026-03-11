/*
 * func-name: ?getScrollBarHeight@CMultiLineEB@@QAEHXZ
 * func-address: 0x1006acb0
 * callers: none
 * callees: none
 */

int __thiscall CMultiLineEB::getScrollBarHeight(CMultiLineEB *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 198) + 176) - *(_DWORD *)(*((_DWORD *)this + 198) + 168);
}
