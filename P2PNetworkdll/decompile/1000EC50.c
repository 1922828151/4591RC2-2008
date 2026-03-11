/*
 * func-name: ?c_upnp_state_to_string@P2P@Outpop@@YAPBDW4EUPNPState@12@@Z
 * func-address: 0x1000ec50
 * callers: none
 * callees: none
 */

const char *__cdecl Outpop::P2P::c_upnp_state_to_string(int a1)
{
  const char *result; // eax

  switch ( a1 )
  {
    case 1:
      result = "DeviceFinding";
      break;
    case 2:
      result = "AddressMapping";
      break;
    case 3:
      result = "NotFindDevice";
      break;
    case 4:
      result = "AddressMapSucceed";
      break;
    case 5:
      result = "AddressMapFailed";
      break;
    case 6:
      result = "UPNPError";
      break;
    default:
      result = "UPNPUnknown";
      break;
  }
  return result;
}
