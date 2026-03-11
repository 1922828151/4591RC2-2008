/*
 * func-name: ?WriteSnapshot@AircraftVehicle@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101b62a0
 * callers: 0x1001a253
 * callees: 0x1000c4f5
 */

bool __thiscall GameClient::AircraftVehicle::WriteSnapshot(GameClient::AircraftVehicle *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax

  result = GameClient::ControlledEstab::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v4 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 137) = *(_DWORD *)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 136) = *(_DWORD *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v6 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 138) = *(_DWORD *)(v6 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}
