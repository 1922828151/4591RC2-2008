/*
 * func-name: ??1ISave@@QAE@XZ
 * func-address: 0x10010930
 * callers: 0x100367e0, 0x10036830, 0x10036880, 0x1011b1a0, 0x1011b2a0, 0x1011b780, 0x1011f570
 * callees: 0x1000db00, 0x101a2500
 */

void __thiscall ISave::~ISave(ISave *this)
{
  void *v2; // eax

  v2 = (void *)*((_DWORD *)this + 18);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 12) = 0;
  if ( *((_DWORD *)this + 14) )
    operator delete(*((void **)this + 14));
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  sub_1000DB00((int *)this + 8);
  std::string::~string((char *)this + 4);
}
