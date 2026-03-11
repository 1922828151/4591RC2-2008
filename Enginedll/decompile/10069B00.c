/*
 * func-name: ?GetD3DDevice@CREDialogResourceManager@@QAEPAUIDirect3DDevice9@@XZ
 * func-address: 0x10069b00
 * callers: none
 * callees: none
 */

struct IDirect3DDevice9 *__thiscall CREDialogResourceManager::GetD3DDevice(CREDialogResourceManager *this)
{
  return (struct IDirect3DDevice9 *)*((_DWORD *)this + 8);
}
