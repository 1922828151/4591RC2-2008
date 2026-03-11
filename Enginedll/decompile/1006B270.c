/*
 * func-name: ?ResolutionChanged@CRENumericEdit@@UAEXNNNN@Z
 * func-address: 0x1006b270
 * callers: none
 * callees: 0x101a26c0
 */

void __thiscall CRENumericEdit::ResolutionChanged(CRENumericEdit *this, double a2, double a3, double a4, double a5)
{
  double v6; // st5
  int v7; // ecx

  v6 = (double)*((int *)this + 185);
  *((_DWORD *)this + 184) = (int)((double)*((int *)this + 184) / a2 * a4);
  v7 = *((_DWORD *)this + 190);
  *((_DWORD *)this + 185) = (int)(v6 / a2 * a4);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 152))(
    v7,
    LODWORD(a2),
    HIDWORD(a2),
    LODWORD(a3),
    HIDWORD(a3),
    LODWORD(a4),
    HIDWORD(a4),
    LODWORD(a5),
    HIDWORD(a5));
  (*(void (__thiscall **)(CRENumericEdit *))(*(_DWORD *)this + 164))(this);
}
