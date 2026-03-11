/*
 * func-name: ??1CGUIWindow@@QAE@XZ
 * func-address: 0x1006bba0
 * callers: none
 * callees: none
 */

void __thiscall CGUIWindow::~CGUIWindow(CGUIWindow *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 1);
    *((_DWORD *)this + 1) = 0;
  }
}
