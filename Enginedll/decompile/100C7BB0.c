/*
 * func-name: ??1CREScrollBar@@UAE@XZ
 * func-address: 0x100c7bb0
 * callers: 0x1006a400, 0x100cbcc0, 0x100cbde0
 * callees: none
 */

void __thiscall CREScrollBar::~CREScrollBar(CREScrollBar *this)
{
  *(_DWORD *)this = &CREScrollBar::`vftable';
  CREControl::~CREControl(this);
}
