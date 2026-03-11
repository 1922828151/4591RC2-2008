/*
 * func-name: sub_1009A050
 * func-address: 0x1009a050
 * callers: 0x10097910, 0x101b8130
 * callees: none
 */

int __thiscall sub_1009A050(int this)
{
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  std::string::string(this + 16);
  std::string::string(this + 44);
  std::string::string(this + 76);
  *(_BYTE *)(this + 72) = 0;
  std::string::operator=(this + 76, &unk_10285868);
  return this;
}
