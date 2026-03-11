/*
 * func-name: ??1Input@@UAE@XZ
 * func-address: 0x10028840
 * callers: 0x100288d0
 * callees: 0x1000db00, 0x101a2500
 */

void __thiscall Input::~Input(Input *this)
{
  *(_DWORD *)this = &Input::`vftable';
  std::string::~string((char *)this + 84);
  std::string::~string((char *)this + 56);
  if ( *((_DWORD *)this + 11) )
    operator delete(*((void **)this + 11));
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  sub_1000DB00((int *)this + 6);
}
