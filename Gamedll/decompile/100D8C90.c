/*
 * func-name: sub_100D8C90
 * func-address: 0x100d8c90
 * callers: 0x10006d52
 * callees: 0x1000236a, 0x102c9d98
 */

int __thiscall sub_100D8C90(int this)
{
  void *v2; // ebx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // eax
  _DWORD v6[7]; // [esp-Ch] [ebp-58h] BYREF
  int v7; // [esp+10h] [ebp-3Ch]
  float v8; // [esp+14h] [ebp-38h]
  float v9; // [esp+18h] [ebp-34h]
  float v10; // [esp+1Ch] [ebp-30h]
  float v11; // [esp+20h] [ebp-2Ch]
  float v12; // [esp+24h] [ebp-28h]
  int v13; // [esp+28h] [ebp-24h]
  _DWORD *v14; // [esp+3Ch] [ebp-10h]
  int v15; // [esp+48h] [ebp-4h]

  v2 = (void *)(this + 1132);
  std::string::operator=(this + 1160, this + 1132);
  if ( std::string::length(this + 1188) )
    *(_DWORD *)(this + 1216) = World::FindActor(*(_DWORD *)(this + 712), this + 1188);
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 1468);
  if ( v3 )
    (**v3)(v3, 1);
  v14 = operator new(0x200u);
  v15 = 0;
  if ( v14 )
    v4 = sub_1000236A(
           *(_DWORD *)(this + 712),
           *(_DWORD *)(this + 1240),
           *(float *)(this + 1264),
           *(float *)(this + 1268));
  else
    v4 = 0;
  v13 = 0;
  v12 = 0.0;
  v15 = -1;
  v11 = 1.0;
  *(_DWORD *)(this + 1468) = v4;
  v10 = 1.0;
  v9 = 0.0;
  v8 = 0.0;
  v7 = 0;
  v14 = v6;
  std::string::string(v6, v2);
  return Texture::Load(
           *(_DWORD *)(this + 1468) + 356,
           v6[0],
           v6[1],
           v6[2],
           v6[3],
           v6[4],
           v6[5],
           v6[6],
           v7,
           LODWORD(v8),
           LODWORD(v9),
           LODWORD(v10),
           LODWORD(v11),
           LODWORD(v12),
           v13);
}
