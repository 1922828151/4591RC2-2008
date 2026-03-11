/*
 * func-name: ??0Input@@QAE@XZ
 * func-address: 0x100dbbe0
 * callers: none
 * callees: none
 */

Input *__thiscall Input::Input(Input *this)
{
  *(_DWORD *)this = &Input::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  std::string::string((char *)this + 56);
  std::string::string((char *)this + 84);
  *((float *)this + 428) = 0.0;
  *((float *)this + 429) = 0.0;
  *((_BYTE *)this + 20) = 0;
  *((float *)this + 2) = 1.0;
  *((float *)this + 4) = 1.0;
  memset32((char *)this + 1720, 1, 0x400u);
  *((_DWORD *)this + 1454) = 1;
  *((_DWORD *)this + 1455) = 1;
  return this;
}
