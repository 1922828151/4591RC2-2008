/*
 * func-name: ?ResolutionChanged@CRETextBox@@UAEXNNNN@Z
 * func-address: 0x1006afa0
 * callers: none
 * callees: 0x101a26c0
 */

void __thiscall CRETextBox::ResolutionChanged(CRETextBox *this, double a2, double a3, double a4, double a5)
{
  double v5; // st7

  v5 = (double)*((int *)this + 177);
  *((_DWORD *)this + 176) = (int)((double)*((int *)this + 176) / a2 * a4);
  *((_DWORD *)this + 177) = (int)(v5 / a3 * a5);
  (*(void (__thiscall **)(CRETextBox *))(*(_DWORD *)this + 164))(this);
}
