/*
 * func-name: ?StripLODs@ModelFrame@@QAEXH@Z
 * func-address: 0x1009ee30
 * callers: none
 * callees: 0x1002c930
 */

void __thiscall ModelFrame::StripLODs(ModelFrame *this, unsigned int a2)
{
  sub_1002C930(this, a2, 0);
  *((_DWORD *)this + 10) = a2;
}
