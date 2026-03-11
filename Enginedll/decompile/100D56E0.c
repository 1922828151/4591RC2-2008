/*
 * func-name: ??0CGUIWindow@@QAE@PAVCREDialog@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100d56e0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall CGUIWindow::CGUIWindow(
        _DWORD *this,
        int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  this[1] = a2;
  *(_BYTE *)this = 0;
  *((_BYTE *)this + 1) = 1;
  *((_BYTE *)this + 2) = 1;
  std::string::~string(&a3);
  return this;
}
