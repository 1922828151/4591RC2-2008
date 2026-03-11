/*
 * func-name: ??1CControlBox@@UAE@XZ
 * func-address: 0x101557e0
 * callers: 0x100a2620
 * callees: 0x100c7390, 0x101a2500
 */

void __thiscall CControlBox::~CControlBox(CControlBox *this)
{
  unsigned int v2; // edi
  int i; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // ecx

  *(_DWORD *)this = &CControlBox::`vftable';
  v2 = 0;
  for ( i = 0; ; i += 12 )
  {
    v4 = *((_DWORD *)this + 134);
    if ( !v4 || v2 >= (*((_DWORD *)this + 135) - v4) / 12 )
      break;
    v5 = *((_DWORD *)this + 134);
    if ( !v5 || v2 >= (*((_DWORD *)this + 135) - v5) / 12 )
      invalid_parameter_noinfo();
    v6 = *(_DWORD *)(i + *((_DWORD *)this + 134));
    if ( v6 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 4))(v6, 1);
    ++v2;
  }
  if ( *((_DWORD *)this + 134) )
    operator delete(*((void **)this + 134));
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 136) = 0;
  CREControl::~CREControl(this);
}
