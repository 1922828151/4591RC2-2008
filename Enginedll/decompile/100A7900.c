/*
 * func-name: ?SetHasInput@CTYDialog@@QAEX_N@Z
 * func-address: 0x100a7900
 * callers: 0x10149580, 0x101495d0, 0x10149640, 0x101499c0, 0x10149d00, 0x1015b9f0
 * callees: 0x100d6d20, 0x101189f0, 0x1014a3e0
 */

void __thiscall CTYDialog::SetHasInput(CTYDialog *this, bool a2)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax

  if ( *((_BYTE *)this + 3768) != a2 )
  {
    *((_BYTE *)this + 3768) = a2;
    if ( a2 )
    {
      ++CTYDialog::m_iHasDialogHasInput;
      *((_BYTE *)CDlgMgr::Instance() + 128) = 1;
      v2 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v2 + 372))(v2, 1, 0);
    }
    else if ( --CTYDialog::m_iHasDialogHasInput <= 0 )
    {
      CTYDialog::m_iHasDialogHasInput = 0;
      *((_BYTE *)CDlgMgr::Instance() + 128) = 0;
      if ( !*((_BYTE *)GUISystem::Instance() + 46) )
      {
        v3 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v3 + 372))(v3, 0, 1);
      }
    }
  }
}
