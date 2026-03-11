/*
 * func-name: ?ResetCaretBlink@CREEditBox@@IAEXXZ
 * func-address: 0x100a59e0
 * callers: 0x100a7200, 0x100ac530, 0x100ac790, 0x100ac9a0, 0x100acec0, 0x100adae0, 0x100c5fd0, 0x100ca110
 * callees: 0x1007e540, 0x1007e670
 */

void __thiscall CREEditBox::ResetCaretBlink(CREEditBox *this)
{
  CRETimer *v2; // eax

  *((_BYTE *)this + 744) = 1;
  v2 = REGetGlobalTimer();
  *((double *)this + 92) = CRETimer::GetAbsoluteTime(v2);
}
