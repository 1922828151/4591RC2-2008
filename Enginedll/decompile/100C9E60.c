/*
 * func-name: ??1CTYDialog@@UAE@XZ
 * func-address: 0x100c9e60
 * callers: 0x1006b830, 0x100d4d80, 0x10155af0, 0x10155b90, 0x1015abd0, 0x1015bb60
 * callees: 0x1006d030, 0x100c6de0, 0x100d6d20, 0x101189f0, 0x1014a3e0, 0x101a2500
 */

void __thiscall CTYDialog::~CTYDialog(CTYDialog *this)
{
  struct RenderDevice *v2; // eax
  char *v3; // edi
  char *v4; // ebp

  *(_DWORD *)this = &CTYDialog::`vftable';
  if ( *((_BYTE *)this + 3768) )
  {
    *((_BYTE *)this + 3768) = 0;
    if ( --CTYDialog::m_iHasDialogHasInput <= 0 )
    {
      CTYDialog::m_iHasDialogHasInput = 0;
      *((_BYTE *)CDlgMgr::Instance() + 128) = 0;
      if ( !*((_BYTE *)GUISystem::Instance() + 46) )
      {
        v2 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v2 + 372))(v2, 0, 1);
      }
    }
  }
  v3 = (char *)*((_DWORD *)this + 957);
  if ( *((_DWORD *)this + 956) > (unsigned int)v3 )
    invalid_parameter_noinfo();
  v4 = (char *)*((_DWORD *)this + 956);
  if ( (unsigned int)v4 > *((_DWORD *)this + 957) )
    invalid_parameter_noinfo();
  if ( v4 != v3 )
    *((_DWORD *)this + 957) = sub_1006D030(v3, *((char **)this + 957), v4);
  std::wstring::~wstring((char *)this + 3840);
  if ( *((_DWORD *)this + 956) )
    operator delete(*((void **)this + 956));
  *((_DWORD *)this + 956) = 0;
  *((_DWORD *)this + 957) = 0;
  *((_DWORD *)this + 958) = 0;
  if ( *((_DWORD *)this + 939) )
    operator delete(*((void **)this + 939));
  *((_DWORD *)this + 939) = 0;
  *((_DWORD *)this + 940) = 0;
  *((_DWORD *)this + 941) = 0;
  CREDialog::~CREDialog((void **)this);
}
