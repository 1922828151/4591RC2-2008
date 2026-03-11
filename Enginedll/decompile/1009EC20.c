/*
 * func-name: ??1ModelFrame@@QAE@XZ
 * func-address: 0x1009ec20
 * callers: 0x10005d50, 0x10035930, 0x1003dda0, 0x1009ec20, 0x100ef290
 * callees: 0x100203c0, 0x1009ec20, 0x1017a0b0, 0x101a2500
 */

void __thiscall ModelFrame::~ModelFrame(ModelFrame *this)
{
  ModelFrame *v2; // edi
  void *v3; // edi

  v2 = (ModelFrame *)*((_DWORD *)this + 89);
  if ( v2 )
  {
    ModelFrame::~ModelFrame(v2);
    operator delete(v2);
    *((_DWORD *)this + 89) = 0;
  }
  v3 = (void *)*((_DWORD *)this + 90);
  if ( v3 )
  {
    ModelFrame::~ModelFrame(*((ModelFrame **)this + 90));
    operator delete(v3);
    *((_DWORD *)this + 90) = 0;
  }
  if ( *((_DWORD *)this + 110) )
    operator delete(*((void **)this + 110));
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = 0;
  if ( *((_DWORD *)this + 106) )
    operator delete(*((void **)this + 106));
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  sub_1017A0B0((char *)this + 380);
  std::string::~string((char *)this + 72);
  std::string::~string((char *)this + 44);
  std::vector<BBox>::_Tidy((int)this + 24);
  if ( *((_DWORD *)this + 1) )
    operator delete(*((void **)this + 1));
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
}
