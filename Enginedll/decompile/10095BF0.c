/*
 * func-name: ?HandleMessages@Engine@@QAEJPAUHWND__@@IIJ@Z
 * func-address: 0x10095bf0
 * callers: none
 * callees: 0x100dad30, 0x100dada0, 0x101189f0
 */

LRESULT __thiscall Engine::HandleMessages(Engine *this, HWND a2, UINT a3, WPARAM C, LPARAM a5)
{
  Input *v5; // eax
  struct RenderDevice *v6; // eax

  if ( !RenderDevice::Instance() )
    return DefWindowProcA(a2, a3, C, a5);
  v5 = Input::Instance();
  Input::MsgProc(v5, a2, a3, C, a5);
  v6 = RenderDevice::Instance();
  return (*(int (__thiscall **)(struct RenderDevice *, HWND, UINT, WPARAM, LPARAM))(*(_DWORD *)v6 + 28))(
           v6,
           a2,
           a3,
           C,
           a5);
}
