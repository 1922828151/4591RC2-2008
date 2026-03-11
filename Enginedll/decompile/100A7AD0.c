/*
 * func-name: ?StaticOnCreateDevice@CMLIMEEditBox@@SAJXZ
 * func-address: 0x100a7ad0
 * callers: none
 * callees: 0x1006ad40, 0x100971c0
 */

int __cdecl CMLIMEEditBox::StaticOnCreateDevice()
{
  struct Engine *v0; // eax

  v0 = Engine::Instance();
  CMLIMEEditBox::s_hImcDef = (int)CMLIMEEditBox::_ImmGetContext(*((void **)v0 + 35));
  return 0;
}
