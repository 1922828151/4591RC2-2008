/*
 * func-name: ?GetControlFactory@GUISystem@@QAEPAVControlFactory@@XZ_0
 * func-address: 0x10075e80
 * callers: 0x10075ee0, 0x100d77a0, 0x1014a540, 0x1014f930, 0x1014f9e0
 * callees: 0x10075070, 0x101a26a0
 */

struct ControlFactory *__thiscall GUISystem::GetControlFactory(GUISystem *this)
{
  if ( (dword_10284F10 & 1) == 0 )
  {
    dword_10284F10 |= 1u;
    sub_10075070(dword_10284EF8);
    atexit(sub_101B8BA0);
  }
  return (struct ControlFactory *)dword_10284EF8;
}
