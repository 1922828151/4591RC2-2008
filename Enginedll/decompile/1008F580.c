/*
 * func-name: ??1Editor@@QAE@XZ
 * func-address: 0x1008f580
 * callers: none
 * callees: 0x1000cb70, 0x1000db00, 0x10010ec0, 0x10011870, 0x10013c80, 0x10118a60, 0x101a2500
 */

void __thiscall Editor::~Editor(Editor *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  *(_DWORD *)this = &Editor::`vftable';
  v2 = *((_DWORD *)this + 16);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)this + 16) = 0;
  }
  v3 = *((_DWORD *)this + 17);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 17));
    *((_DWORD *)this + 17) = 0;
  }
  v4 = *((_DWORD *)this + 566);
  if ( v4 )
  {
    sub_10011870(v4, *((_DWORD *)this + 567));
    operator delete(*((void **)this + 566));
  }
  *((_DWORD *)this + 566) = 0;
  *((_DWORD *)this + 567) = 0;
  *((_DWORD *)this + 568) = 0;
  if ( *((_DWORD *)this + 562) )
    operator delete(*((void **)this + 562));
  *((_DWORD *)this + 562) = 0;
  *((_DWORD *)this + 563) = 0;
  *((_DWORD *)this + 564) = 0;
  sub_1000DB00((int *)this + 557);
  std::string::~string((char *)this + 2200);
  std::string::~string((char *)this + 2172);
  sub_10013C80((_DWORD *)this + 539);
  operator delete(*((void **)this + 540));
  *((_DWORD *)this + 540) = 0;
  sub_10013C80((_DWORD *)this + 536);
  operator delete(*((void **)this + 537));
  *((_DWORD *)this + 537) = 0;
  Camera::~Camera((Editor *)((char *)this + 672));
  Camera::~Camera((Editor *)((char *)this + 252));
  Texture::~Texture((void **)this + 18);
  RenderBase::~RenderBase(this);
}
