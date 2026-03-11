/*
 * func-name: ??1CREControl@@UAE@XZ
 * func-address: 0x100c7390
 * callers: 0x10069f30, 0x10069fa0, 0x1006a980, 0x1006f380, 0x10070a10, 0x10070a30, 0x100717b0, 0x100721d0, 0x100724e0, 0x10072bb0, 0x10073700, 0x10073b00, 0x10074170, 0x10074690, 0x100c7520, 0x100c7850, 0x100c7bb0, 0x100c7c70, 0x100c7c80, 0x100c7d60, 0x100c7e50, 0x100c7f10, 0x100c84a0, 0x100c8630, 0x100c87e0, 0x100c89e0, 0x100c8b30, 0x100c8b90, 0x100c9cb0, 0x100c9db0, 0x100caa50, 0x100cab00, 0x100cbde0, 0x100d4880, 0x100d4910, 0x100d49d0, 0x100d4f90, 0x10150b10, 0x10150dc0, 0x101553b0, 0x10155430, 0x101555a0, 0x10155660, 0x10155770, 0x101557e0, 0x10156da0, 0x10157070
 * callees: 0x10054c00, 0x10071140, 0x101a2500, 0x101a259e
 */

void __thiscall CREControl::~CREControl(CREControl *this)
{
  int i; // edi
  void **v3; // edi
  int v4; // ebx
  struct AudioDevice *v5; // eax
  struct AudioDevice *v6; // eax
  struct AudioDevice *v7; // eax
  struct AudioDevice *v8; // eax
  struct AudioDevice *v9; // eax

  *(_DWORD *)this = &CREControl::`vftable';
  for ( i = 0; i < *((_DWORD *)this + 31); ++i )
    operator delete(*(void **)(*((_DWORD *)this + 30) + 4 * i));
  if ( *((_DWORD *)this + 30) )
  {
    free(*((void **)this + 30));
    *((_DWORD *)this + 30) = 0;
  }
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 31) = 0;
  v3 = (void **)((char *)this + 488);
  v4 = 7;
  do
  {
    if ( *v3 )
      operator delete(*v3);
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( CREDialog::s_pControlLast == this )
    CREDialog::s_pControlLast = 0;
  if ( CREDialog::s_pControlPressed == this )
    CREDialog::s_pControlPressed = 0;
  if ( CREDialog::s_pControlFocus == this )
    CREDialog::s_pControlFocus = 0;
  if ( *((_DWORD *)this + 16) )
  {
    v5 = AudioDevice::Instance();
    (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v5 + 20))(v5, *((_DWORD *)this + 16));
  }
  if ( *((_DWORD *)this + 17) )
  {
    v6 = AudioDevice::Instance();
    (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v6 + 20))(v6, *((_DWORD *)this + 17));
  }
  if ( *((_DWORD *)this + 18) )
  {
    v7 = AudioDevice::Instance();
    (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v7 + 20))(v7, *((_DWORD *)this + 18));
  }
  if ( *((_DWORD *)this + 19) )
  {
    v8 = AudioDevice::Instance();
    (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v8 + 20))(v8, *((_DWORD *)this + 19));
  }
  if ( *((_DWORD *)this + 20) )
  {
    v9 = AudioDevice::Instance();
    (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v9 + 20))(v9, *((_DWORD *)this + 20));
  }
  `eh vector destructor iterator'((char *)this + 180, 0x1Cu, 7, std::wstring::~wstring);
  if ( *((_DWORD *)this + 30) )
  {
    free(*((void **)this + 30));
    *((_DWORD *)this + 30) = 0;
  }
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 31) = 0;
  sub_10071140((int *)this);
}
