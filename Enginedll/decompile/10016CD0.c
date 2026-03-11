/*
 * func-name: ?SetClearScreen@RenderDevice@@UAEX_N@Z
 * func-address: 0x10016cd0
 * callers: none
 * callees: none
 */

void __thiscall RenderDevice::SetClearScreen(RenderDevice *this, bool a2)
{
  *((_BYTE *)this + 1572) = a2;
}
