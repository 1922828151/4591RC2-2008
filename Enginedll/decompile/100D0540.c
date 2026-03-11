/*
 * func-name: ??0ActorGroup@@QAE@XZ
 * func-address: 0x100d0540
 * callers: 0x1010b430, 0x1010bc60
 * callees: 0x1001fe20, 0x101786e0, 0x101a251c
 */

ActorGroup *__thiscall ActorGroup::ActorGroup(ActorGroup *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  std::string::string((char *)this + 16);
  *((float *)this + 11) = 0.0;
  *((float *)this + 12) = 0.0;
  *((float *)this + 13) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 16) = 0.0;
  *((float *)this + 17) = 0.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 20) = 0.0;
  *((float *)this + 21) = 0.0;
  *((float *)this + 23) = 0.0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  memset((char *)this + 44, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 26) = 1.0;
  std::vector<Actor *>::reserve((int)this, 0x40u);
  return this;
}
