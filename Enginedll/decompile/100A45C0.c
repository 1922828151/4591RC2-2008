/*
 * func-name: ?StaticOnCreateDevice@CREIMEEditBox@@SAJXZ
 * func-address: 0x100a45c0
 * callers: none
 * callees: 0x1006ad40, 0x100971c0
 */

int __cdecl CREIMEEditBox::StaticOnCreateDevice()
{
  struct Engine *v0; // eax

  v0 = Engine::Instance();
  CREIMEEditBox::s_hImcDef = (int)CREIMEEditBox::_ImmGetContext(*((void **)v0 + 35));
  return 0;
}
