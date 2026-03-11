/*
 * func-name: ??1MaterialManager@@QAE@XZ
 * func-address: 0x1002a950
 * callers: 0x101b9020
 * callees: 0x1000db00, 0x101a2500
 */

void __thiscall MaterialManager::~MaterialManager(MaterialManager *this)
{
  sub_1000DB00((int *)this + 10);
  if ( *((_DWORD *)this + 6) )
    operator delete(*((void **)this + 6));
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( *((_DWORD *)this + 2) )
    operator delete(*((void **)this + 2));
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}
