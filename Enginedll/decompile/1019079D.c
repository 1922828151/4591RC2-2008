/*
 * func-name: sub_1019079D
 * func-address: 0x1019079d
 * callers: none
 * callees: none
 */

const wchar_t *__stdcall sub_1019079D(int a1)
{
  const wchar_t *result; // eax

  if ( a1 > -2146881278 )
  {
    if ( a1 <= -2146881229 )
    {
      if ( a1 == -2146881229 )
        return L"CRYPT_E_ASN1_PDU_TYPE";
      switch ( a1 )
      {
        case -2146881277:
          result = L"CRYPT_E_ASN1_CORRUPT";
          break;
        case -2146881276:
          result = L"CRYPT_E_ASN1_LARGE";
          break;
        case -2146881275:
          result = L"CRYPT_E_ASN1_CONSTRAINT";
          break;
        case -2146881274:
          result = L"CRYPT_E_ASN1_MEMORY";
          break;
        case -2146881273:
          result = L"CRYPT_E_ASN1_OVERFLOW";
          break;
        case -2146881272:
          result = L"CRYPT_E_ASN1_BADPDU";
          break;
        case -2146881271:
          result = L"CRYPT_E_ASN1_BADARGS";
          break;
        case -2146881270:
          result = L"CRYPT_E_ASN1_BADREAL";
          break;
        case -2146881269:
          result = L"CRYPT_E_ASN1_BADTAG";
          break;
        case -2146881268:
          result = L"CRYPT_E_ASN1_CHOICE";
          break;
        case -2146881267:
          result = L"CRYPT_E_ASN1_RULE";
          break;
        case -2146881266:
          result = L"CRYPT_E_ASN1_UTF8";
          break;
        default:
          return L"Unknown";
      }
      return result;
    }
    if ( a1 <= 1459 )
    {
      if ( a1 == 1459 )
        return L"ERROR_REQUIRES_INTERACTIVE_WINDOWSTATION";
      if ( a1 <= -2005397209 )
      {
        if ( a1 == -2005397209 )
          return L"DMUS_E_BADINSTRUMENT";
        if ( a1 > -2146367458 )
        {
          if ( a1 > -2005532192 )
          {
            if ( a1 > -2005531796 )
            {
              if ( a1 > -2005530600 )
              {
                if ( a1 > -2005530522 )
                {
                  if ( a1 > -2005401420 )
                  {
                    if ( a1 <= -2005397229 )
                    {
                      if ( a1 == -2005397229 )
                        return L"DMUS_E_INVALIDPOS";
                      if ( a1 > -2005397244 )
                      {
                        switch ( a1 )
                        {
                          case -2005397243:
                            return L"DMUS_E_BUFFERNOTSET";
                          case -2005397242:
                            return L"DMUS_E_BUFFERNOTAVAILABLE";
                          case -2005397240:
                            return L"DMUS_E_NOTADLSCOL";
                          case -2005397239:
                            return L"DMUS_E_INVALIDOFFSET";
                          case -2005397231:
                            return L"DMUS_E_ALREADY_LOADED";
                        }
                      }
                      else
                      {
                        switch ( a1 )
                        {
                          case -2005397244:
                            return L"DMUS_E_INSUFFICIENTBUFFER";
                          case -2005401410:
                            return L"DSERR_DS8_REQUIRED";
                          case -2005401400:
                            return L"DSERR_SENDLOOP";
                          case -2005401390:
                            return L"DSERR_BADSENDBUFFERGUID";
                          case -2005397247:
                            return L"DMUS_E_DRIVER_FAILED";
                          case -2005397246:
                            return L"DMUS_E_PORTS_OPEN";
                          case -2005397245:
                            return L"DMUS_E_DEVICE_IN_USE";
                        }
                      }
                      return L"Unknown";
                    }
                    switch ( a1 )
                    {
                      case -2005397228:
                        result = L"DMUS_E_INVALIDPATCH";
                        break;
                      case -2005397227:
                        result = L"DMUS_E_CANNOTSEEK";
                        break;
                      case -2005397226:
                        result = L"DMUS_E_CANNOTWRITE";
                        break;
                      case -2005397225:
                        result = L"DMUS_E_CHUNKNOTFOUND";
                        break;
                      case -2005397223:
                        result = L"DMUS_E_INVALID_DOWNLOADID";
                        break;
                      case -2005397216:
                        result = L"DMUS_E_NOT_DOWNLOADED_TO_PORT";
                        break;
                      case -2005397215:
                        result = L"DMUS_E_ALREADY_DOWNLOADED";
                        break;
                      case -2005397214:
                        result = L"DMUS_E_UNKNOWN_PROPERTY";
                        break;
                      case -2005397213:
                        result = L"DMUS_E_SET_UNSUPPORTED";
                        break;
                      case -2005397212:
                        result = L"DMUS_E_GET_UNSUPPORTED";
                        break;
                      case -2005397211:
                        result = L"DMUS_E_NOTMONO";
                        break;
                      case -2005397210:
                        result = L"DMUS_E_BADARTICULATION";
                        break;
                      default:
                        return L"Unknown";
                    }
                  }
                  else
                  {
                    if ( a1 == -2005401420 )
                      return L"DSERR_BUFFERTOOSMALL";
                    if ( a1 > -2005529766 )
                    {
                      if ( a1 > -2005401500 )
                      {
                        switch ( a1 )
                        {
                          case -2005401480:
                            return L"DSERR_NODRIVER";
                          case -2005401470:
                            return L"DSERR_ALREADYINITIALIZED";
                          case -2005401450:
                            return L"DSERR_BUFFERLOST";
                          case -2005401440:
                            return L"DSERR_OTHERAPPHASPRIO";
                          case -2005401430:
                            return L"DSERR_UNINITIALIZED";
                        }
                      }
                      else
                      {
                        switch ( a1 )
                        {
                          case -2005401500:
                            return L"DSERR_BADFORMAT";
                          case -2005529765:
                            return L"D3DXERR_DUPLICATENAMEDFRAGMENT";
                          case -2005529764:
                            return L"D3DXERR_CANNOTREMOVELASTITEM";
                          case -2005401590:
                            return L"DSERR_ALLOCATED";
                          case -2005401570:
                            return L"DSERR_CONTROLUNAVAIL";
                          case -2005401550:
                            return L"DSERR_INVALIDCALL";
                          case -2005401530:
                            return L"DSERR_PRIOLEVELNEEDED";
                        }
                      }
                      return L"Unknown";
                    }
                    if ( a1 == -2005529766 )
                      return L"D3DXERR_LOADEDMESHASNODATA";
                    if ( a1 > -2005530515 )
                    {
                      switch ( a1 )
                      {
                        case -2005529772:
                          return L"D3DXERR_CANNOTMODIFYINDEXBUFFER";
                        case -2005529771:
                          return L"D3DXERR_INVALIDMESH";
                        case -2005529770:
                          return L"D3DXERR_CANNOTATTRSORT";
                        case -2005529769:
                          return L"D3DXERR_SKINNINGNOTSUPPORTED";
                        case -2005529768:
                          return L"D3DXERR_TOOMANYINFLUENCES";
                        case -2005529767:
                          return L"D3DXERR_INVALIDDATA";
                      }
                      return L"Unknown";
                    }
                    switch ( a1 )
                    {
                      case -2005530515:
                        return L"D3DERR_DRIVERINVALIDCALL";
                      case -2005530521:
                        return L"D3DERR_MOREDATA";
                      case -2005530520:
                        return L"D3DERR_DEVICELOST";
                      case -2005530519:
                        return L"D3DERR_DEVICENOTRESET";
                      case -2005530518:
                        return L"D3DERR_NOTAVAILABLE";
                      case -2005530517:
                        return L"D3DERR_INVALIDDEVICE";
                      default:
                        return L"D3DERR_INVALIDCALL";
                    }
                  }
                }
                else if ( a1 == -2005530522 )
                {
                  return L"D3DERR_NOTFOUND";
                }
                else
                {
                  switch ( a1 )
                  {
                    case -2005530599:
                      result = L"D3DERR_UNSUPPORTEDCOLOROPERATION";
                      break;
                    case -2005530598:
                      result = L"D3DERR_UNSUPPORTEDCOLORARG";
                      break;
                    case -2005530597:
                      result = L"D3DERR_UNSUPPORTEDALPHAOPERATION";
                      break;
                    case -2005530596:
                      result = L"D3DERR_UNSUPPORTEDALPHAARG";
                      break;
                    case -2005530595:
                      result = L"D3DERR_TOOMANYOPERATIONS";
                      break;
                    case -2005530594:
                      result = L"D3DERR_CONFLICTINGTEXTUREFILTER";
                      break;
                    case -2005530593:
                      result = L"D3DERR_UNSUPPORTEDFACTORVALUE";
                      break;
                    case -2005530591:
                      result = L"D3DERR_CONFLICTINGRENDERSTATE";
                      break;
                    case -2005530590:
                      result = L"D3DERR_UNSUPPORTEDTEXTUREFILTER";
                      break;
                    case -2005530586:
                      result = L"D3DERR_CONFLICTINGTEXTUREPALETTE";
                      break;
                    case -2005530585:
                      result = L"D3DERR_DRIVERINTERNALERROR";
                      break;
                    default:
                      return L"Unknown";
                  }
                }
              }
              else if ( a1 == -2005530600 )
              {
                return L"D3DERR_WRONGTEXTUREFORMAT";
              }
              else
              {
                switch ( a1 )
                {
                  case -2005531772:
                    result = L"D3DXFERR_BADOBJECT";
                    break;
                  case -2005531771:
                    result = L"D3DXFERR_BADVALUE";
                    break;
                  case -2005531770:
                    result = L"D3DXFERR_BADTYPE";
                    break;
                  case -2005531769:
                    result = L"D3DXFERR_NOTFOUND";
                    break;
                  case -2005531768:
                    result = L"D3DXFERR_NOTDONEYET";
                    break;
                  case -2005531767:
                    result = L"D3DXFERR_FILENOTFOUND";
                    break;
                  case -2005531766:
                    result = L"D3DXFERR_RESOURCENOTFOUND";
                    break;
                  case -2005531765:
                    result = L"D3DXFERR_BADRESOURCE";
                    break;
                  case -2005531764:
                    result = L"D3DXFERR_BADFILETYPE";
                    break;
                  case -2005531763:
                    result = L"D3DXFERR_BADFILEVERSION";
                    break;
                  case -2005531762:
                    result = L"D3DXFERR_BADFILEFLOATSIZE";
                    break;
                  case -2005531761:
                    result = L"D3DXFERR_BADFILE";
                    break;
                  case -2005531760:
                    result = L"D3DXFERR_PARSEERROR";
                    break;
                  case -2005531759:
                    result = L"D3DXFERR_BADARRAYSIZE";
                    break;
                  case -2005531758:
                    result = L"D3DXFERR_BADDATAREFERENCE";
                    break;
                  case -2005531757:
                    result = L"D3DXFERR_NOMOREOBJECTS";
                    break;
                  case -2005531756:
                    result = L"D3DXFERR_NOMOREDATA";
                    break;
                  case -2005531755:
                    result = L"D3DXFERR_BADCACHEFILE";
                    break;
                  default:
                    return L"Unknown";
                }
              }
            }
            else if ( a1 == -2005531796 )
            {
              return L"DXFILEERR_NOINTERNET";
            }
            else
            {
              switch ( a1 )
              {
                case -2005532182:
                  result = L"DDERR_TOOBIGWIDTH";
                  break;
                case -2005532162:
                  result = L"DDERR_UNSUPPORTEDFORMAT";
                  break;
                case -2005532152:
                  result = L"DDERR_UNSUPPORTEDMASK";
                  break;
                case -2005532151:
                  result = L"DDERR_INVALIDSTREAM";
                  break;
                case -2005532135:
                  result = L"DDERR_VERTICALBLANKINPROGRESS";
                  break;
                case -2005532132:
                  result = L"DDERR_WASSTILLDRAWING";
                  break;
                case -2005532130:
                  result = L"DDERR_DDSCAPSCOMPLEXREQUIRED";
                  break;
                case -2005532112:
                  result = L"DDERR_XALIGN";
                  break;
                case -2005532111:
                  result = L"DDERR_INVALIDDIRECTDRAWGUID";
                  break;
                case -2005532110:
                  result = L"DDERR_DIRECTDRAWALREADYCREATED";
                  break;
                case -2005532109:
                  result = L"DDERR_NODIRECTDRAWHW";
                  break;
                case -2005532108:
                  result = L"DDERR_PRIMARYSURFACEALREADYEXISTS";
                  break;
                case -2005532107:
                  result = L"DDERR_NOEMULATION";
                  break;
                case -2005532106:
                  result = L"DDERR_REGIONTOOSMALL";
                  break;
                case -2005532105:
                  result = L"DDERR_CLIPPERISUSINGHWND";
                  break;
                case -2005532104:
                  result = L"DDERR_NOCLIPPERATTACHED";
                  break;
                case -2005532103:
                  result = L"DDERR_NOHWND";
                  break;
                case -2005532102:
                  result = L"DDERR_HWNDSUBCLASSED";
                  break;
                case -2005532101:
                  result = L"DDERR_HWNDALREADYSET";
                  break;
                case -2005532100:
                  result = L"DDERR_NOPALETTEATTACHED";
                  break;
                case -2005532099:
                  result = L"DDERR_NOPALETTEHW";
                  break;
                case -2005532098:
                  result = L"DDERR_BLTFASTCANTCLIP";
                  break;
                case -2005532097:
                  result = L"DDERR_NOBLTHW";
                  break;
                case -2005532096:
                  result = L"DDERR_NODDROPSHW";
                  break;
                case -2005532095:
                  result = L"DDERR_OVERLAYNOTVISIBLE";
                  break;
                case -2005532094:
                  result = L"DDERR_NOOVERLAYDEST";
                  break;
                case -2005532093:
                  result = L"DDERR_INVALIDPOSITION";
                  break;
                case -2005532092:
                  result = L"DDERR_NOTAOVERLAYSURFACE";
                  break;
                case -2005532091:
                  result = L"DDERR_EXCLUSIVEMODEALREADYSET";
                  break;
                case -2005532090:
                  result = L"DDERR_NOTFLIPPABLE";
                  break;
                case -2005532089:
                  result = L"DDERR_CANTDUPLICATE";
                  break;
                case -2005532088:
                  result = L"DDERR_NOTLOCKED";
                  break;
                case -2005532087:
                  result = L"DDERR_CANTCREATEDC";
                  break;
                case -2005532086:
                  result = L"DDERR_NODC";
                  break;
                case -2005532085:
                  result = L"DDERR_WRONGMODE";
                  break;
                case -2005532084:
                  result = L"DDERR_IMPLICITLYCREATED";
                  break;
                case -2005532083:
                  result = L"DDERR_NOTPALETTIZED";
                  break;
                case -2005532082:
                  result = L"DDERR_UNSUPPORTEDMODE";
                  break;
                case -2005532081:
                  result = L"DDERR_NOMIPMAPHW";
                  break;
                case -2005532080:
                  result = L"DDERR_INVALIDSURFACETYPE";
                  break;
                case -2005532072:
                  result = L"DDERR_NOOPTIMIZEHW";
                  break;
                case -2005532071:
                  result = L"DDERR_NOTLOADED";
                  break;
                case -2005532070:
                  result = L"DDERR_NOFOCUSWINDOW";
                  break;
                case -2005532069:
                  result = L"DDERR_NOTONMIPMAPSUBLEVEL";
                  break;
                case -2005532052:
                  result = L"DDERR_DCALREADYCREATED";
                  break;
                case -2005532042:
                  result = L"DDERR_NONONLOCALVIDMEM";
                  break;
                case -2005532032:
                  result = L"DDERR_CANTPAGELOCK";
                  break;
                case -2005532012:
                  result = L"DDERR_CANTPAGEUNLOCK";
                  break;
                case -2005531992:
                  result = L"DDERR_NOTPAGELOCKED";
                  break;
                case -2005531982:
                  result = L"DDERR_MOREDATA";
                  break;
                case -2005531981:
                  result = L"DDERR_EXPIRED";
                  break;
                case -2005531980:
                  result = L"DDERR_TESTFINISHED";
                  break;
                case -2005531979:
                  result = L"DDERR_NEWMODE";
                  break;
                case -2005531978:
                  result = L"DDERR_D3DNOTINITIALIZED";
                  break;
                case -2005531977:
                  result = L"DDERR_VIDEONOTACTIVE";
                  break;
                case -2005531976:
                  result = L"DDERR_NOMONITORINFORMATION";
                  break;
                case -2005531975:
                  result = L"DDERR_NODRIVERSUPPORT";
                  break;
                case -2005531973:
                  result = L"DDERR_DEVICEDOESNTOWNSURFACE";
                  break;
                case -2005531822:
                  result = L"DXFILEERR_BADOBJECT";
                  break;
                case -2005531821:
                  result = L"DXFILEERR_BADVALUE";
                  break;
                case -2005531820:
                  result = L"DXFILEERR_BADTYPE";
                  break;
                case -2005531819:
                  result = L"DXFILEERR_BADSTREAMHANDLE";
                  break;
                case -2005531818:
                  result = L"DXFILEERR_BADALLOC";
                  break;
                case -2005531817:
                  result = L"DXFILEERR_NOTFOUND";
                  break;
                case -2005531816:
                  result = L"DXFILEERR_NOTDONEYET";
                  break;
                case -2005531815:
                  result = L"DXFILEERR_FILENOTFOUND";
                  break;
                case -2005531814:
                  result = L"DXFILEERR_RESOURCENOTFOUND";
                  break;
                case -2005531813:
                  result = L"DXFILEERR_URLNOTFOUND";
                  break;
                case -2005531812:
                  result = L"DXFILEERR_BADRESOURCE";
                  break;
                case -2005531811:
                  result = L"DXFILEERR_BADFILETYPE";
                  break;
                case -2005531810:
                  result = L"DXFILEERR_BADFILEVERSION";
                  break;
                case -2005531809:
                  result = L"DXFILEERR_BADFILEFLOATSIZE";
                  break;
                case -2005531808:
                  result = L"DXFILEERR_BADFILECOMPRESSIONTYPE";
                  break;
                case -2005531807:
                  result = L"DXFILEERR_BADFILE";
                  break;
                case -2005531806:
                  result = L"DXFILEERR_PARSEERROR";
                  break;
                case -2005531805:
                  result = L"DXFILEERR_NOTEMPLATE";
                  break;
                case -2005531804:
                  result = L"DXFILEERR_BADARRAYSIZE";
                  break;
                case -2005531803:
                  result = L"DXFILEERR_BADDATAREFERENCE";
                  break;
                case -2005531802:
                  result = L"DXFILEERR_INTERNALERROR";
                  break;
                case -2005531801:
                  result = L"DXFILEERR_NOMOREOBJECTS";
                  break;
                case -2005531800:
                  result = L"DXFILEERR_BADINTRINSICS";
                  break;
                case -2005531799:
                  result = L"DXFILEERR_NOMORESTREAMHANDLES";
                  break;
                case -2005531798:
                  result = L"DXFILEERR_NOMOREDATA";
                  break;
                case -2005531797:
                  result = L"DXFILEERR_BADCACHEFILE";
                  break;
                default:
                  return L"Unknown";
              }
            }
          }
          else
          {
            if ( a1 == -2005532192 )
              return L"DDERR_TOOBIGSIZE";
            if ( a1 > -2146073760 )
            {
              if ( a1 > -2005532512 )
              {
                if ( a1 > -2005532356 )
                {
                  if ( a1 > -2005532285 )
                  {
                    if ( a1 > -2005532237 )
                    {
                      switch ( a1 )
                      {
                        case -2005532232:
                          return L"DDERR_SURFACEISOBSCURED";
                        case -2005532222:
                          return L"DDERR_SURFACELOST";
                        case -2005532212:
                          return L"DDERR_SURFACENOTATTACHED";
                        case -2005532202:
                          return L"DDERR_TOOBIGHEIGHT";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2005532237:
                          return L"DDERR_CANTLOCKSURFACE";
                        case -2005532272:
                          return L"DDERR_COLORKEYNOTSET";
                        case -2005532262:
                          return L"DDERR_SURFACEALREADYATTACHED";
                        case -2005532252:
                          return L"DDERR_SURFACEALREADYDEPENDENT";
                        case -2005532242:
                          return L"DDERR_SURFACEBUSY";
                      }
                    }
                  }
                  else
                  {
                    if ( a1 == -2005532285 )
                      return L"DDERR_PALETTEBUSY";
                    if ( a1 > -2005532322 )
                    {
                      switch ( a1 )
                      {
                        case -2005532312:
                          return L"DDERR_OUTOFCAPS";
                        case -2005532292:
                          return L"D3DERR_OUTOFVIDEOMEMORY";
                        case -2005532290:
                          return L"DDERR_OVERLAYCANTCLIP";
                        case -2005532288:
                          return L"DDERR_OVERLAYCOLORKEYONLYONEACTIVE";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2005532322:
                          return L"DDERR_NOZOVERLAYHW";
                        case -2005532355:
                          return L"DDERR_NOT4BITCOLORINDEX";
                        case -2005532352:
                          return L"DDERR_NOT8BITCOLOR";
                        case -2005532342:
                          return L"DDERR_NOTEXTUREHW";
                        case -2005532337:
                          return L"DDERR_NOVSYNCHW";
                        case -2005532332:
                          return L"DDERR_NOZBUFFERHW";
                      }
                    }
                  }
                }
                else
                {
                  if ( a1 == -2005532356 )
                    return L"DDERR_NOT4BITCOLOR";
                  if ( a1 > -2005532447 )
                  {
                    if ( a1 > -2005532412 )
                    {
                      switch ( a1 )
                      {
                        case -2005532402:
                          return L"DDERR_OVERLAPPINGRECTS";
                        case -2005532392:
                          return L"DDERR_NORASTEROPHW";
                        case -2005532382:
                          return L"DDERR_NOROTATIONHW";
                        case -2005532362:
                          return L"DDERR_NOSTRETCHHW";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2005532412:
                          return L"DDERR_NOOVERLAYHW";
                        case -2005532442:
                          return L"DDERR_NOFLIPHW";
                        case -2005532432:
                          return L"DDERR_NOGDI";
                        case -2005532422:
                          return L"DDERR_NOMIRRORHW";
                        case -2005532417:
                          return L"DDERR_NOTFOUND";
                      }
                    }
                  }
                  else
                  {
                    if ( a1 == -2005532447 )
                      return L"DDERR_NOEXCLUSIVEMODE";
                    if ( a1 > -2005532462 )
                    {
                      switch ( a1 )
                      {
                        case -2005532460:
                          return L"DDERR_NOCOOPERATIVELEVELSET";
                        case -2005532457:
                          return L"DDERR_NOCOLORKEY";
                        case -2005532452:
                          return L"DDERR_NOCOLORKEYHW";
                        case -2005532450:
                          return L"DDERR_NODIRECTDRAWSUPPORT";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2005532462:
                          return L"DDERR_NOCOLORCONVHW";
                        case -2005532502:
                          return L"DDERR_NO3D";
                        case -2005532492:
                          return L"DDERR_NOALPHAHW";
                        case -2005532491:
                          return L"DDERR_NOSTEREOHARDWARE";
                        case -2005532490:
                          return L"DDERR_NOSURFACELEFT";
                        case -2005532467:
                          return L"DDERR_NOCLIPLIST";
                      }
                    }
                  }
                }
              }
              else
              {
                if ( a1 == -2005532512 )
                  return L"DDERR_LOCKEDSURFACES";
                if ( a1 > -2146073216 )
                {
                  if ( a1 > -2005532632 )
                  {
                    if ( a1 > -2005532562 )
                    {
                      switch ( a1 )
                      {
                        case -2005532552:
                          return L"DDERR_INVALIDMODE";
                        case -2005532542:
                          return L"DDERR_INVALIDOBJECT";
                        case -2005532527:
                          return L"DDERR_INVALIDPIXELFORMAT";
                        case -2005532522:
                          return L"DDERR_INVALIDRECT";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2005532562:
                          return L"DDERR_INVALIDCLIPLIST";
                        case -2005532617:
                          return L"DDERR_EXCEPTION";
                        case -2005532582:
                          return L"DDERR_HEIGHTALIGN";
                        case -2005532577:
                          return L"DDERR_INCOMPATIBLEPRIMARY";
                        case -2005532572:
                          return L"DDERR_INVALIDCAPS";
                      }
                    }
                  }
                  else
                  {
                    if ( a1 == -2005532632 )
                      return L"DDERR_CURRENTLYNOTAVAIL";
                    if ( a1 > -2146073024 )
                    {
                      switch ( a1 )
                      {
                        case -2146073008:
                          return L"DPNERR_USERCANCEL";
                        case -2005532667:
                          return L"DDERR_ALREADYINITIALIZED";
                        case -2005532662:
                          return L"DDERR_CANNOTATTACHSURFACE";
                        case -2005532652:
                          return L"DDERR_CANNOTDETACHSURFACE";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2146073024:
                          return L"DPNERR_UNINITIALIZED";
                        case -2146073200:
                          return L"DPNERR_PLAYERNOTREACHABLE";
                        case -2146073088:
                          return L"DPNERR_SENDTOOLARGE";
                        case -2146073072:
                          return L"DPNERR_SESSIONFULL";
                        case -2146073056:
                          return L"DPNERR_TABLEFULL";
                        case -2146073040:
                          return L"DPNERR_TIMEDOUT";
                      }
                    }
                  }
                }
                else
                {
                  if ( a1 == -2146073216 )
                    return L"DPNERR_PLAYERNOTINGROUP";
                  if ( a1 > -2146073488 )
                  {
                    if ( a1 > -2146073296 )
                    {
                      switch ( a1 )
                      {
                        case -2146073280:
                          return L"DPNERR_NOTREADY";
                        case -2146073264:
                          return L"DPNERR_NOTREGISTERED";
                        case -2146073248:
                          return L"DPNERR_PLAYERALREADYINGROUP";
                        case -2146073232:
                          return L"DPNERR_PLAYERLOST";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2146073296:
                          return L"DPNERR_NOTHOST";
                        case -2146073472:
                          return L"DPNERR_NOCONNECTION";
                        case -2146073456:
                          return L"DPNERR_NOHOSTPLAYER";
                        case -2146073344:
                          return L"DPNERR_NOMOREADDRESSCOMPONENTS";
                        case -2146073328:
                          return L"DPNERR_NORESPONSE";
                        case -2146073312:
                          return L"DPNERR_NOTALLOWED";
                      }
                    }
                  }
                  else
                  {
                    if ( a1 == -2146073488 )
                      return L"DPNERR_NOCAPS";
                    if ( a1 > -2146073568 )
                    {
                      switch ( a1 )
                      {
                        case -2146073552:
                          return L"DPNERR_INVALIDPRIORITY";
                        case -2146073536:
                          return L"DPNERR_INVALIDSTRING";
                        case -2146073520:
                          return L"DPNERR_INVALIDURL";
                        case -2146073504:
                          return L"DPNERR_INVALIDVERSION";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2146073568:
                          return L"DPNERR_INVALIDPLAYER";
                        case -2146073744:
                          return L"DPNERR_INVALIDHOSTADDRESS";
                        case -2146073728:
                          return L"DPNERR_INVALIDINSTANCE";
                        case -2146073712:
                          return L"DPNERR_INVALIDINTERFACE";
                        case -2146073600:
                          return L"DPNERR_INVALIDOBJECT";
                        case -2146073584:
                          return L"DPNERR_INVALIDPASSWORD";
                      }
                    }
                  }
                }
              }
              return L"Unknown";
            }
            if ( a1 == -2146073760 )
              return L"DPNERR_INVALIDHANDLE";
            if ( a1 > -2146106998 )
            {
              if ( a1 > -2146074256 )
              {
                if ( a1 > -2146074016 )
                {
                  if ( a1 > -2146073840 )
                  {
                    switch ( a1 )
                    {
                      case -2146073824:
                        return L"DPNERR_INVALIDDEVICEADDRESS";
                      case -2146073808:
                        return L"DPNERR_INVALIDENDPOINT";
                      case -2146073792:
                        return L"DPNERR_INVALIDFLAGS";
                      case -2146073776:
                        return L"DPNERR_INVALIDGROUP";
                    }
                  }
                  else
                  {
                    switch ( a1 )
                    {
                      case -2146073840:
                        return L"DPNERR_INVALIDCOMMAND";
                      case -2146074000:
                        return L"DPNERR_HOSTTERMINATEDSESSION";
                      case -2146073984:
                        return L"DPNERR_INCOMPLETEADDRESS";
                      case -2146073968:
                        return L"DPNERR_INVALIDADDRESSFORMAT";
                      case -2146073856:
                        return L"DPNERR_INVALIDAPPLICATION";
                    }
                  }
                }
                else
                {
                  if ( a1 == -2146074016 )
                    return L"DPNERR_HOSTREJECTEDCONNECTION";
                  if ( a1 > -2146074096 )
                  {
                    switch ( a1 )
                    {
                      case -2146074080:
                        return L"DPNERR_ENUMRESPONSETOOLARGE";
                      case -2146074064:
                        return L"DPNERR_EXCEPTION";
                      case -2146074048:
                        return L"DPNERR_GROUPNOTEMPTY";
                      case -2146074032:
                        return L"DPNERR_HOSTING";
                    }
                  }
                  else
                  {
                    switch ( a1 )
                    {
                      case -2146074096:
                        return L"DPNERR_ENUMQUERYTOOLARGE";
                      case -2146074251:
                        return L"DPNERR_DATATOOLARGE";
                      case -2146074240:
                        return L"DPNERR_DOESNOTEXIST";
                      case -2146074235:
                        return L"DPNERR_DPNSVRNOTAVAILABLE";
                      case -2146074224:
                        return L"DPNERR_DUPLICATECOMMAND";
                      case -2146074112:
                        return L"DPNERR_ENDPOINTNOTRECEIVING";
                    }
                  }
                }
                return L"Unknown";
              }
              if ( a1 == -2146074256 )
                return L"DPNERR_CONVERSION";
              if ( a1 > -2146074512 )
              {
                if ( a1 > -2146074336 )
                {
                  switch ( a1 )
                  {
                    case -2146074320:
                      return L"DPNERR_CANTCREATEPLAYER";
                    case -2146074304:
                      return L"DPNERR_CANTLAUNCHAPPLICATION";
                    case -2146074288:
                      return L"DPNERR_CONNECTING";
                    case -2146074272:
                      return L"DPNERR_CONNECTIONLOST";
                  }
                }
                else
                {
                  switch ( a1 )
                  {
                    case -2146074336:
                      return L"DPNERR_CANTCREATEGROUP";
                    case -2146074496:
                      return L"DPNERR_ALREADYINITIALIZED";
                    case -2146074480:
                      return L"DPNERR_ALREADYREGISTERED";
                    case -2146074368:
                      return L"DPNERR_BUFFERTOOSMALL";
                    case -2146074352:
                      return L"DPNERR_CANNOTCANCEL";
                  }
                }
                return L"Unknown";
              }
              if ( a1 == -2146074512 )
                return L"DPNERR_ALREADYDISCONNECTING";
              if ( a1 > -2146106992 )
              {
                switch ( a1 )
                {
                  case -2146074576:
                    return L"DPNERR_ABORTED";
                  case -2146074560:
                    return L"DPNERR_ADDRESSING";
                  case -2146074544:
                    return L"DPNERR_ALREADYCLOSING";
                  case -2146074528:
                    return L"DPNERR_ALREADYCONNECTED";
                }
                return L"Unknown";
              }
              switch ( a1 )
              {
                case -2146106992:
                  return L"DVERR_LOCKEDBUFFER";
                case -2146106997:
                  return L"DVERR_TRANSPORTNOSESSION";
                case -2146106996:
                  return L"DVERR_TRANSPORTNOPLAYER";
                case -2146106995:
                  return L"DVERR_USERBACK";
                case -2146106994:
                  return L"DVERR_NORECVOLAVAILABLE";
                default:
                  return L"DVERR_INVALIDBUFFER";
              }
            }
            else
            {
              if ( a1 == -2146106998 )
                return L"DVERR_TRANSPORTNOTINIT";
              if ( a1 <= -2146107023 )
              {
                if ( a1 == -2146107023 )
                  return L"DVERR_TRANSPORTNOTHOST";
                if ( a1 > -2146107247 )
                {
                  if ( a1 > -2146107030 )
                  {
                    switch ( a1 )
                    {
                      case -2146107029:
                        return L"DVERR_NOTCONNECTED";
                      case -2146107026:
                        return L"DVERR_CONNECTABORTING";
                      case -2146107025:
                        return L"DVERR_NOTALLOWED";
                      case -2146107024:
                        return L"DVERR_INVALIDTARGET";
                    }
                  }
                  else
                  {
                    switch ( a1 )
                    {
                      case -2146107030:
                        return L"DVERR_CONNECTED";
                      case -2146107242:
                        return L"DVERR_INVALIDHANDLE";
                      case -2146107092:
                        return L"DVERR_SESSIONLOST";
                      case -2146107090:
                        return L"DVERR_NOVOICESESSION";
                      case -2146107032:
                        return L"DVERR_CONNECTIONLOST";
                      case -2146107031:
                        return L"DVERR_NOTINITIALIZED";
                    }
                  }
                }
                else
                {
                  if ( a1 == -2146107247 )
                    return L"DVERR_INVALIDGROUP";
                  if ( a1 > -2146107362 )
                  {
                    switch ( a1 )
                    {
                      case -2146107318:
                        return L"DVERR_EXCEPTION";
                      case -2146107272:
                        return L"DVERR_INVALIDFLAGS";
                      case -2146107262:
                        return L"DVERR_INVALIDOBJECT";
                      case -2146107257:
                        return L"DVERR_INVALIDPLAYER";
                    }
                  }
                  else
                  {
                    switch ( a1 )
                    {
                      case -2146107362:
                        return L"DVERR_BUFFERTOOSMALL";
                      case -2146367457:
                        return L"COMADMIN_E_BASEPARTITION_REQUIRED_IN_SET";
                      case -2146367456:
                        return L"COMADMIN_E_CANNOT_ALIAS_EVENTCLASS";
                      case -2146367455:
                        return L"COMADMIN_E_PRIVATE_ACCESSDENIED";
                      case -2146367454:
                        return L"COMADMIN_E_SAFERINVALID";
                      case -2146367453:
                        return L"COMADMIN_E_REGISTRY_ACCESSDENIED";
                    }
                  }
                }
                return L"Unknown";
              }
              switch ( a1 )
              {
                case -2146107022:
                  result = L"DVERR_COMPRESSIONNOTSUPPORTED";
                  break;
                case -2146107021:
                  result = L"DVERR_ALREADYPENDING";
                  break;
                case -2146107020:
                  result = L"DVERR_SOUNDINITFAILURE";
                  break;
                case -2146107019:
                  result = L"DVERR_TIMEOUT";
                  break;
                case -2146107018:
                  result = L"DVERR_CONNECTABORTED";
                  break;
                case -2146107017:
                  result = L"DVERR_NO3DSOUND";
                  break;
                case -2146107016:
                  result = L"DVERR_ALREADYBUFFERED";
                  break;
                case -2146107015:
                  result = L"DVERR_NOTBUFFERED";
                  break;
                case -2146107014:
                  result = L"DVERR_HOSTING";
                  break;
                case -2146107013:
                  result = L"DVERR_NOTHOSTING";
                  break;
                case -2146107012:
                  result = L"DVERR_INVALIDDEVICE";
                  break;
                case -2146107011:
                  result = L"DVERR_RECORDSYSTEMERROR";
                  break;
                case -2146107010:
                  result = L"DVERR_PLAYBACKSYSTEMERROR";
                  break;
                case -2146107009:
                  result = L"DVERR_SENDERROR";
                  break;
                case -2146107008:
                  result = L"DVERR_USERCANCEL";
                  break;
                case -2146107005:
                  result = L"DVERR_RUNSETUP";
                  break;
                case -2146107004:
                  result = L"DVERR_INCOMPATIBLEVERSION";
                  break;
                case -2146107001:
                  result = L"DVERR_INITIALIZED";
                  break;
                case -2146107000:
                  result = L"DVERR_NOTRANSPORT";
                  break;
                case -2146106999:
                  result = L"DVERR_NOCALLBACK";
                  break;
                default:
                  return L"Unknown";
              }
            }
          }
        }
        else
        {
          if ( a1 == -2146367458 )
            return L"COMADMIN_E_COMP_MOVE_PRIVATE";
          if ( a1 > -2146500042 )
          {
            if ( a1 > -2146368482 )
            {
              if ( a1 > -2146368421 )
              {
                if ( a1 <= -2146367743 )
                {
                  if ( a1 == -2146367743 )
                    return L"MSDTC_E_DUPLICATE_RESOURCE";
                  if ( a1 > -2146368380 )
                  {
                    if ( a1 > -2146367998 )
                    {
                      switch ( a1 )
                      {
                        case -2146367997:
                          return L"COMQC_E_NO_IPERSISTSTREAM";
                        case -2146367996:
                          return L"COMQC_E_BAD_MESSAGE";
                        case -2146367995:
                          return L"COMQC_E_UNAUTHENTICATED";
                        case -2146367994:
                          return L"COMQC_E_UNTRUSTED_ENQUEUER";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2146367998:
                          return L"COMQC_E_QUEUING_SERVICE_NOT_AVAILABLE";
                        case -2146368379:
                          return L"COMADMIN_E_CAT_PAUSE_RESUME_NOT_SUPPORTED";
                        case -2146368378:
                          return L"COMADMIN_E_CAT_SERVERFAULT";
                        case -2146368000:
                          return L"COMQC_E_APPLICATION_NOT_QUEUED";
                        case -2146367999:
                          return L"COMQC_E_NO_QUEUEABLE_INTERFACES";
                      }
                    }
                  }
                  else
                  {
                    if ( a1 == -2146368380 )
                      return L"COMADMIN_E_CAT_WRONGAPPBITNESS";
                    if ( a1 > -2146368395 )
                    {
                      switch ( a1 )
                      {
                        case -2146368384:
                          return L"COMADMIN_E_MIG_VERSIONNOTSUPPORTED";
                        case -2146368383:
                          return L"COMADMIN_E_MIG_SCHEMANOTFOUND";
                        case -2146368382:
                          return L"COMADMIN_E_CAT_BITNESSMISMATCH";
                        case -2146368381:
                          return L"COMADMIN_E_CAT_UNACCEPTABLEBITNESS";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2146368395:
                          return L"COMADMIN_E_REGDB_ALREADYRUNNING";
                        case -2146368420:
                          return L"COMADMIN_E_AMBIGUOUS_APPLICATION_NAME";
                        case -2146368419:
                          return L"COMADMIN_E_AMBIGUOUS_PARTITION_NAME";
                        case -2146368398:
                          return L"COMADMIN_E_REGDB_NOTINITIALIZED";
                        case -2146368397:
                          return L"COMADMIN_E_REGDB_NOTOPEN";
                        case -2146368396:
                          return L"COMADMIN_E_REGDB_SYSTEMERR";
                      }
                    }
                  }
                  return L"Unknown";
                }
                switch ( a1 )
                {
                  case -2146367480:
                    result = L"COMADMIN_E_OBJECT_PARENT_MISSING";
                    break;
                  case -2146367479:
                    result = L"COMADMIN_E_OBJECT_DOES_NOT_EXIST";
                    break;
                  case -2146367478:
                    result = L"COMADMIN_E_APP_NOT_RUNNING";
                    break;
                  case -2146367477:
                    result = L"COMADMIN_E_INVALID_PARTITION";
                    break;
                  case -2146367475:
                    result = L"COMADMIN_E_SVCAPP_NOT_POOLABLE_OR_RECYCLABLE";
                    break;
                  case -2146367474:
                    result = L"COMADMIN_E_USER_IN_SET";
                    break;
                  case -2146367473:
                    result = L"COMADMIN_E_CANTRECYCLELIBRARYAPPS";
                    break;
                  case -2146367471:
                    result = L"COMADMIN_E_CANTRECYCLESERVICEAPPS";
                    break;
                  case -2146367470:
                    result = L"COMADMIN_E_PROCESSALREADYRECYCLED";
                    break;
                  case -2146367469:
                    result = L"COMADMIN_E_PAUSEDPROCESSMAYNOTBERECYCLED";
                    break;
                  case -2146367468:
                    result = L"COMADMIN_E_CANTMAKEINPROCSERVICE";
                    break;
                  case -2146367467:
                    result = L"COMADMIN_E_PROGIDINUSEBYCLSID";
                    break;
                  case -2146367466:
                    result = L"COMADMIN_E_DEFAULT_PARTITION_NOT_IN_SET";
                    break;
                  case -2146367465:
                    result = L"COMADMIN_E_RECYCLEDPROCESSMAYNOTBEPAUSED";
                    break;
                  case -2146367464:
                    result = L"COMADMIN_E_PARTITION_ACCESSDENIED";
                    break;
                  case -2146367463:
                    result = L"COMADMIN_E_PARTITION_MSI_ONLY";
                    break;
                  case -2146367462:
                    result = L"COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_1_0_FORMAT";
                    break;
                  case -2146367461:
                    result = L"COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_NONBASE_PARTITIONS";
                    break;
                  case -2146367460:
                    result = L"COMADMIN_E_COMP_MOVE_SOURCE";
                    break;
                  case -2146367459:
                    result = L"COMADMIN_E_COMP_MOVE_DEST";
                    break;
                  default:
                    return L"Unknown";
                }
              }
              else if ( a1 == -2146368421 )
              {
                return L"COMADMIN_E_CAT_IMPORTED_COMPONENTS_NOT_ALLOWED";
              }
              else
              {
                switch ( a1 )
                {
                  case -2146368481:
                    result = L"COMADMIN_E_APPDIRNOTFOUND";
                    break;
                  case -2146368477:
                    result = L"COMADMIN_E_REGISTRARFAILED";
                    break;
                  case -2146368476:
                    result = L"COMADMIN_E_COMPFILE_DOESNOTEXIST";
                    break;
                  case -2146368475:
                    result = L"COMADMIN_E_COMPFILE_LOADDLLFAIL";
                    break;
                  case -2146368474:
                    result = L"COMADMIN_E_COMPFILE_GETCLASSOBJ";
                    break;
                  case -2146368473:
                    result = L"COMADMIN_E_COMPFILE_CLASSNOTAVAIL";
                    break;
                  case -2146368472:
                    result = L"COMADMIN_E_COMPFILE_BADTLB";
                    break;
                  case -2146368471:
                    result = L"COMADMIN_E_COMPFILE_NOTINSTALLABLE";
                    break;
                  case -2146368470:
                    result = L"COMADMIN_E_NOTCHANGEABLE";
                    break;
                  case -2146368469:
                    result = L"COMADMIN_E_NOTDELETEABLE";
                    break;
                  case -2146368468:
                    result = L"COMADMIN_E_SESSION";
                    break;
                  case -2146368467:
                    result = L"COMADMIN_E_COMP_MOVE_LOCKED";
                    break;
                  case -2146368466:
                    result = L"COMADMIN_E_COMP_MOVE_BAD_DEST";
                    break;
                  case -2146368464:
                    result = L"COMADMIN_E_REGISTERTLB";
                    break;
                  case -2146368461:
                    result = L"COMADMIN_E_SYSTEMAPP";
                    break;
                  case -2146368460:
                    result = L"COMADMIN_E_COMPFILE_NOREGISTRAR";
                    break;
                  case -2146368459:
                    result = L"COMADMIN_E_COREQCOMPINSTALLED";
                    break;
                  case -2146368458:
                    result = L"COMADMIN_E_SERVICENOTINSTALLED";
                    break;
                  case -2146368457:
                    result = L"COMADMIN_E_PROPERTYSAVEFAILED";
                    break;
                  case -2146368456:
                    result = L"COMADMIN_E_OBJECTEXISTS";
                    break;
                  case -2146368455:
                    result = L"COMADMIN_E_COMPONENTEXISTS";
                    break;
                  case -2146368453:
                    result = L"COMADMIN_E_REGFILE_CORRUPT";
                    break;
                  case -2146368452:
                    result = L"COMADMIN_E_PROPERTY_OVERFLOW";
                    break;
                  case -2146368450:
                    result = L"COMADMIN_E_NOTINREGISTRY";
                    break;
                  case -2146368449:
                    result = L"COMADMIN_E_OBJECTNOTPOOLABLE";
                    break;
                  case -2146368442:
                    result = L"COMADMIN_E_APPLID_MATCHES_CLSID";
                    break;
                  case -2146368441:
                    result = L"COMADMIN_E_ROLE_DOES_NOT_EXIST";
                    break;
                  case -2146368440:
                    result = L"COMADMIN_E_START_APP_NEEDS_COMPONENTS";
                    break;
                  case -2146368439:
                    result = L"COMADMIN_E_REQUIRES_DIFFERENT_PLATFORM";
                    break;
                  case -2146368438:
                    result = L"COMADMIN_E_CAN_NOT_EXPORT_APP_PROXY";
                    break;
                  case -2146368437:
                    result = L"COMADMIN_E_CAN_NOT_START_APP";
                    break;
                  case -2146368436:
                    result = L"COMADMIN_E_CAN_NOT_EXPORT_SYS_APP";
                    break;
                  case -2146368435:
                    result = L"COMADMIN_E_CANT_SUBSCRIBE_TO_COMPONENT";
                    break;
                  case -2146368434:
                    result = L"COMADMIN_E_EVENTCLASS_CANT_BE_SUBSCRIBER";
                    break;
                  case -2146368433:
                    result = L"COMADMIN_E_LIB_APP_PROXY_INCOMPATIBLE";
                    break;
                  case -2146368432:
                    result = L"COMADMIN_E_BASE_PARTITION_ONLY";
                    break;
                  case -2146368431:
                    result = L"COMADMIN_E_START_APP_DISABLED";
                    break;
                  case -2146368425:
                    result = L"COMADMIN_E_CAT_DUPLICATE_PARTITION_NAME";
                    break;
                  case -2146368424:
                    result = L"COMADMIN_E_CAT_INVALID_PARTITION_NAME";
                    break;
                  case -2146368423:
                    result = L"COMADMIN_E_CAT_PARTITION_IN_USE";
                    break;
                  case -2146368422:
                    result = L"COMADMIN_E_FILE_PARTITION_DUPLICATE_FILES";
                    break;
                  default:
                    return L"Unknown";
                }
              }
            }
            else
            {
              if ( a1 == -2146368482 )
                return L"COMADMIN_E_BADREGISTRYLIBID";
              if ( a1 > -2146435032 )
              {
                if ( a1 > -2146368510 )
                {
                  switch ( a1 )
                  {
                    case -2146368509:
                      result = L"COMADMIN_E_KEYMISSING";
                      break;
                    case -2146368508:
                      result = L"COMADMIN_E_ALREADYINSTALLED";
                      break;
                    case -2146368505:
                      result = L"COMADMIN_E_APP_FILE_WRITEFAIL";
                      break;
                    case -2146368504:
                      result = L"COMADMIN_E_APP_FILE_READFAIL";
                      break;
                    case -2146368503:
                      result = L"COMADMIN_E_APP_FILE_VERSION";
                      break;
                    case -2146368502:
                      result = L"COMADMIN_E_BADPATH";
                      break;
                    case -2146368501:
                      result = L"COMADMIN_E_APPLICATIONEXISTS";
                      break;
                    case -2146368500:
                      result = L"COMADMIN_E_ROLEEXISTS";
                      break;
                    case -2146368499:
                      result = L"COMADMIN_E_CANTCOPYFILE";
                      break;
                    case -2146368497:
                      result = L"COMADMIN_E_NOUSER";
                      break;
                    case -2146368496:
                      result = L"COMADMIN_E_INVALIDUSERIDS";
                      break;
                    case -2146368495:
                      result = L"COMADMIN_E_NOREGISTRYCLSID";
                      break;
                    case -2146368494:
                      result = L"COMADMIN_E_BADREGISTRYPROGID";
                      break;
                    case -2146368493:
                      result = L"COMADMIN_E_AUTHENTICATIONLEVEL";
                      break;
                    case -2146368492:
                      result = L"COMADMIN_E_USERPASSWDNOTVALID";
                      break;
                    case -2146368488:
                      result = L"COMADMIN_E_CLSIDORIIDMISMATCH";
                      break;
                    case -2146368487:
                      result = L"COMADMIN_E_REMOTEINTERFACE";
                      break;
                    case -2146368486:
                      result = L"COMADMIN_E_DLLREGISTERSERVER";
                      break;
                    case -2146368485:
                      result = L"COMADMIN_E_NOSERVERSHARE";
                      break;
                    case -2146368483:
                      result = L"COMADMIN_E_DLLLOADFAILED";
                      break;
                    default:
                      return L"Unknown";
                  }
                }
                else
                {
                  if ( a1 == -2146368510 )
                    return L"COMADMIN_E_OBJECTINVALID";
                  if ( a1 > -2146434969 )
                  {
                    if ( a1 > -2146434964 )
                    {
                      switch ( a1 )
                      {
                        case -2146434963:
                          return L"SCARD_W_EOF";
                        case -2146434962:
                          return L"SCARD_W_CANCELLED_BY_USER";
                        case -2146434961:
                          return L"SCARD_W_CARD_NOT_AUTHENTICATED";
                        case -2146368511:
                          return L"COMADMIN_E_OBJECTERRORS";
                      }
                      return L"Unknown";
                    }
                    switch ( a1 )
                    {
                      case -2146434964:
                        return L"SCARD_W_CHV_BLOCKED";
                      case -2146434968:
                        return L"SCARD_W_RESET_CARD";
                      case -2146434967:
                        return L"SCARD_W_REMOVED_CARD";
                      case -2146434966:
                        return L"SCARD_W_SECURITY_VIOLATION";
                      default:
                        return L"SCARD_W_WRONG_CHV";
                    }
                  }
                  else
                  {
                    if ( a1 == -2146434969 )
                      return L"SCARD_W_UNPOWERED_CARD";
                    if ( a1 > -2146435026 )
                    {
                      switch ( a1 )
                      {
                        case -2146435025:
                          return L"SCARD_E_COMM_DATA_LOST";
                        case -2146435024:
                          return L"SCARD_E_NO_KEY_CONTAINER";
                        case -2146434971:
                          return L"SCARD_W_UNSUPPORTED_CARD";
                        case -2146434970:
                          return L"SCARD_W_UNRESPONSIVE_CARD";
                      }
                      return L"Unknown";
                    }
                    switch ( a1 )
                    {
                      case -2146435026:
                        return L"SCARD_E_NO_READERS_AVAILABLE";
                      case -2146435031:
                        return L"SCARD_E_BAD_SEEK";
                      case -2146435030:
                        return L"SCARD_E_INVALID_CHV";
                      case -2146435029:
                        return L"SCARD_E_UNKNOWN_RES_MNG";
                      case -2146435028:
                        return L"SCARD_E_NO_SUCH_CERTIFICATE";
                      default:
                        return L"SCARD_E_CERTIFICATE_UNAVAILABLE";
                    }
                  }
                }
              }
              else
              {
                if ( a1 == -2146435032 )
                  return L"SCARD_E_WRITE_TOO_MANY";
                if ( a1 > -2146435053 )
                {
                  switch ( a1 )
                  {
                    case -2146435052:
                      result = L"SCARD_F_UNKNOWN_ERROR";
                      break;
                    case -2146435051:
                      result = L"SCARD_E_INVALID_ATR";
                      break;
                    case -2146435050:
                      result = L"SCARD_E_NOT_TRANSACTED";
                      break;
                    case -2146435049:
                      result = L"SCARD_E_READER_UNAVAILABLE";
                      break;
                    case -2146435048:
                      result = L"SCARD_P_SHUTDOWN";
                      break;
                    case -2146435047:
                      result = L"SCARD_E_PCI_TOO_SMALL";
                      break;
                    case -2146435046:
                      result = L"SCARD_E_READER_UNSUPPORTED";
                      break;
                    case -2146435045:
                      result = L"SCARD_E_DUPLICATE_READER";
                      break;
                    case -2146435044:
                      result = L"SCARD_E_CARD_UNSUPPORTED";
                      break;
                    case -2146435043:
                      result = L"SCARD_E_NO_SERVICE";
                      break;
                    case -2146435042:
                      result = L"SCARD_E_SERVICE_STOPPED";
                      break;
                    case -2146435041:
                      result = L"SCARD_E_UNEXPECTED";
                      break;
                    case -2146435040:
                      result = L"SCARD_E_ICC_INSTALLATION";
                      break;
                    case -2146435039:
                      result = L"SCARD_E_ICC_CREATEORDER";
                      break;
                    case -2146435038:
                      result = L"SCARD_E_UNSUPPORTED_FEATURE";
                      break;
                    case -2146435037:
                      result = L"SCARD_E_DIR_NOT_FOUND";
                      break;
                    case -2146435036:
                      result = L"SCARD_E_FILE_NOT_FOUND";
                      break;
                    case -2146435035:
                      result = L"SCARD_E_NO_DIR";
                      break;
                    case -2146435034:
                      result = L"SCARD_E_NO_FILE";
                      break;
                    case -2146435033:
                      result = L"SCARD_E_NO_ACCESS";
                      break;
                    default:
                      return L"Unknown";
                  }
                }
                else
                {
                  if ( a1 == -2146435053 )
                    return L"SCARD_F_COMM_ERROR";
                  if ( a1 > -2146435064 )
                  {
                    switch ( a1 )
                    {
                      case -2146435063:
                        result = L"SCARD_E_UNKNOWN_READER";
                        break;
                      case -2146435062:
                        result = L"SCARD_E_TIMEOUT";
                        break;
                      case -2146435061:
                        result = L"SCARD_E_SHARING_VIOLATION";
                        break;
                      case -2146435060:
                        result = L"SCARD_E_NO_SMARTCARD";
                        break;
                      case -2146435059:
                        result = L"SCARD_E_UNKNOWN_CARD";
                        break;
                      case -2146435058:
                        result = L"SCARD_E_CANT_DISPOSE";
                        break;
                      case -2146435057:
                        result = L"SCARD_E_PROTO_MISMATCH";
                        break;
                      case -2146435056:
                        result = L"SCARD_E_NOT_READY";
                        break;
                      case -2146435055:
                        result = L"SCARD_E_INVALID_VALUE";
                        break;
                      case -2146435054:
                        result = L"SCARD_E_SYSTEM_CANCELLED";
                        break;
                      default:
                        return L"Unknown";
                    }
                  }
                  else
                  {
                    if ( a1 == -2146435064 )
                      return L"SCARD_E_INSUFFICIENT_BUFFER";
                    if ( a1 <= -2146435069 )
                    {
                      switch ( a1 )
                      {
                        case -2146435069:
                          return L"SCARD_E_INVALID_HANDLE";
                        case -2146500041:
                          return L"SPAPI_E_INCORRECTLY_COPIED_INF";
                        case -2146500040:
                          return L"SPAPI_E_SCE_DISABLED";
                        case -2146496512:
                          return L"SPAPI_E_ERROR_NOT_INSTALLED";
                        case -2146435071:
                          return L"SCARD_F_INTERNAL_ERROR";
                        case -2146435070:
                          return L"SCARD_E_CANCELLED";
                      }
                      return L"Unknown";
                    }
                    switch ( a1 )
                    {
                      case -2146435068:
                        return L"SCARD_E_INVALID_PARAMETER";
                      case -2146435067:
                        return L"SCARD_E_INVALID_TARGET";
                      case -2146435066:
                        return L"SCARD_E_NO_MEMORY";
                      default:
                        return L"SCARD_F_WAITED_TOO_LONG";
                    }
                  }
                }
              }
            }
          }
          else
          {
            if ( a1 == -2146500042 )
              return L"SPAPI_E_SET_SYSTEM_RESTORE_POINT";
            if ( a1 > -2146762742 )
            {
              if ( a1 > -2146500084 )
              {
                switch ( a1 )
                {
                  case -2146500083:
                    result = L"SPAPI_E_INVALID_CLASS_INSTALLER";
                    break;
                  case -2146500082:
                    result = L"SPAPI_E_DI_DO_DEFAULT";
                    break;
                  case -2146500081:
                    result = L"SPAPI_E_DI_NOFILECOPY";
                    break;
                  case -2146500080:
                    result = L"SPAPI_E_INVALID_HWPROFILE";
                    break;
                  case -2146500079:
                    result = L"SPAPI_E_NO_DEVICE_SELECTED";
                    break;
                  case -2146500078:
                    result = L"SPAPI_E_DEVINFO_LIST_LOCKED";
                    break;
                  case -2146500077:
                    result = L"SPAPI_E_DEVINFO_DATA_LOCKED";
                    break;
                  case -2146500076:
                    result = L"SPAPI_E_DI_BAD_PATH";
                    break;
                  case -2146500075:
                    result = L"SPAPI_E_NO_CLASSINSTALL_PARAMS";
                    break;
                  case -2146500074:
                    result = L"SPAPI_E_FILEQUEUE_LOCKED";
                    break;
                  case -2146500073:
                    result = L"SPAPI_E_BAD_SERVICE_INSTALLSECT";
                    break;
                  case -2146500072:
                    result = L"SPAPI_E_NO_CLASS_DRIVER_LIST";
                    break;
                  case -2146500071:
                    result = L"SPAPI_E_NO_ASSOCIATED_SERVICE";
                    break;
                  case -2146500070:
                    result = L"SPAPI_E_NO_DEFAULT_DEVICE_INTERFACE";
                    break;
                  case -2146500069:
                    result = L"SPAPI_E_DEVICE_INTERFACE_ACTIVE";
                    break;
                  case -2146500068:
                    result = L"SPAPI_E_DEVICE_INTERFACE_REMOVED";
                    break;
                  case -2146500067:
                    result = L"SPAPI_E_BAD_INTERFACE_INSTALLSECT";
                    break;
                  case -2146500066:
                    result = L"SPAPI_E_NO_SUCH_INTERFACE_CLASS";
                    break;
                  case -2146500065:
                    result = L"SPAPI_E_INVALID_REFERENCE_STRING";
                    break;
                  case -2146500064:
                    result = L"SPAPI_E_INVALID_MACHINENAME";
                    break;
                  case -2146500063:
                    result = L"SPAPI_E_REMOTE_COMM_FAILURE";
                    break;
                  case -2146500062:
                    result = L"SPAPI_E_MACHINE_UNAVAILABLE";
                    break;
                  case -2146500061:
                    result = L"SPAPI_E_NO_CONFIGMGR_SERVICES";
                    break;
                  case -2146500060:
                    result = L"SPAPI_E_INVALID_PROPPAGE_PROVIDER";
                    break;
                  case -2146500059:
                    result = L"SPAPI_E_NO_SUCH_DEVICE_INTERFACE";
                    break;
                  case -2146500058:
                    result = L"SPAPI_E_DI_POSTPROCESSING_REQUIRED";
                    break;
                  case -2146500057:
                    result = L"SPAPI_E_INVALID_COINSTALLER";
                    break;
                  case -2146500056:
                    result = L"SPAPI_E_NO_COMPAT_DRIVERS";
                    break;
                  case -2146500055:
                    result = L"SPAPI_E_NO_DEVICE_ICON";
                    break;
                  case -2146500054:
                    result = L"SPAPI_E_INVALID_INF_LOGCONFIG";
                    break;
                  case -2146500053:
                    result = L"SPAPI_E_DI_DONT_INSTALL";
                    break;
                  case -2146500052:
                    result = L"SPAPI_E_INVALID_FILTER_DRIVER";
                    break;
                  case -2146500051:
                    result = L"SPAPI_E_NON_WINDOWS_NT_DRIVER";
                    break;
                  case -2146500050:
                    result = L"SPAPI_E_NON_WINDOWS_DRIVER";
                    break;
                  case -2146500049:
                    result = L"SPAPI_E_NO_CATALOG_FOR_OEM_INF";
                    break;
                  case -2146500048:
                    result = L"SPAPI_E_DEVINSTALL_QUEUE_NONNATIVE";
                    break;
                  case -2146500047:
                    result = L"SPAPI_E_NOT_DISABLEABLE";
                    break;
                  case -2146500046:
                    result = L"SPAPI_E_CANT_REMOVE_DEVINST";
                    break;
                  case -2146500045:
                    result = L"SPAPI_E_INVALID_TARGET";
                    break;
                  case -2146500044:
                    result = L"SPAPI_E_DRIVER_NONNATIVE";
                    break;
                  case -2146500043:
                    result = L"SPAPI_E_IN_WOW64";
                    break;
                  default:
                    return L"Unknown";
                }
              }
              else
              {
                if ( a1 == -2146500084 )
                  return L"SPAPI_E_CANT_LOAD_CLASS_ICON";
                if ( a1 > -2146762476 )
                {
                  if ( a1 <= -2146500094 )
                  {
                    if ( a1 == -2146500094 )
                      return L"SPAPI_E_DUPLICATE_FOUND";
                    if ( a1 > -2146500351 )
                    {
                      switch ( a1 )
                      {
                        case -2146500350:
                          return L"SPAPI_E_LINE_NOT_FOUND";
                        case -2146500349:
                          return L"SPAPI_E_NO_BACKUP";
                        case -2146500096:
                          return L"SPAPI_E_NO_ASSOCIATED_CLASS";
                        case -2146500095:
                          return L"SPAPI_E_CLASS_MISMATCH";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2146500351:
                          return L"SPAPI_E_SECTION_NOT_FOUND";
                        case -2146500608:
                          return L"SPAPI_E_EXPECTED_SECTION_NAME";
                        case -2146500607:
                          return L"SPAPI_E_BAD_SECTION_NAME_LINE";
                        case -2146500606:
                          return L"SPAPI_E_SECTION_NAME_TOO_LONG";
                        case -2146500605:
                          return L"SPAPI_E_GENERAL_SYNTAX";
                        case -2146500352:
                          return L"SPAPI_E_WRONG_INF_STYLE";
                      }
                    }
                    return L"Unknown";
                  }
                  switch ( a1 )
                  {
                    case -2146500093:
                      result = L"SPAPI_E_NO_DRIVER_SELECTED";
                      break;
                    case -2146500092:
                      result = L"SPAPI_E_KEY_DOES_NOT_EXIST";
                      break;
                    case -2146500091:
                      result = L"SPAPI_E_INVALID_DEVINST_NAME";
                      break;
                    case -2146500090:
                      result = L"SPAPI_E_INVALID_CLASS";
                      break;
                    case -2146500089:
                      result = L"SPAPI_E_DEVINST_ALREADY_EXISTS";
                      break;
                    case -2146500088:
                      result = L"SPAPI_E_DEVINFO_NOT_REGISTERED";
                      break;
                    case -2146500087:
                      result = L"SPAPI_E_INVALID_REG_PROPERTY";
                      break;
                    case -2146500086:
                      result = L"SPAPI_E_NO_INF";
                      break;
                    case -2146500085:
                      result = L"SPAPI_E_NO_SUCH_DEVINST";
                      break;
                    default:
                      return L"Unknown";
                  }
                }
                else
                {
                  if ( a1 == -2146762476 )
                    return L"CERT_E_INVALID_NAME";
                  if ( a1 > -2146762487 )
                  {
                    switch ( a1 )
                    {
                      case -2146762486:
                        result = L"CERT_E_CHAINING";
                        break;
                      case -2146762485:
                        result = L"TRUST_E_FAIL";
                        break;
                      case -2146762484:
                        result = L"CERT_E_REVOKED";
                        break;
                      case -2146762483:
                        result = L"CERT_E_UNTRUSTEDTESTROOT";
                        break;
                      case -2146762482:
                        result = L"CERT_E_REVOCATION_FAILURE";
                        break;
                      case -2146762481:
                        result = L"CERT_E_CN_NO_MATCH";
                        break;
                      case -2146762480:
                        result = L"CERT_E_WRONG_USAGE";
                        break;
                      case -2146762479:
                        result = L"TRUST_E_EXPLICIT_DISTRUST";
                        break;
                      case -2146762478:
                        result = L"CERT_E_UNTRUSTEDCA";
                        break;
                      case -2146762477:
                        result = L"CERT_E_INVALID_POLICY";
                        break;
                      default:
                        return L"Unknown";
                    }
                  }
                  else
                  {
                    if ( a1 == -2146762487 )
                      return L"CERT_E_UNTRUSTEDROOT";
                    if ( a1 <= -2146762492 )
                    {
                      switch ( a1 )
                      {
                        case -2146762492:
                          return L"CERT_E_PATHLENCONST";
                        case -2146762741:
                          return L"PERSIST_E_NOTSELFSIZING";
                        case -2146762496:
                          return L"TRUST_E_NOSIGNATURE";
                        case -2146762495:
                          return L"CERT_E_EXPIRED";
                        case -2146762494:
                          return L"CERT_E_VALIDITYPERIODNESTING";
                        case -2146762493:
                          return L"CERT_E_ROLE";
                      }
                      return L"Unknown";
                    }
                    switch ( a1 )
                    {
                      case -2146762491:
                        return L"CERT_E_CRITICAL";
                      case -2146762490:
                        return L"CERT_E_PURPOSE";
                      case -2146762489:
                        return L"CERT_E_ISSUERCHAINING";
                      default:
                        return L"CERT_E_MALFORMED";
                    }
                  }
                }
              }
            }
            else
            {
              if ( a1 == -2146762742 )
                return L"PERSIST_E_SIZEINDEFINITE";
              if ( a1 > -2146873341 )
              {
                if ( a1 > -2146865141 )
                {
                  if ( a1 > -2146762751 )
                  {
                    switch ( a1 )
                    {
                      case -2146762750:
                        result = L"TRUST_E_ACTION_UNKNOWN";
                        break;
                      case -2146762749:
                        result = L"TRUST_E_SUBJECT_FORM_UNKNOWN";
                        break;
                      case -2146762748:
                        result = L"TRUST_E_SUBJECT_NOT_TRUSTED";
                        break;
                      case -2146762747:
                        result = L"DIGSIG_E_ENCODE";
                        break;
                      case -2146762746:
                        result = L"DIGSIG_E_DECODE";
                        break;
                      case -2146762745:
                        result = L"DIGSIG_E_EXTENSIBILITY";
                        break;
                      case -2146762744:
                        result = L"DIGSIG_E_CRYPTO";
                        break;
                      case -2146762743:
                        result = L"PERSIST_E_SIZEDEFINITE";
                        break;
                      default:
                        return L"Unknown";
                    }
                  }
                  else if ( a1 == -2146762751 )
                  {
                    return L"TRUST_E_PROVIDER_UNKNOWN";
                  }
                  else
                  {
                    switch ( a1 )
                    {
                      case -2146865140:
                        result = L"MSSIPOTF_E_TABLE_CHECKSUM";
                        break;
                      case -2146865139:
                        result = L"MSSIPOTF_E_FILE_CHECKSUM";
                        break;
                      case -2146865136:
                        result = L"MSSIPOTF_E_FAILED_POLICY";
                        break;
                      case -2146865135:
                        result = L"MSSIPOTF_E_FAILED_HINTS_CHECK";
                        break;
                      case -2146865134:
                        result = L"MSSIPOTF_E_NOT_OPENTYPE";
                        break;
                      case -2146865133:
                        result = L"MSSIPOTF_E_FILE";
                        break;
                      case -2146865132:
                        result = L"MSSIPOTF_E_CRYPT";
                        break;
                      case -2146865131:
                        result = L"MSSIPOTF_E_BADVERSION";
                        break;
                      case -2146865130:
                        result = L"MSSIPOTF_E_DSIG_STRUCTURE";
                        break;
                      case -2146865129:
                        result = L"MSSIPOTF_E_PCONST_CHECK";
                        break;
                      case -2146865128:
                        result = L"MSSIPOTF_E_STRUCTURE";
                        break;
                      default:
                        return L"Unknown";
                    }
                  }
                }
                else
                {
                  if ( a1 == -2146865141 )
                    return L"MSSIPOTF_E_FILETOOSMALL";
                  if ( a1 <= -2146865151 )
                  {
                    if ( a1 == -2146865151 )
                      return L"MSSIPOTF_E_OUTOFMEMRANGE";
                    if ( a1 > -2146869244 )
                    {
                      switch ( a1 )
                      {
                        case -2146869243:
                          return L"TRUST_E_TIME_STAMP";
                        case -2146869232:
                          return L"TRUST_E_BAD_DIGEST";
                        case -2146869223:
                          return L"TRUST_E_BASIC_CONSTRAINTS";
                        case -2146869218:
                          return L"TRUST_E_FINANCIAL_CRITERIA";
                      }
                    }
                    else
                    {
                      switch ( a1 )
                      {
                        case -2146869244:
                          return L"TRUST_E_CERT_SIGNATURE";
                        case -2146873340:
                          return L"XENROLL_E_RESPONSE_KA_HASH_MISMATCH";
                        case -2146873339:
                          return L"XENROLL_E_KEYSPEC_SMIME_MISMATCH";
                        case -2146869247:
                          return L"TRUST_E_SYSTEM_ERROR";
                        case -2146869246:
                          return L"TRUST_E_NO_SIGNER_CERT";
                        case -2146869245:
                          return L"TRUST_E_COUNTER_SIGNER";
                      }
                    }
                    return L"Unknown";
                  }
                  switch ( a1 )
                  {
                    case -2146865150:
                      result = L"MSSIPOTF_E_CANTGETOBJECT";
                      break;
                    case -2146865149:
                      result = L"MSSIPOTF_E_NOHEADTABLE";
                      break;
                    case -2146865148:
                      result = L"MSSIPOTF_E_BAD_MAGICNUMBER";
                      break;
                    case -2146865147:
                      result = L"MSSIPOTF_E_BAD_OFFSET_TABLE";
                      break;
                    case -2146865146:
                      result = L"MSSIPOTF_E_TABLE_TAGORDER";
                      break;
                    case -2146865145:
                      result = L"MSSIPOTF_E_TABLE_LONGWORD";
                      break;
                    case -2146865144:
                      result = L"MSSIPOTF_E_BAD_FIRST_TABLE_PLACEMENT";
                      break;
                    case -2146865143:
                      result = L"MSSIPOTF_E_TABLES_OVERLAP";
                      break;
                    case -2146865142:
                      result = L"MSSIPOTF_E_TABLE_PADBYTES";
                      break;
                    default:
                      return L"Unknown";
                  }
                }
              }
              else
              {
                if ( a1 == -2146873341 )
                  return L"XENROLL_E_RESPONSE_UNEXPECTED_KA_HASH";
                if ( a1 > -2146875392 )
                {
                  if ( a1 > -2146873344 )
                  {
                    if ( a1 == -2146873343 )
                      return L"XENROLL_E_CANNOT_ADD_ROOT_CERT";
                    else
                      return L"XENROLL_E_RESPONSE_KA_HASH_NOT_FOUND";
                  }
                  else if ( a1 == -2146873344 )
                  {
                    return L"XENROLL_E_KEY_NOT_EXPORTABLE";
                  }
                  else
                  {
                    switch ( a1 )
                    {
                      case -2146875391:
                        result = L"CERTSRV_E_NO_CERT_TYPE";
                        break;
                      case -2146875390:
                        result = L"CERTSRV_E_TEMPLATE_CONFLICT";
                        break;
                      case -2146875389:
                        result = L"CERTSRV_E_SUBJECT_ALT_NAME_REQUIRED";
                        break;
                      case -2146875388:
                        result = L"CERTSRV_E_ARCHIVED_KEY_REQUIRED";
                        break;
                      case -2146875387:
                        result = L"CERTSRV_E_SMIME_REQUIRED";
                        break;
                      case -2146875386:
                        result = L"CERTSRV_E_BAD_RENEWAL_SUBJECT";
                        break;
                      case -2146875385:
                        result = L"CERTSRV_E_BAD_TEMPLATE_VERSION";
                        break;
                      case -2146875384:
                        result = L"CERTSRV_E_TEMPLATE_POLICY_REQUIRED";
                        break;
                      case -2146875383:
                        result = L"CERTSRV_E_SIGNATURE_POLICY_REQUIRED";
                        break;
                      case -2146875382:
                        result = L"CERTSRV_E_SIGNATURE_COUNT";
                        break;
                      case -2146875381:
                        result = L"CERTSRV_E_SIGNATURE_REJECTED";
                        break;
                      case -2146875380:
                        result = L"CERTSRV_E_ISSUANCE_POLICY_REQUIRED";
                        break;
                      case -2146875379:
                        result = L"CERTSRV_E_SUBJECT_UPN_REQUIRED";
                        break;
                      case -2146875378:
                        result = L"CERTSRV_E_SUBJECT_DIRECTORY_GUID_REQUIRED";
                        break;
                      case -2146875377:
                        result = L"CERTSRV_E_SUBJECT_DNS_REQUIRED";
                        break;
                      case -2146875376:
                        result = L"CERTSRV_E_ARCHIVED_KEY_UNEXPECTED";
                        break;
                      case -2146875375:
                        result = L"CERTSRV_E_KEY_LENGTH";
                        break;
                      default:
                        return L"Unknown";
                    }
                  }
                }
                else
                {
                  if ( a1 == -2146875392 )
                    return L"CERTSRV_E_UNSUPPORTED_CERT_TYPE";
                  if ( a1 > -2146877432 )
                  {
                    switch ( a1 )
                    {
                      case -2146877431:
                        result = L"CERTSRV_E_RESTRICTEDOFFICER";
                        break;
                      case -2146877430:
                        result = L"CERTSRV_E_KEY_ARCHIVAL_NOT_CONFIGURED";
                        break;
                      case -2146877429:
                        result = L"CERTSRV_E_NO_VALID_KRA";
                        break;
                      case -2146877428:
                        result = L"CERTSRV_E_BAD_REQUEST_KEY_ARCHIVAL";
                        break;
                      case -2146877427:
                        result = L"CERTSRV_E_NO_CAADMIN_DEFINED";
                        break;
                      case -2146877426:
                        result = L"CERTSRV_E_BAD_RENEWAL_CERT_ATTRIBUTE";
                        break;
                      case -2146877425:
                        result = L"CERTSRV_E_NO_DB_SESSIONS";
                        break;
                      case -2146877424:
                        result = L"CERTSRV_E_ALIGNMENT_FAULT";
                        break;
                      case -2146877423:
                        result = L"CERTSRV_E_ENROLL_DENIED";
                        break;
                      case -2146877422:
                        result = L"CERTSRV_E_TEMPLATE_DENIED";
                        break;
                      default:
                        return L"Unknown";
                    }
                  }
                  else
                  {
                    if ( a1 == -2146877432 )
                      return L"CERTSRV_E_ROLECONFLICT";
                    if ( a1 <= -2146877437 )
                    {
                      switch ( a1 )
                      {
                        case -2146877437:
                          return L"CERTSRV_E_BAD_REQUESTSTATUS";
                        case -2146881228:
                          return L"CRYPT_E_ASN1_NYI";
                        case -2146881023:
                          return L"CRYPT_E_ASN1_EXTENDED";
                        case -2146881022:
                          return L"CRYPT_E_ASN1_NOEOD";
                        case -2146877439:
                          return L"CERTSRV_E_BAD_REQUESTSUBJECT";
                        case -2146877438:
                          return L"CERTSRV_E_NO_REQUEST";
                      }
                      return L"Unknown";
                    }
                    switch ( a1 )
                    {
                      case -2146877436:
                        return L"CERTSRV_E_PROPERTY_EMPTY";
                      case -2146877435:
                        return L"CERTSRV_E_INVALID_CA_CERTIFICATE";
                      case -2146877434:
                        return L"CERTSRV_E_SERVER_SUSPENDED";
                      default:
                        return L"CERTSRV_E_ENCODING_LENGTH";
                    }
                  }
                }
              }
            }
          }
        }
        return result;
      }
      if ( a1 <= -2005397136 )
      {
        if ( a1 == -2005397136 )
          return L"DMUS_E_NO_MASTER_CLOCK";
        switch ( a1 )
        {
          case -2005397208:
            result = L"DMUS_E_BADWAVELINK";
            break;
          case -2005397207:
            result = L"DMUS_E_NOARTICULATION";
            break;
          case -2005397206:
            result = L"DMUS_E_NOTPCM";
            break;
          case -2005397205:
            result = L"DMUS_E_BADWAVE";
            break;
          case -2005397204:
            result = L"DMUS_E_BADOFFSETTABLE";
            break;
          case -2005397203:
            result = L"DMUS_E_UNKNOWNDOWNLOAD";
            break;
          case -2005397202:
            result = L"DMUS_E_NOSYNTHSINK";
            break;
          case -2005397201:
            result = L"DMUS_E_ALREADYOPEN";
            break;
          case -2005397200:
            result = L"DMUS_E_ALREADYCLOSED";
            break;
          case -2005397199:
            result = L"DMUS_E_SYNTHNOTCONFIGURED";
            break;
          case -2005397198:
            result = L"DMUS_E_SYNTHACTIVE";
            break;
          case -2005397197:
            result = L"DMUS_E_CANNOTREAD";
            break;
          case -2005397196:
            result = L"DMUS_E_DMUSIC_RELEASED";
            break;
          case -2005397195:
            result = L"DMUS_E_BUFFER_EMPTY";
            break;
          case -2005397194:
            result = L"DMUS_E_BUFFER_FULL";
            break;
          case -2005397193:
            result = L"DMUS_E_PORT_NOT_CAPTURE";
            break;
          case -2005397192:
            result = L"DMUS_E_PORT_NOT_RENDER";
            break;
          case -2005397191:
            result = L"DMUS_E_DSOUND_NOT_SET";
            break;
          case -2005397190:
            result = L"DMUS_E_ALREADY_ACTIVATED";
            break;
          case -2005397189:
            result = L"DMUS_E_INVALIDBUFFER";
            break;
          case -2005397188:
            result = L"DMUS_E_WAVEFORMATNOTSUPPORTED";
            break;
          case -2005397187:
            result = L"DMUS_E_SYNTHINACTIVE";
            break;
          case -2005397186:
            result = L"DMUS_E_DSOUND_ALREADY_SET";
            break;
          case -2005397185:
            result = L"DMUS_E_INVALID_EVENT";
            break;
          case -2005397168:
            result = L"DMUS_E_UNSUPPORTED_STREAM";
            break;
          case -2005397167:
            result = L"DMUS_E_ALREADY_INITED";
            break;
          case -2005397166:
            result = L"DMUS_E_INVALID_BAND";
            break;
          case -2005397163:
            result = L"DMUS_E_TRACK_HDR_NOT_FIRST_CK";
            break;
          case -2005397162:
            result = L"DMUS_E_TOOL_HDR_NOT_FIRST_CK";
            break;
          case -2005397161:
            result = L"DMUS_E_INVALID_TRACK_HDR";
            break;
          case -2005397160:
            result = L"DMUS_E_INVALID_TOOL_HDR";
            break;
          case -2005397159:
            result = L"DMUS_E_ALL_TOOLS_FAILED";
            break;
          case -2005397152:
            result = L"DMUS_E_ALL_TRACKS_FAILED";
            break;
          case -2005397151:
            result = L"DSERR_OBJECTNOTFOUND";
            break;
          case -2005397150:
            result = L"DMUS_E_NOT_INIT";
            break;
          case -2005397149:
            result = L"DMUS_E_TYPE_DISABLED";
            break;
          case -2005397148:
            result = L"DMUS_E_TYPE_UNSUPPORTED";
            break;
          case -2005397147:
            result = L"DMUS_E_TIME_PAST";
            break;
          case -2005397146:
            result = L"DMUS_E_TRACK_NOT_FOUND";
            break;
          case -2005397145:
            result = L"DMUS_E_TRACK_NO_CLOCKTIME_SUPPORT";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 > 1062 )
      {
        switch ( a1 )
        {
          case 1063:
LABEL_2981:
            result = L"ERROR_FAILED_SERVICE_CONTROLLER_CONNECT";
            break;
          case 1064:
LABEL_2982:
            result = L"ERROR_EXCEPTION_IN_SERVICE";
            break;
          case 1065:
LABEL_2983:
            result = L"ERROR_DATABASE_DOES_NOT_EXIST";
            break;
          case 1066:
LABEL_2984:
            result = L"ERROR_SERVICE_SPECIFIC_ERROR";
            break;
          case 1067:
LABEL_2985:
            result = L"ERROR_PROCESS_ABORTED";
            break;
          case 1068:
LABEL_2986:
            result = L"ERROR_SERVICE_DEPENDENCY_FAIL";
            break;
          case 1069:
LABEL_2987:
            result = L"ERROR_SERVICE_LOGON_FAILED";
            break;
          case 1070:
LABEL_2988:
            result = L"ERROR_SERVICE_START_HANG";
            break;
          case 1071:
LABEL_2989:
            result = L"ERROR_INVALID_SERVICE_LOCK";
            break;
          case 1072:
LABEL_2990:
            result = L"ERROR_SERVICE_MARKED_FOR_DELETE";
            break;
          case 1073:
LABEL_2991:
            result = L"ERROR_SERVICE_EXISTS";
            break;
          case 1074:
LABEL_2992:
            result = L"ERROR_ALREADY_RUNNING_LKG";
            break;
          case 1075:
LABEL_2993:
            result = L"ERROR_SERVICE_DEPENDENCY_DELETED";
            break;
          case 1076:
LABEL_2994:
            result = L"ERROR_BOOT_ALREADY_ACCEPTED";
            break;
          case 1077:
LABEL_2995:
            result = L"ERROR_SERVICE_NEVER_STARTED";
            break;
          case 1078:
LABEL_2996:
            result = L"ERROR_DUPLICATE_SERVICE_NAME";
            break;
          case 1079:
LABEL_2997:
            result = L"ERROR_DIFFERENT_SERVICE_ACCOUNT";
            break;
          case 1080:
LABEL_2998:
            result = L"ERROR_CANNOT_DETECT_DRIVER_FAILURE";
            break;
          case 1081:
LABEL_2999:
            result = L"ERROR_CANNOT_DETECT_PROCESS_ABORT";
            break;
          case 1082:
LABEL_3000:
            result = L"ERROR_NO_RECOVERY_PROGRAM";
            break;
          case 1083:
LABEL_3001:
            result = L"ERROR_SERVICE_NOT_IN_EXE";
            break;
          case 1100:
LABEL_3002:
            result = L"ERROR_END_OF_MEDIA";
            break;
          case 1101:
LABEL_3003:
            result = L"ERROR_FILEMARK_DETECTED";
            break;
          case 1102:
LABEL_3004:
            result = L"ERROR_BEGINNING_OF_MEDIA";
            break;
          case 1103:
LABEL_3005:
            result = L"ERROR_SETMARK_DETECTED";
            break;
          case 1104:
LABEL_3006:
            result = L"ERROR_NO_DATA_DETECTED";
            break;
          case 1105:
LABEL_3007:
            result = L"ERROR_PARTITION_FAILURE";
            break;
          case 1106:
LABEL_3008:
            result = L"ERROR_INVALID_BLOCK_LENGTH";
            break;
          case 1107:
LABEL_3009:
            result = L"ERROR_DEVICE_NOT_PARTITIONED";
            break;
          case 1108:
LABEL_3010:
            result = L"ERROR_UNABLE_TO_LOCK_MEDIA";
            break;
          case 1109:
LABEL_3011:
            result = L"ERROR_UNABLE_TO_UNLOAD_MEDIA";
            break;
          case 1110:
LABEL_3012:
            result = L"ERROR_MEDIA_CHANGED";
            break;
          case 1111:
LABEL_3013:
            result = L"ERROR_BUS_RESET";
            break;
          case 1112:
LABEL_3014:
            result = L"ERROR_NO_MEDIA_IN_DRIVE";
            break;
          case 1113:
LABEL_3015:
            result = L"ERROR_NO_UNICODE_TRANSLATION";
            break;
          case 1114:
LABEL_3016:
            result = L"ERROR_DLL_INIT_FAILED";
            break;
          case 1115:
LABEL_3017:
            result = L"ERROR_SHUTDOWN_IN_PROGRESS";
            break;
          case 1116:
LABEL_3018:
            result = L"ERROR_NO_SHUTDOWN_IN_PROGRESS";
            break;
          case 1117:
LABEL_3019:
            result = L"ERROR_IO_DEVICE";
            break;
          case 1118:
LABEL_3020:
            result = L"ERROR_SERIAL_NO_DEVICE";
            break;
          case 1119:
LABEL_3021:
            result = L"ERROR_IRQ_BUSY";
            break;
          case 1120:
LABEL_3022:
            result = L"ERROR_MORE_WRITES";
            break;
          case 1121:
LABEL_3023:
            result = L"ERROR_COUNTER_TIMEOUT";
            break;
          case 1122:
LABEL_3024:
            result = L"ERROR_FLOPPY_ID_MARK_NOT_FOUND";
            break;
          case 1123:
LABEL_3025:
            result = L"ERROR_FLOPPY_WRONG_CYLINDER";
            break;
          case 1124:
LABEL_3026:
            result = L"ERROR_FLOPPY_UNKNOWN_ERROR";
            break;
          case 1125:
LABEL_3027:
            result = L"ERROR_FLOPPY_BAD_REGISTERS";
            break;
          case 1126:
LABEL_3028:
            result = L"ERROR_DISK_RECALIBRATE_FAILED";
            break;
          case 1127:
LABEL_3029:
            result = L"ERROR_DISK_OPERATION_FAILED";
            break;
          case 1128:
LABEL_3030:
            result = L"ERROR_DISK_RESET_FAILED";
            break;
          case 1129:
LABEL_3031:
            result = L"ERROR_EOM_OVERFLOW";
            break;
          case 1130:
LABEL_3032:
            result = L"ERROR_NOT_ENOUGH_SERVER_MEMORY";
            break;
          case 1131:
LABEL_3033:
            result = L"ERROR_POSSIBLE_DEADLOCK";
            break;
          case 1132:
LABEL_3034:
            result = L"ERROR_MAPPED_ALIGNMENT";
            break;
          case 1140:
LABEL_3035:
            result = L"ERROR_SET_POWER_STATE_VETOED";
            break;
          case 1141:
LABEL_3036:
            result = L"ERROR_SET_POWER_STATE_FAILED";
            break;
          case 1142:
LABEL_3037:
            result = L"ERROR_TOO_MANY_LINKS";
            break;
          case 1150:
LABEL_3038:
            result = L"ERROR_OLD_WIN_VERSION & DIERR_OLDDIRECTINPUTVERSION";
            break;
          case 1151:
LABEL_3039:
            result = L"ERROR_APP_WRONG_OS";
            break;
          case 1152:
LABEL_3040:
            result = L"ERROR_SINGLE_INSTANCE_APP";
            break;
          case 1153:
LABEL_3041:
            result = L"ERROR_RMODE_APP & DIERR_BETADIRECTINPUTVERSION";
            break;
          case 1154:
LABEL_3042:
            result = L"ERROR_INVALID_DLL";
            break;
          case 1155:
            return L"ERROR_NO_ASSOCIATION";
          case 1156:
LABEL_3044:
            result = L"ERROR_DDE_FAIL";
            break;
          case 1157:
LABEL_3045:
            result = L"ERROR_DLL_NOT_FOUND";
            break;
          case 1158:
LABEL_3046:
            result = L"ERROR_NO_MORE_USER_HANDLES";
            break;
          case 1159:
LABEL_3047:
            result = L"ERROR_MESSAGE_SYNC_ONLY";
            break;
          case 1160:
LABEL_3048:
            result = L"ERROR_SOURCE_ELEMENT_EMPTY";
            break;
          case 1161:
LABEL_3049:
            result = L"ERROR_DESTINATION_ELEMENT_FULL";
            break;
          case 1162:
LABEL_3050:
            result = L"ERROR_ILLEGAL_ELEMENT_ADDRESS";
            break;
          case 1163:
LABEL_3051:
            result = L"ERROR_MAGAZINE_NOT_PRESENT";
            break;
          case 1164:
LABEL_3052:
            result = L"ERROR_DEVICE_REINITIALIZATION_NEEDED";
            break;
          case 1165:
LABEL_3053:
            result = L"ERROR_DEVICE_REQUIRES_CLEANING";
            break;
          case 1166:
LABEL_3054:
            result = L"ERROR_DEVICE_DOOR_OPEN";
            break;
          case 1167:
LABEL_3055:
            result = L"ERROR_DEVICE_NOT_CONNECTED";
            break;
          case 1168:
LABEL_3056:
            result = L"ERROR_NOT_FOUND & E_PROP_ID_UNSUPPORTED";
            break;
          case 1169:
LABEL_3057:
            result = L"ERROR_NO_MATCH";
            break;
          case 1170:
LABEL_3058:
            result = L"ERROR_SET_NOT_FOUND & E_PROP_SET_UNSUPPORTED";
            break;
          case 1171:
LABEL_3059:
            result = L"ERROR_POINT_NOT_FOUND";
            break;
          case 1172:
LABEL_3060:
            result = L"ERROR_NO_TRACKING_SERVICE";
            break;
          case 1173:
LABEL_3061:
            result = L"ERROR_NO_VOLUME_ID";
            break;
          case 1175:
LABEL_3062:
            result = L"ERROR_UNABLE_TO_REMOVE_REPLACED";
            break;
          case 1176:
LABEL_3063:
            result = L"ERROR_UNABLE_TO_MOVE_REPLACEMENT";
            break;
          case 1177:
LABEL_3064:
            result = L"ERROR_UNABLE_TO_MOVE_REPLACEMENT_2";
            break;
          case 1178:
LABEL_3065:
            result = L"ERROR_JOURNAL_DELETE_IN_PROGRESS";
            break;
          case 1179:
LABEL_3066:
            result = L"ERROR_JOURNAL_NOT_ACTIVE";
            break;
          case 1180:
LABEL_3067:
            result = L"ERROR_POTENTIAL_FILE_FOUND";
            break;
          case 1181:
LABEL_3276:
            result = L"ERROR_JOURNAL_ENTRY_DELETED";
            break;
          case 1200:
LABEL_3068:
            result = L"ERROR_BAD_DEVICE";
            break;
          case 1201:
LABEL_3069:
            result = L"ERROR_CONNECTION_UNAVAIL";
            break;
          case 1202:
LABEL_3070:
            result = L"ERROR_DEVICE_ALREADY_REMEMBERED";
            break;
          case 1203:
LABEL_3071:
            result = L"ERROR_NO_NET_OR_BAD_PATH";
            break;
          case 1204:
LABEL_3072:
            result = L"ERROR_BAD_PROVIDER";
            break;
          case 1205:
LABEL_3073:
            result = L"ERROR_CANNOT_OPEN_PROFILE";
            break;
          case 1206:
LABEL_3074:
            result = L"ERROR_BAD_PROFILE";
            break;
          case 1207:
LABEL_3075:
            result = L"ERROR_NOT_CONTAINER";
            break;
          case 1208:
LABEL_3076:
            result = L"ERROR_EXTENDED_ERROR";
            break;
          case 1209:
LABEL_3077:
            result = L"ERROR_INVALID_GROUPNAME";
            break;
          case 1210:
LABEL_3078:
            result = L"ERROR_INVALID_COMPUTERNAME";
            break;
          case 1211:
LABEL_3079:
            result = L"ERROR_INVALID_EVENTNAME";
            break;
          case 1212:
LABEL_3080:
            result = L"ERROR_INVALID_DOMAINNAME";
            break;
          case 1213:
LABEL_3081:
            result = L"ERROR_INVALID_SERVICENAME";
            break;
          case 1214:
LABEL_3082:
            result = L"ERROR_INVALID_NETNAME";
            break;
          case 1215:
LABEL_3083:
            result = L"ERROR_INVALID_SHARENAME";
            break;
          case 1216:
LABEL_3084:
            result = L"ERROR_INVALID_PASSWORDNAME";
            break;
          case 1217:
LABEL_3085:
            result = L"ERROR_INVALID_MESSAGENAME";
            break;
          case 1218:
LABEL_3086:
            result = L"ERROR_INVALID_MESSAGEDEST";
            break;
          case 1219:
LABEL_3087:
            result = L"ERROR_SESSION_CREDENTIAL_CONFLICT";
            break;
          case 1220:
LABEL_3088:
            result = L"ERROR_REMOTE_SESSION_LIMIT_EXCEEDED";
            break;
          case 1221:
LABEL_3089:
            result = L"ERROR_DUP_DOMAINNAME";
            break;
          case 1222:
LABEL_3090:
            result = L"ERROR_NO_NETWORK";
            break;
          case 1223:
LABEL_3091:
            result = L"ERROR_CANCELLED";
            break;
          case 1224:
LABEL_3092:
            result = L"ERROR_USER_MAPPED_FILE";
            break;
          case 1225:
LABEL_3093:
            result = L"ERROR_CONNECTION_REFUSED";
            break;
          case 1226:
LABEL_3094:
            result = L"ERROR_GRACEFUL_DISCONNECT";
            break;
          case 1227:
LABEL_3095:
            result = L"ERROR_ADDRESS_ALREADY_ASSOCIATED";
            break;
          case 1228:
LABEL_3096:
            result = L"ERROR_ADDRESS_NOT_ASSOCIATED";
            break;
          case 1229:
LABEL_3097:
            result = L"ERROR_CONNECTION_INVALID";
            break;
          case 1230:
LABEL_3098:
            result = L"ERROR_CONNECTION_ACTIVE";
            break;
          case 1231:
LABEL_3099:
            result = L"ERROR_NETWORK_UNREACHABLE";
            break;
          case 1232:
LABEL_3100:
            result = L"ERROR_HOST_UNREACHABLE";
            break;
          case 1233:
LABEL_3101:
            result = L"ERROR_PROTOCOL_UNREACHABLE";
            break;
          case 1234:
LABEL_3102:
            result = L"ERROR_PORT_UNREACHABLE";
            break;
          case 1235:
LABEL_3103:
            result = L"ERROR_REQUEST_ABORTED";
            break;
          case 1236:
LABEL_3104:
            result = L"ERROR_CONNECTION_ABORTED";
            break;
          case 1237:
LABEL_3105:
            result = L"ERROR_RETRY";
            break;
          case 1238:
LABEL_3106:
            result = L"ERROR_CONNECTION_COUNT_LIMIT";
            break;
          case 1239:
LABEL_3107:
            result = L"ERROR_LOGIN_TIME_RESTRICTION";
            break;
          case 1240:
LABEL_3108:
            result = L"ERROR_LOGIN_WKSTA_RESTRICTION";
            break;
          case 1241:
LABEL_3109:
            result = L"ERROR_INCORRECT_ADDRESS";
            break;
          case 1242:
LABEL_3110:
            result = L"ERROR_ALREADY_REGISTERED";
            break;
          case 1243:
LABEL_3111:
            result = L"ERROR_SERVICE_NOT_FOUND";
            break;
          case 1244:
LABEL_3112:
            result = L"ERROR_NOT_AUTHENTICATED";
            break;
          case 1245:
LABEL_3113:
            result = L"ERROR_NOT_LOGGED_ON";
            break;
          case 1246:
LABEL_3114:
            result = L"ERROR_CONTINUE";
            break;
          case 1247:
LABEL_3115:
            result = L"ERROR_ALREADY_INITIALIZED & DIERR_ALREADYINITIALIZED";
            break;
          case 1248:
LABEL_3116:
            result = L"ERROR_NO_MORE_DEVICES";
            break;
          case 1249:
LABEL_3117:
            result = L"ERROR_NO_SUCH_SITE";
            break;
          case 1250:
LABEL_3118:
            result = L"ERROR_DOMAIN_CONTROLLER_EXISTS";
            break;
          case 1251:
LABEL_3277:
            result = L"ERROR_ONLY_IF_CONNECTED";
            break;
          case 1252:
LABEL_3278:
            result = L"ERROR_OVERRIDE_NOCHANGES";
            break;
          case 1253:
LABEL_3279:
            result = L"ERROR_BAD_USER_PROFILE";
            break;
          case 1254:
LABEL_3280:
            result = L"ERROR_NOT_SUPPORTED_ON_SBS";
            break;
          case 1255:
LABEL_3281:
            result = L"ERROR_SERVER_SHUTDOWN_IN_PROGRESS";
            break;
          case 1256:
LABEL_3282:
            result = L"ERROR_HOST_DOWN";
            break;
          case 1257:
LABEL_3283:
            result = L"ERROR_NON_ACCOUNT_SID";
            break;
          case 1258:
LABEL_3284:
            result = L"ERROR_NON_DOMAIN_SID";
            break;
          case 1259:
LABEL_3285:
            result = L"ERROR_APPHELP_BLOCK";
            break;
          case 1260:
LABEL_3286:
            result = L"ERROR_ACCESS_DISABLED_BY_POLICY";
            break;
          case 1261:
LABEL_3287:
            result = L"ERROR_REG_NAT_CONSUMPTION";
            break;
          case 1262:
LABEL_3288:
            result = L"ERROR_CSCSHARE_OFFLINE";
            break;
          case 1263:
LABEL_3289:
            result = L"ERROR_PKINIT_FAILURE";
            break;
          case 1264:
LABEL_3290:
            result = L"ERROR_SMARTCARD_SUBSYSTEM_FAILURE";
            break;
          case 1265:
LABEL_3291:
            result = L"ERROR_DOWNGRADE_DETECTED";
            break;
          case 1271:
LABEL_3292:
            result = L"ERROR_MACHINE_LOCKED";
            break;
          case 1273:
LABEL_3293:
            result = L"ERROR_CALLBACK_SUPPLIED_INVALID_DATA";
            break;
          case 1274:
LABEL_3294:
            result = L"ERROR_SYNC_FOREGROUND_REFRESH_REQUIRED";
            break;
          case 1275:
LABEL_3295:
            result = L"ERROR_DRIVER_BLOCKED";
            break;
          case 1276:
LABEL_3296:
            result = L"ERROR_INVALID_IMPORT_OF_NON_DLL";
            break;
          case 1300:
LABEL_3119:
            result = L"ERROR_NOT_ALL_ASSIGNED";
            break;
          case 1301:
LABEL_3120:
            result = L"ERROR_SOME_NOT_MAPPED";
            break;
          case 1302:
LABEL_3121:
            result = L"ERROR_NO_QUOTAS_FOR_ACCOUNT";
            break;
          case 1303:
LABEL_3122:
            result = L"ERROR_LOCAL_USER_SESSION_KEY";
            break;
          case 1304:
LABEL_3123:
            result = L"ERROR_NULL_LM_PASSWORD";
            break;
          case 1305:
LABEL_3124:
            result = L"ERROR_UNKNOWN_REVISION";
            break;
          case 1306:
LABEL_3125:
            result = L"ERROR_REVISION_MISMATCH";
            break;
          case 1307:
LABEL_3126:
            result = L"ERROR_INVALID_OWNER";
            break;
          case 1308:
LABEL_3127:
            result = L"ERROR_INVALID_PRIMARY_GROUP";
            break;
          case 1309:
LABEL_3128:
            result = L"ERROR_NO_IMPERSONATION_TOKEN";
            break;
          case 1310:
LABEL_3129:
            result = L"ERROR_CANT_DISABLE_MANDATORY";
            break;
          case 1311:
LABEL_3130:
            result = L"ERROR_NO_LOGON_SERVERS";
            break;
          case 1312:
LABEL_3131:
            result = L"ERROR_NO_SUCH_LOGON_SESSION";
            break;
          case 1313:
LABEL_3132:
            result = L"ERROR_NO_SUCH_PRIVILEGE";
            break;
          case 1314:
LABEL_3133:
            result = L"ERROR_PRIVILEGE_NOT_HELD";
            break;
          case 1315:
LABEL_3134:
            result = L"ERROR_INVALID_ACCOUNT_NAME";
            break;
          case 1316:
LABEL_3135:
            result = L"ERROR_USER_EXISTS";
            break;
          case 1317:
LABEL_3136:
            result = L"ERROR_NO_SUCH_USER";
            break;
          case 1318:
LABEL_3137:
            result = L"ERROR_GROUP_EXISTS";
            break;
          case 1319:
LABEL_3138:
            result = L"ERROR_NO_SUCH_GROUP";
            break;
          case 1320:
LABEL_3139:
            result = L"ERROR_MEMBER_IN_GROUP";
            break;
          case 1321:
LABEL_3140:
            result = L"ERROR_MEMBER_NOT_IN_GROUP";
            break;
          case 1322:
LABEL_3141:
            result = L"ERROR_LAST_ADMIN";
            break;
          case 1323:
LABEL_3142:
            result = L"ERROR_WRONG_PASSWORD";
            break;
          case 1324:
LABEL_3143:
            result = L"ERROR_ILL_FORMED_PASSWORD";
            break;
          case 1325:
LABEL_3144:
            result = L"ERROR_PASSWORD_RESTRICTION";
            break;
          case 1326:
LABEL_3145:
            result = L"ERROR_LOGON_FAILURE";
            break;
          case 1327:
LABEL_3146:
            result = L"ERROR_ACCOUNT_RESTRICTION";
            break;
          case 1328:
LABEL_3147:
            result = L"ERROR_INVALID_LOGON_HOURS";
            break;
          case 1329:
LABEL_3148:
            result = L"ERROR_INVALID_WORKSTATION";
            break;
          case 1330:
LABEL_3149:
            result = L"ERROR_PASSWORD_EXPIRED";
            break;
          case 1331:
LABEL_3150:
            result = L"ERROR_ACCOUNT_DISABLED";
            break;
          case 1332:
LABEL_3151:
            result = L"ERROR_NONE_MAPPED";
            break;
          case 1333:
LABEL_3152:
            result = L"ERROR_TOO_MANY_LUIDS_REQUESTED";
            break;
          case 1334:
LABEL_3153:
            result = L"ERROR_LUIDS_EXHAUSTED";
            break;
          case 1335:
LABEL_3154:
            result = L"ERROR_INVALID_SUB_AUTHORITY";
            break;
          case 1336:
LABEL_3155:
            result = L"ERROR_INVALID_ACL";
            break;
          case 1337:
LABEL_3156:
            result = L"ERROR_INVALID_SID";
            break;
          case 1338:
LABEL_3157:
            result = L"ERROR_INVALID_SECURITY_DESCR";
            break;
          case 1340:
LABEL_3158:
            result = L"ERROR_BAD_INHERITANCE_ACL";
            break;
          case 1341:
LABEL_3159:
            result = L"ERROR_SERVER_DISABLED";
            break;
          case 1342:
LABEL_3160:
            result = L"ERROR_SERVER_NOT_DISABLED";
            break;
          case 1343:
LABEL_3161:
            result = L"ERROR_INVALID_ID_AUTHORITY";
            break;
          case 1344:
LABEL_3162:
            result = L"ERROR_ALLOTTED_SPACE_EXCEEDED";
            break;
          case 1345:
LABEL_3163:
            result = L"ERROR_INVALID_GROUP_ATTRIBUTES";
            break;
          case 1346:
LABEL_3164:
            result = L"ERROR_BAD_IMPERSONATION_LEVEL";
            break;
          case 1347:
LABEL_3165:
            result = L"ERROR_CANT_OPEN_ANONYMOUS";
            break;
          case 1348:
LABEL_3166:
            result = L"ERROR_BAD_VALIDATION_CLASS";
            break;
          case 1349:
LABEL_3167:
            result = L"ERROR_BAD_TOKEN_TYPE";
            break;
          case 1350:
LABEL_3168:
            result = L"ERROR_NO_SECURITY_ON_OBJECT";
            break;
          case 1351:
LABEL_3169:
            result = L"ERROR_CANT_ACCESS_DOMAIN_INFO";
            break;
          case 1352:
LABEL_3170:
            result = L"ERROR_INVALID_SERVER_STATE";
            break;
          case 1353:
LABEL_3171:
            result = L"ERROR_INVALID_DOMAIN_STATE";
            break;
          case 1354:
LABEL_3172:
            result = L"ERROR_INVALID_DOMAIN_ROLE";
            break;
          case 1355:
LABEL_3173:
            result = L"ERROR_NO_SUCH_DOMAIN";
            break;
          case 1356:
LABEL_3174:
            result = L"ERROR_DOMAIN_EXISTS";
            break;
          case 1357:
LABEL_3175:
            result = L"ERROR_DOMAIN_LIMIT_EXCEEDED";
            break;
          case 1358:
LABEL_3176:
            result = L"ERROR_INTERNAL_DB_CORRUPTION";
            break;
          case 1359:
LABEL_3177:
            result = L"ERROR_INTERNAL_ERROR";
            break;
          case 1360:
LABEL_3178:
            result = L"ERROR_GENERIC_NOT_MAPPED";
            break;
          case 1361:
LABEL_3179:
            result = L"ERROR_BAD_DESCRIPTOR_FORMAT";
            break;
          case 1362:
LABEL_3180:
            result = L"ERROR_NOT_LOGON_PROCESS";
            break;
          case 1363:
LABEL_3181:
            result = L"ERROR_LOGON_SESSION_EXISTS";
            break;
          case 1364:
LABEL_3182:
            result = L"ERROR_NO_SUCH_PACKAGE";
            break;
          case 1365:
LABEL_3183:
            result = L"ERROR_BAD_LOGON_SESSION_STATE";
            break;
          case 1366:
LABEL_3184:
            result = L"ERROR_LOGON_SESSION_COLLISION";
            break;
          case 1367:
LABEL_3185:
            result = L"ERROR_INVALID_LOGON_TYPE";
            break;
          case 1368:
LABEL_3186:
            result = L"ERROR_CANNOT_IMPERSONATE";
            break;
          case 1369:
LABEL_3187:
            result = L"ERROR_RXACT_INVALID_STATE";
            break;
          case 1370:
LABEL_3188:
            result = L"ERROR_RXACT_COMMIT_FAILURE";
            break;
          case 1371:
LABEL_3189:
            result = L"ERROR_SPECIAL_ACCOUNT";
            break;
          case 1372:
LABEL_3190:
            result = L"ERROR_SPECIAL_GROUP";
            break;
          case 1373:
LABEL_3191:
            result = L"ERROR_SPECIAL_USER";
            break;
          case 1374:
LABEL_3192:
            result = L"ERROR_MEMBERS_PRIMARY_GROUP";
            break;
          case 1375:
LABEL_3193:
            result = L"ERROR_TOKEN_ALREADY_IN_USE";
            break;
          case 1376:
LABEL_3194:
            result = L"ERROR_NO_SUCH_ALIAS";
            break;
          case 1377:
LABEL_3195:
            result = L"ERROR_MEMBER_NOT_IN_ALIAS";
            break;
          case 1378:
LABEL_3196:
            result = L"ERROR_MEMBER_IN_ALIAS";
            break;
          case 1379:
LABEL_3197:
            result = L"ERROR_ALIAS_EXISTS";
            break;
          case 1380:
LABEL_3198:
            result = L"ERROR_LOGON_NOT_GRANTED";
            break;
          case 1381:
LABEL_3199:
            result = L"ERROR_TOO_MANY_SECRETS";
            break;
          case 1382:
LABEL_3200:
            result = L"ERROR_SECRET_TOO_LONG";
            break;
          case 1383:
LABEL_3201:
            result = L"ERROR_INTERNAL_DB_ERROR";
            break;
          case 1384:
LABEL_3202:
            result = L"ERROR_TOO_MANY_CONTEXT_IDS";
            break;
          case 1385:
LABEL_3203:
            result = L"ERROR_LOGON_TYPE_NOT_GRANTED";
            break;
          case 1386:
LABEL_3204:
            result = L"ERROR_NT_CROSS_ENCRYPTION_REQUIRED";
            break;
          case 1387:
LABEL_3205:
            result = L"ERROR_NO_SUCH_MEMBER";
            break;
          case 1388:
LABEL_3206:
            result = L"ERROR_INVALID_MEMBER";
            break;
          case 1389:
LABEL_3207:
            result = L"ERROR_TOO_MANY_SIDS";
            break;
          case 1390:
LABEL_3208:
            result = L"ERROR_LM_CROSS_ENCRYPTION_REQUIRED";
            break;
          case 1391:
LABEL_3209:
            result = L"ERROR_NO_INHERITANCE";
            break;
          case 1392:
LABEL_3210:
            result = L"ERROR_FILE_CORRUPT";
            break;
          case 1393:
LABEL_3211:
            result = L"ERROR_DISK_CORRUPT";
            break;
          case 1394:
LABEL_3212:
            result = L"ERROR_NO_USER_SESSION_KEY";
            break;
          case 1395:
LABEL_3213:
            result = L"ERROR_LICENSE_QUOTA_EXCEEDED";
            break;
          case 1396:
LABEL_3214:
            result = L"ERROR_WRONG_TARGET_NAME";
            break;
          case 1397:
LABEL_3215:
            result = L"ERROR_MUTUAL_AUTH_FAILED";
            break;
          case 1398:
LABEL_3216:
            result = L"ERROR_TIME_SKEW";
            break;
          case 1399:
LABEL_3297:
            result = L"ERROR_CURRENT_DOMAIN_NOT_ALLOWED";
            break;
          case 1400:
LABEL_3217:
            result = L"ERROR_INVALID_WINDOW_HANDLE";
            break;
          case 1401:
LABEL_3218:
            result = L"ERROR_INVALID_MENU_HANDLE";
            break;
          case 1402:
LABEL_3219:
            result = L"ERROR_INVALID_CURSOR_HANDLE";
            break;
          case 1403:
LABEL_3220:
            result = L"ERROR_INVALID_ACCEL_HANDLE";
            break;
          case 1404:
LABEL_3221:
            result = L"ERROR_INVALID_HOOK_HANDLE";
            break;
          case 1405:
LABEL_3222:
            result = L"ERROR_INVALID_DWP_HANDLE";
            break;
          case 1406:
LABEL_3223:
            result = L"ERROR_TLW_WITH_WSCHILD";
            break;
          case 1407:
LABEL_3224:
            result = L"ERROR_CANNOT_FIND_WND_CLASS";
            break;
          case 1408:
LABEL_3225:
            result = L"ERROR_WINDOW_OF_OTHER_THREAD";
            break;
          case 1409:
LABEL_3226:
            result = L"ERROR_HOTKEY_ALREADY_REGISTERED";
            break;
          case 1410:
LABEL_3227:
            result = L"ERROR_CLASS_ALREADY_EXISTS";
            break;
          case 1411:
LABEL_3228:
            result = L"ERROR_CLASS_DOES_NOT_EXIST";
            break;
          case 1412:
LABEL_3229:
            result = L"ERROR_CLASS_HAS_WINDOWS";
            break;
          case 1413:
LABEL_3230:
            result = L"ERROR_INVALID_INDEX";
            break;
          case 1414:
LABEL_3231:
            result = L"ERROR_INVALID_ICON_HANDLE";
            break;
          case 1415:
LABEL_3232:
            result = L"ERROR_PRIVATE_DIALOG_INDEX";
            break;
          case 1416:
LABEL_3233:
            result = L"ERROR_LISTBOX_ID_NOT_FOUND";
            break;
          case 1417:
LABEL_3234:
            result = L"ERROR_NO_WILDCARD_CHARACTERS";
            break;
          case 1418:
LABEL_3235:
            result = L"ERROR_CLIPBOARD_NOT_OPEN";
            break;
          case 1419:
LABEL_3236:
            result = L"ERROR_HOTKEY_NOT_REGISTERED";
            break;
          case 1420:
LABEL_3237:
            result = L"ERROR_WINDOW_NOT_DIALOG";
            break;
          case 1421:
LABEL_3238:
            result = L"ERROR_CONTROL_ID_NOT_FOUND";
            break;
          case 1422:
LABEL_3239:
            result = L"ERROR_INVALID_COMBOBOX_MESSAGE";
            break;
          case 1423:
LABEL_3240:
            result = L"ERROR_WINDOW_NOT_COMBOBOX";
            break;
          case 1424:
LABEL_3241:
            result = L"ERROR_INVALID_EDIT_HEIGHT";
            break;
          case 1425:
LABEL_3242:
            result = L"ERROR_DC_NOT_FOUND";
            break;
          case 1426:
LABEL_3243:
            result = L"ERROR_INVALID_HOOK_FILTER";
            break;
          case 1427:
LABEL_3244:
            result = L"ERROR_INVALID_FILTER_PROC";
            break;
          case 1428:
LABEL_3245:
            result = L"ERROR_HOOK_NEEDS_HMOD";
            break;
          case 1429:
LABEL_3246:
            result = L"ERROR_GLOBAL_ONLY_HOOK";
            break;
          case 1430:
LABEL_3247:
            result = L"ERROR_JOURNAL_HOOK_SET";
            break;
          case 1431:
LABEL_3248:
            result = L"ERROR_HOOK_NOT_INSTALLED";
            break;
          case 1432:
LABEL_3249:
            result = L"ERROR_INVALID_LB_MESSAGE";
            break;
          case 1433:
LABEL_3250:
            result = L"ERROR_SETCOUNT_ON_BAD_LB";
            break;
          case 1434:
LABEL_3251:
            result = L"ERROR_LB_WITHOUT_TABSTOPS";
            break;
          case 1435:
LABEL_3252:
            result = L"ERROR_DESTROY_OBJECT_OF_OTHER_THREAD";
            break;
          case 1436:
LABEL_3253:
            result = L"ERROR_CHILD_WINDOW_MENU";
            break;
          case 1437:
LABEL_3254:
            result = L"ERROR_NO_SYSTEM_MENU";
            break;
          case 1438:
LABEL_3255:
            result = L"ERROR_INVALID_MSGBOX_STYLE";
            break;
          case 1439:
LABEL_3256:
            result = L"ERROR_INVALID_SPI_VALUE";
            break;
          case 1440:
LABEL_3257:
            result = L"ERROR_SCREEN_ALREADY_LOCKED";
            break;
          case 1441:
LABEL_3258:
            result = L"ERROR_HWNDS_HAVE_DIFF_PARENT";
            break;
          case 1442:
LABEL_3259:
            result = L"ERROR_NOT_CHILD_WINDOW";
            break;
          case 1443:
LABEL_3260:
            result = L"ERROR_INVALID_GW_COMMAND";
            break;
          case 1444:
LABEL_3261:
            result = L"ERROR_INVALID_THREAD_ID";
            break;
          case 1445:
LABEL_3262:
            result = L"ERROR_NON_MDICHILD_WINDOW";
            break;
          case 1446:
LABEL_3263:
            result = L"ERROR_POPUP_ALREADY_ACTIVE";
            break;
          case 1447:
LABEL_3264:
            result = L"ERROR_NO_SCROLLBARS";
            break;
          case 1448:
LABEL_3265:
            result = L"ERROR_INVALID_SCROLLBAR_RANGE";
            break;
          case 1449:
LABEL_3266:
            result = L"ERROR_INVALID_SHOWWIN_COMMAND";
            break;
          case 1450:
LABEL_3267:
            result = L"ERROR_NO_SYSTEM_RESOURCES";
            break;
          case 1451:
LABEL_3268:
            result = L"ERROR_NONPAGED_SYSTEM_RESOURCES";
            break;
          case 1452:
LABEL_3269:
            result = L"ERROR_PAGED_SYSTEM_RESOURCES";
            break;
          case 1453:
LABEL_3270:
            result = L"ERROR_WORKING_SET_QUOTA";
            break;
          case 1454:
LABEL_3271:
            result = L"ERROR_PAGEFILE_QUOTA";
            break;
          case 1455:
LABEL_3272:
            result = L"ERROR_COMMITMENT_LIMIT";
            break;
          case 1456:
LABEL_3273:
            result = L"ERROR_MENU_ITEM_NOT_FOUND";
            break;
          case 1457:
LABEL_3274:
            result = L"ERROR_INVALID_KEYBOARD_HANDLE";
            break;
          case 1458:
LABEL_3275:
            result = L"ERROR_HOOK_TYPE_NOT_ALLOWED";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 == 1062 )
        return L"ERROR_SERVICE_NOT_ACTIVE";
      if ( a1 <= 106 )
      {
        if ( a1 == 106 )
          return L"ERROR_SEM_USER_LIMIT";
        if ( a1 <= -931722280 )
        {
          if ( a1 == -931722280 )
            return L"D3DXERR_ENUMFORMATSFAILED";
          if ( a1 > -2005396950 )
          {
            if ( a1 > -931722300 )
            {
              switch ( a1 )
              {
                case -931722299:
                  result = L"D3DXERR_INITFAILED";
                  break;
                case -931722298:
                  result = L"D3DXERR_STARTUPFAILED";
                  break;
                case -931722297:
                  result = L"D3DXERR_D3DXNOTSTARTEDYET";
                  break;
                case -931722296:
                  result = L"D3DXERR_NOTINITIALIZED";
                  break;
                case -931722295:
                  result = L"D3DXERR_FAILEDDRAWTEXT";
                  break;
                case -931722294:
                  result = L"D3DXERR_BADD3DXCONTEXT";
                  break;
                case -931722293:
                  result = L"D3DXERR_CAPSNOTSUPPORTED";
                  break;
                case -931722292:
                  result = L"D3DXERR_UNSUPPORTEDFILEFORMAT";
                  break;
                case -931722291:
                  result = L"D3DXERR_IFLERROR";
                  break;
                case -931722290:
                  result = L"D3DXERR_FAILEDGETCAPS";
                  break;
                case -931722289:
                  result = L"D3DXERR_CANNOTRESIZEFULLSCREEN";
                  break;
                case -931722288:
                  result = L"D3DXERR_CANNOTRESIZENONWINDOWED";
                  break;
                case -931722287:
                  result = L"D3DXERR_FRONTBUFFERALREADYEXISTS";
                  break;
                case -931722286:
                  result = L"D3DXERR_FULLSCREENPRIMARYEXISTS";
                  break;
                case -931722285:
                  result = L"D3DXERR_GETDCFAILED";
                  break;
                case -931722284:
                  result = L"D3DXERR_BITBLTFAILED";
                  break;
                case -931722283:
                  result = L"D3DXERR_NOTEXTURE";
                  break;
                case -931722282:
                  result = L"D3DXERR_MIPLEVELABSENT";
                  break;
                case -931722281:
                  result = L"D3DXERR_SURFACENOTPALETTED";
                  break;
                default:
                  return L"Unknown";
              }
            }
            else
            {
              if ( a1 == -931722300 )
                return L"D3DXERR_INVALIDPARAMETER";
              if ( a1 > -931722310 )
              {
                switch ( a1 )
                {
                  case -931722309:
                    result = L"D3DXERR_NODIRECTDRAWAVAILABLE";
                    break;
                  case -931722308:
                    result = L"D3DXERR_NODIRECT3DAVAILABLE";
                    break;
                  case -931722307:
                    result = L"D3DXERR_NODIRECT3DDEVICEAVAILABLE";
                    break;
                  case -931722306:
                    result = L"D3DXERR_NOPRIMARYAVAILABLE";
                    break;
                  case -931722305:
                    result = L"D3DXERR_NOZBUFFERAVAILABLE";
                    break;
                  case -931722304:
                    result = L"D3DXERR_NOBACKBUFFERAVAILABLE";
                    break;
                  case -931722303:
                    result = L"D3DXERR_COULDNTUPDATECAPS";
                    break;
                  case -931722302:
                    result = L"D3DXERR_NOZBUFFER";
                    break;
                  case -931722301:
                    result = L"D3DXERR_INVALIDMODE";
                    break;
                  default:
                    return L"Unknown";
                }
              }
              else
              {
                if ( a1 == -931722310 )
                  return L"D3DXERR_INVALIDD3DXDEVICEINDEX";
                if ( a1 > -2005396945 )
                {
                  switch ( a1 )
                  {
                    case -1073151999:
                      return L"ERROR_AUDITING_DISABLED";
                    case -1073151998:
                      return L"ERROR_ALL_SIDS_FILTERED";
                    case -931722312:
                      return L"D3DXERR_NOMEMORY";
                    case -931722311:
                      return L"D3DXERR_NULLPOINTER";
                  }
                  return L"Unknown";
                }
                switch ( a1 )
                {
                  case -2005396945:
                    return L"DMUS_E_INVALID_CONTAINER_OBJECT";
                  case -2005396949:
                    return L"DMUS_E_AUDIOPATH_NOPORT";
                  case -2005396948:
                    return L"DMUS_E_NO_AUDIOPATH";
                  case -2005396947:
                    return L"DMUS_E_INVALIDCHUNK";
                  default:
                    return L"DMUS_E_AUDIOPATH_NOGLOBALFXBUFFER";
                }
              }
            }
          }
          else if ( a1 == -2005396950 )
          {
            return L"DMUS_E_AUDIOPATH_NOBUFFER";
          }
          else
          {
            switch ( a1 )
            {
              case -2005397120:
                result = L"DMUS_E_LOADER_NOCLASSID";
                break;
              case -2005397119:
                result = L"DMUS_E_LOADER_BADPATH";
                break;
              case -2005397118:
                result = L"DMUS_E_LOADER_FAILEDOPEN";
                break;
              case -2005397117:
                result = L"DMUS_E_LOADER_FORMATNOTSUPPORTED";
                break;
              case -2005397116:
                result = L"DMUS_E_LOADER_FAILEDCREATE";
                break;
              case -2005397115:
                result = L"DMUS_E_LOADER_OBJECTNOTFOUND";
                break;
              case -2005397114:
                result = L"DMUS_E_LOADER_NOFILENAME";
                break;
              case -2005396992:
                result = L"DMUS_E_INVALIDFILE";
                break;
              case -2005396991:
                result = L"DMUS_E_ALREADY_EXISTS";
                break;
              case -2005396990:
                result = L"DMUS_E_OUT_OF_RANGE";
                break;
              case -2005396989:
                result = L"DMUS_E_SEGMENT_INIT_FAILED";
                break;
              case -2005396988:
                result = L"DMUS_E_ALREADY_SENT";
                break;
              case -2005396987:
                result = L"DMUS_E_CANNOT_FREE";
                break;
              case -2005396986:
                result = L"DMUS_E_CANNOT_OPEN_PORT";
                break;
              case -2005396985:
                result = L"DMUS_E_CANNOT_CONVERT";
                break;
              case -2005396976:
                result = L"DMUS_E_DESCEND_CHUNK_FAIL";
                break;
              case -2005396975:
                result = L"DMUS_E_NOT_LOADED";
                break;
              case -2005396973:
                result = L"DMUS_E_SCRIPT_LANGUAGE_INCOMPATIBLE";
                break;
              case -2005396972:
                result = L"DMUS_E_SCRIPT_UNSUPPORTED_VARTYPE";
                break;
              case -2005396971:
                result = L"DMUS_E_SCRIPT_ERROR_IN_SCRIPT";
                break;
              case -2005396970:
                result = L"DMUS_E_SCRIPT_CANTLOAD_OLEAUT32";
                break;
              case -2005396969:
                result = L"DMUS_E_SCRIPT_LOADSCRIPT_ERROR";
                break;
              case -2005396968:
                result = L"DMUS_E_SCRIPT_INVALID_FILE";
                break;
              case -2005396967:
                result = L"DMUS_E_INVALID_SCRIPTTRACK";
                break;
              case -2005396966:
                result = L"DMUS_E_SCRIPT_VARIABLE_NOT_FOUND";
                break;
              case -2005396965:
                result = L"DMUS_E_SCRIPT_ROUTINE_NOT_FOUND";
                break;
              case -2005396964:
                result = L"DMUS_E_SCRIPT_CONTENT_READONLY";
                break;
              case -2005396963:
                result = L"DMUS_E_SCRIPT_NOT_A_REFERENCE";
                break;
              case -2005396962:
                result = L"DMUS_E_SCRIPT_VALUE_NOT_SUPPORTED";
                break;
              case -2005396960:
                result = L"DMUS_E_INVALID_SEGMENTTRIGGERTRACK";
                break;
              case -2005396959:
                result = L"DMUS_E_INVALID_LYRICSTRACK";
                break;
              case -2005396958:
                result = L"DMUS_E_INVALID_PARAMCONTROLTRACK";
                break;
              case -2005396957:
                result = L"DMUS_E_AUDIOVBSCRIPT_SYNTAXERROR";
                break;
              case -2005396956:
                result = L"DMUS_E_AUDIOVBSCRIPT_RUNTIMEERROR";
                break;
              case -2005396955:
                result = L"DMUS_E_AUDIOVBSCRIPT_OPERATIONFAILURE";
                break;
              case -2005396954:
                result = L"DMUS_E_AUDIOPATHS_NOT_VALID";
                break;
              case -2005396953:
                result = L"DMUS_E_AUDIOPATHS_IN_USE";
                break;
              case -2005396952:
                result = L"DMUS_E_NO_AUDIOPATH_CONFIG";
                break;
              case -2005396951:
                result = L"DMUS_E_AUDIOPATH_INACTIVE";
                break;
              default:
                return L"Unknown";
            }
          }
          return result;
        }
        if ( a1 > 38 )
        {
          if ( a1 > 68 )
          {
            if ( a1 <= 86 )
            {
              if ( a1 == 86 )
                return L"ERROR_INVALID_PASSWORD";
              if ( a1 > 80 )
              {
                switch ( a1 )
                {
                  case 'R':
                    return L"ERROR_CANNOT_MAKE";
                  case 'S':
                    return L"ERROR_FAIL_I24";
                  case 'T':
                    return L"ERROR_OUT_OF_STRUCTURES";
                  case 'U':
                    return L"ERROR_ALREADY_ASSIGNED";
                }
              }
              else
              {
                switch ( a1 )
                {
                  case 'P':
                    return L"ERROR_FILE_EXISTS";
                  case 'E':
                    return L"ERROR_TOO_MANY_SESS";
                  case 'F':
                    return L"ERROR_SHARING_PAUSED";
                  case 'G':
                    return L"ERROR_REQ_NOT_ACCEP";
                  case 'H':
                    return L"ERROR_REDIR_PAUSED";
                }
              }
              return L"Unknown";
            }
            if ( a1 <= 101 )
            {
              switch ( a1 )
              {
                case 'e':
                  return L"ERROR_EXCL_SEM_ALREADY_OWNED";
                case 'W':
                  return L"ERROR_INVALID_PARAMETER";
                case 'X':
                  return L"ERROR_NET_WRITE_FAULT";
                case 'Y':
                  return L"ERROR_NO_PROC_SLOTS";
                case 'd':
                  return L"ERROR_TOO_MANY_SEMAPHORES";
              }
              return L"Unknown";
            }
            switch ( a1 )
            {
              case 'f':
                return L"ERROR_SEM_IS_SET";
              case 'g':
                return L"ERROR_TOO_MANY_SEM_REQUESTS";
              case 'h':
                return L"ERROR_INVALID_AT_INTERRUPT_TIME";
              default:
                return L"ERROR_SEM_OWNER_DIED";
            }
          }
          else
          {
            if ( a1 == 68 )
              return L"ERROR_TOO_MANY_NAMES";
            if ( a1 > 58 )
            {
              switch ( a1 )
              {
                case ';':
LABEL_2749:
                  result = L"ERROR_UNEXP_NET_ERR";
                  break;
                case '<':
LABEL_2750:
                  result = L"ERROR_BAD_REM_ADAP";
                  break;
                case '=':
LABEL_2751:
                  result = L"ERROR_PRINTQ_FULL";
                  break;
                case '>':
LABEL_2752:
                  result = L"ERROR_NO_SPOOL_SPACE";
                  break;
                case '?':
LABEL_2753:
                  result = L"ERROR_PRINT_CANCELLED";
                  break;
                case '@':
LABEL_2754:
                  result = L"ERROR_NETNAME_DELETED";
                  break;
                case 'A':
                  return L"ERROR_NETWORK_ACCESS_DENIED";
                case 'B':
LABEL_2756:
                  result = L"ERROR_BAD_DEV_TYPE";
                  break;
                case 'C':
LABEL_2757:
                  result = L"ERROR_BAD_NET_NAME";
                  break;
                default:
                  return L"Unknown";
              }
            }
            else
            {
              if ( a1 == 58 )
                return L"ERROR_BAD_NET_RESP";
              if ( a1 <= 53 )
              {
                switch ( a1 )
                {
                  case '5':
                    return L"ERROR_BAD_NETPATH";
                  case '\'':
                    return L"ERROR_HANDLE_DISK_FULL";
                  case '2':
                    return L"ERROR_NOT_SUPPORTED";
                  case '3':
                    return L"ERROR_REM_NOT_LIST";
                  case '4':
                    return L"ERROR_DUP_NAME";
                }
                return L"Unknown";
              }
              switch ( a1 )
              {
                case '6':
                  return L"ERROR_NETWORK_BUSY";
                case '7':
                  return L"ERROR_DEV_NOT_EXIST";
                case '8':
                  return L"ERROR_TOO_MANY_CMDS";
                default:
                  return L"ERROR_ADAP_HDW_ERR";
              }
            }
          }
          return result;
        }
        if ( a1 == 38 )
          return L"ERROR_HANDLE_EOF";
        if ( a1 > 16 )
        {
          switch ( a1 )
          {
            case 17:
LABEL_2705:
              result = L"ERROR_NOT_SAME_DEVICE";
              break;
            case 18:
LABEL_2706:
              result = L"ERROR_NO_MORE_FILES";
              break;
            case 19:
LABEL_2707:
              result = L"ERROR_WRITE_PROTECT";
              break;
            case 20:
LABEL_2708:
              result = L"ERROR_BAD_UNIT";
              break;
            case 21:
LABEL_2709:
              result = L"ERROR_NOT_READY & DIERR_NOTINITIALIZED";
              break;
            case 22:
LABEL_2710:
              result = L"ERROR_BAD_COMMAND";
              break;
            case 23:
LABEL_2711:
              result = L"ERROR_CRC";
              break;
            case 24:
LABEL_2712:
              result = L"ERROR_BAD_LENGTH";
              break;
            case 25:
LABEL_2713:
              result = L"ERROR_SEEK";
              break;
            case 26:
LABEL_2714:
              result = L"ERROR_NOT_DOS_DISK";
              break;
            case 27:
LABEL_2715:
              result = L"ERROR_SECTOR_NOT_FOUND";
              break;
            case 28:
LABEL_2716:
              result = L"ERROR_OUT_OF_PAPER";
              break;
            case 29:
LABEL_2717:
              result = L"ERROR_WRITE_FAULT";
              break;
            case 30:
LABEL_2718:
              result = L"ERROR_READ_FAULT & DIERR_INPUTLOST";
              break;
            case 31:
LABEL_2719:
              result = L"ERROR_GEN_FAILURE";
              break;
            case 32:
LABEL_2720:
              result = L"ERROR_SHARING_VIOLATION";
              break;
            case 33:
LABEL_2721:
              result = L"ERROR_LOCK_VIOLATION";
              break;
            case 34:
LABEL_2722:
              result = L"ERROR_WRONG_DISK";
              break;
            case 36:
LABEL_2723:
              result = L"ERROR_SHARING_BUFFER_EXCEEDED";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        if ( a1 == 16 )
          return L"ERROR_CURRENT_DIRECTORY";
        if ( a1 > 6 )
        {
          switch ( a1 )
          {
            case 7:
LABEL_2694:
              result = L"ERROR_ARENA_TRASHED";
              break;
            case 8:
LABEL_2695:
              result = L"ERROR_NOT_ENOUGH_MEMORY";
              break;
            case 9:
LABEL_2696:
              result = L"ERROR_INVALID_BLOCK";
              break;
            case 10:
LABEL_2697:
              result = L"ERROR_BAD_ENVIRONMENT";
              break;
            case 11:
LABEL_2698:
              result = L"ERROR_BAD_FORMAT";
              break;
            case 12:
LABEL_2699:
              result = L"ERROR_INVALID_ACCESS & DIERR_NOTACQUIRED";
              break;
            case 13:
              return L"ERROR_INVALID_DATA";
            case 14:
              result = L"ERROR_OUTOFMEMORY";
              break;
            case 15:
LABEL_2702:
              result = L"ERROR_INVALID_DRIVE";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        if ( a1 == 6 )
          return L"ERROR_INVALID_HANDLE";
        if ( a1 <= 1 )
        {
          switch ( a1 )
          {
            case 1:
              return L"S_FALSE";
            case -931722279:
              return L"D3DXERR_COLORDEPTHTOOLOW";
            case -931722278:
              return L"D3DXERR_INVALIDFILEFORMAT";
            case -931722277:
              return L"D3DXERR_NOMATCHFOUND";
            case 0:
              return L"S_OK";
          }
          return L"Unknown";
        }
        if ( a1 == 2 )
          return L"ERROR_FILE_NOT_FOUND";
        if ( a1 != 3 )
        {
          if ( a1 == 4 )
            return L"ERROR_TOO_MANY_OPEN_FILES";
          else
            return L"ERROR_ACCESS_DENIED";
        }
        return L"ERROR_PATH_NOT_FOUND";
      }
      if ( a1 <= 240 )
      {
        if ( a1 == 240 )
          return L"ERROR_VC_DISCONNECTED";
        switch ( a1 )
        {
          case 107:
LABEL_2803:
            result = L"ERROR_DISK_CHANGE";
            break;
          case 108:
LABEL_2804:
            result = L"ERROR_DRIVE_LOCKED";
            break;
          case 109:
LABEL_2805:
            result = L"ERROR_BROKEN_PIPE";
            break;
          case 110:
LABEL_2806:
            result = L"ERROR_OPEN_FAILED";
            break;
          case 111:
LABEL_2807:
            result = L"ERROR_BUFFER_OVERFLOW";
            break;
          case 112:
LABEL_2808:
            result = L"ERROR_DISK_FULL";
            break;
          case 113:
LABEL_2809:
            result = L"ERROR_NO_MORE_SEARCH_HANDLES";
            break;
          case 114:
LABEL_2810:
            result = L"ERROR_INVALID_TARGET_HANDLE";
            break;
          case 117:
LABEL_2811:
            result = L"ERROR_INVALID_CATEGORY";
            break;
          case 118:
LABEL_2812:
            result = L"ERROR_INVALID_VERIFY_SWITCH";
            break;
          case 119:
LABEL_2813:
            result = L"ERROR_BAD_DRIVER_LEVEL & DIERR_BADDRIVERVER";
            break;
          case 120:
LABEL_2814:
            result = L"ERROR_CALL_NOT_IMPLEMENTED";
            break;
          case 121:
LABEL_2815:
            result = L"ERROR_SEM_TIMEOUT";
            break;
          case 122:
LABEL_2816:
            result = L"ERROR_INSUFFICIENT_BUFFER";
            break;
          case 123:
LABEL_2817:
            result = L"ERROR_INVALID_NAME";
            break;
          case 124:
LABEL_2818:
            result = L"ERROR_INVALID_LEVEL";
            break;
          case 125:
LABEL_2819:
            result = L"ERROR_NO_VOLUME_LABEL";
            break;
          case 126:
LABEL_2820:
            result = L"ERROR_MOD_NOT_FOUND";
            break;
          case 127:
LABEL_2821:
            result = L"ERROR_PROC_NOT_FOUND";
            break;
          case 128:
LABEL_2822:
            result = L"ERROR_WAIT_NO_CHILDREN";
            break;
          case 129:
LABEL_2823:
            result = L"ERROR_CHILD_NOT_COMPLETE";
            break;
          case 130:
LABEL_2824:
            result = L"ERROR_DIRECT_ACCESS_HANDLE";
            break;
          case 131:
LABEL_2825:
            result = L"ERROR_NEGATIVE_SEEK";
            break;
          case 132:
LABEL_2826:
            result = L"ERROR_SEEK_ON_DEVICE";
            break;
          case 133:
LABEL_2827:
            result = L"ERROR_IS_JOIN_TARGET";
            break;
          case 134:
LABEL_2828:
            result = L"ERROR_IS_JOINED";
            break;
          case 135:
LABEL_2829:
            result = L"ERROR_IS_SUBSTED";
            break;
          case 136:
LABEL_2830:
            result = L"ERROR_NOT_JOINED";
            break;
          case 137:
LABEL_2831:
            result = L"ERROR_NOT_SUBSTED";
            break;
          case 138:
LABEL_2832:
            result = L"ERROR_JOIN_TO_JOIN";
            break;
          case 139:
LABEL_2833:
            result = L"ERROR_SUBST_TO_SUBST";
            break;
          case 140:
LABEL_2834:
            result = L"ERROR_JOIN_TO_SUBST";
            break;
          case 141:
LABEL_2835:
            result = L"ERROR_SUBST_TO_JOIN";
            break;
          case 142:
LABEL_2836:
            result = L"ERROR_BUSY_DRIVE";
            break;
          case 143:
LABEL_2837:
            result = L"ERROR_SAME_DRIVE";
            break;
          case 144:
LABEL_2838:
            result = L"ERROR_DIR_NOT_ROOT";
            break;
          case 145:
LABEL_2839:
            result = L"ERROR_DIR_NOT_EMPTY";
            break;
          case 146:
LABEL_2840:
            result = L"ERROR_IS_SUBST_PATH";
            break;
          case 147:
LABEL_2841:
            result = L"ERROR_IS_JOIN_PATH";
            break;
          case 148:
LABEL_2842:
            result = L"ERROR_PATH_BUSY";
            break;
          case 149:
LABEL_2843:
            result = L"ERROR_IS_SUBST_TARGET";
            break;
          case 150:
LABEL_2844:
            result = L"ERROR_SYSTEM_TRACE";
            break;
          case 151:
LABEL_2845:
            result = L"ERROR_INVALID_EVENT_COUNT";
            break;
          case 152:
LABEL_2846:
            result = L"ERROR_TOO_MANY_MUXWAITERS";
            break;
          case 153:
LABEL_2847:
            result = L"ERROR_INVALID_LIST_FORMAT";
            break;
          case 154:
LABEL_2848:
            result = L"ERROR_LABEL_TOO_LONG";
            break;
          case 155:
LABEL_2849:
            result = L"ERROR_TOO_MANY_TCBS";
            break;
          case 156:
LABEL_2850:
            result = L"ERROR_SIGNAL_REFUSED";
            break;
          case 157:
LABEL_2851:
            result = L"ERROR_DISCARDED";
            break;
          case 158:
LABEL_2852:
            result = L"ERROR_NOT_LOCKED";
            break;
          case 159:
LABEL_2853:
            result = L"ERROR_BAD_THREADID_ADDR";
            break;
          case 160:
LABEL_2854:
            result = L"ERROR_BAD_ARGUMENTS";
            break;
          case 161:
LABEL_2855:
            result = L"ERROR_BAD_PATHNAME";
            break;
          case 162:
LABEL_2856:
            result = L"ERROR_SIGNAL_PENDING";
            break;
          case 164:
LABEL_2857:
            result = L"ERROR_MAX_THRDS_REACHED";
            break;
          case 167:
LABEL_2858:
            result = L"ERROR_LOCK_FAILED";
            break;
          case 170:
LABEL_2859:
            result = L"ERROR_BUSY & DIERR_ACQUIRED";
            break;
          case 173:
            return L"ERROR_CANCEL_VIOLATION";
          case 174:
LABEL_2861:
            result = L"ERROR_ATOMIC_LOCKS_NOT_SUPPORTED";
            break;
          case 180:
LABEL_2862:
            result = L"ERROR_INVALID_SEGMENT_NUMBER";
            break;
          case 182:
LABEL_2863:
            result = L"ERROR_INVALID_ORDINAL";
            break;
          case 183:
LABEL_2864:
            result = L"ERROR_ALREADY_EXISTS";
            break;
          case 186:
LABEL_2865:
            result = L"ERROR_INVALID_FLAG_NUMBER";
            break;
          case 187:
LABEL_2866:
            result = L"ERROR_SEM_NOT_FOUND";
            break;
          case 188:
LABEL_2867:
            result = L"ERROR_INVALID_STARTING_CODESEG";
            break;
          case 189:
LABEL_2868:
            result = L"ERROR_INVALID_STACKSEG";
            break;
          case 190:
LABEL_2869:
            result = L"ERROR_INVALID_MODULETYPE";
            break;
          case 191:
LABEL_2870:
            result = L"ERROR_INVALID_EXE_SIGNATURE";
            break;
          case 192:
LABEL_2871:
            result = L"ERROR_EXE_MARKED_INVALID";
            break;
          case 193:
LABEL_2872:
            result = L"ERROR_BAD_EXE_FORMAT";
            break;
          case 194:
LABEL_2873:
            result = L"ERROR_ITERATED_DATA_EXCEEDS_64k";
            break;
          case 195:
LABEL_2874:
            result = L"ERROR_INVALID_MINALLOCSIZE";
            break;
          case 196:
LABEL_2875:
            result = L"ERROR_DYNLINK_FROM_INVALID_RING";
            break;
          case 197:
LABEL_2876:
            result = L"ERROR_IOPL_NOT_ENABLED";
            break;
          case 198:
LABEL_2877:
            result = L"ERROR_INVALID_SEGDPL";
            break;
          case 199:
LABEL_2878:
            result = L"ERROR_AUTODATASEG_EXCEEDS_64k";
            break;
          case 200:
            result = L"ERROR_RING2SEG_MUST_BE_MOVABLE";
            break;
          case 201:
            result = L"ERROR_RELOC_CHAIN_XEEDS_SEGLIM";
            break;
          case 202:
LABEL_2881:
            result = L"ERROR_INFLOOP_IN_RELOC_CHAIN";
            break;
          case 203:
LABEL_2882:
            result = L"ERROR_ENVVAR_NOT_FOUND";
            break;
          case 205:
LABEL_2883:
            result = L"ERROR_NO_SIGNAL_SENT";
            break;
          case 206:
LABEL_2884:
            result = L"ERROR_FILENAME_EXCED_RANGE";
            break;
          case 207:
LABEL_2885:
            result = L"ERROR_RING2_STACK_IN_USE";
            break;
          case 208:
LABEL_2886:
            result = L"ERROR_META_EXPANSION_TOO_LONG";
            break;
          case 209:
LABEL_2887:
            result = L"ERROR_INVALID_SIGNAL_NUMBER";
            break;
          case 210:
LABEL_2888:
            result = L"ERROR_THREAD_1_INACTIVE";
            break;
          case 212:
LABEL_2889:
            result = L"ERROR_LOCKED";
            break;
          case 214:
LABEL_2890:
            result = L"ERROR_TOO_MANY_MODULES";
            break;
          case 215:
LABEL_2891:
            result = L"ERROR_NESTING_NOT_ALLOWED";
            break;
          case 216:
LABEL_2892:
            result = L"ERROR_EXE_MACHINE_TYPE_MISMATCH";
            break;
          case 230:
LABEL_2893:
            result = L"ERROR_BAD_PIPE";
            break;
          case 231:
LABEL_2894:
            result = L"ERROR_PIPE_BUSY";
            break;
          case 232:
LABEL_2895:
            result = L"ERROR_NO_DATA";
            break;
          case 233:
LABEL_2896:
            result = L"ERROR_PIPE_NOT_CONNECTED";
            break;
          case 234:
LABEL_2897:
            result = L"ERROR_MORE_DATA";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 > 1003 )
      {
        switch ( a1 )
        {
          case 1004:
LABEL_2949:
            result = L"ERROR_INVALID_FLAGS";
            break;
          case 1005:
LABEL_2950:
            result = L"ERROR_UNRECOGNIZED_VOLUME";
            break;
          case 1006:
LABEL_2951:
            result = L"ERROR_FILE_INVALID";
            break;
          case 1007:
LABEL_2952:
            result = L"ERROR_FULLSCREEN_MODE";
            break;
          case 1008:
LABEL_2953:
            result = L"ERROR_NO_TOKEN";
            break;
          case 1009:
LABEL_2954:
            result = L"ERROR_BADDB";
            break;
          case 1010:
LABEL_2955:
            result = L"ERROR_BADKEY";
            break;
          case 1011:
LABEL_2956:
            result = L"ERROR_CANTOPEN";
            break;
          case 1012:
LABEL_2957:
            result = L"ERROR_CANTREAD";
            break;
          case 1013:
LABEL_2958:
            result = L"ERROR_CANTWRITE";
            break;
          case 1014:
LABEL_2959:
            result = L"ERROR_REGISTRY_RECOVERED";
            break;
          case 1015:
LABEL_2960:
            result = L"ERROR_REGISTRY_CORRUPT";
            break;
          case 1016:
            return L"ERROR_REGISTRY_IO_FAILED";
          case 1017:
LABEL_2962:
            result = L"ERROR_NOT_REGISTRY_FILE";
            break;
          case 1018:
LABEL_2963:
            result = L"ERROR_KEY_DELETED";
            break;
          case 1019:
LABEL_2964:
            result = L"ERROR_NO_LOG_SPACE";
            break;
          case 1020:
LABEL_2965:
            result = L"ERROR_KEY_HAS_CHILDREN";
            break;
          case 1021:
LABEL_2966:
            result = L"ERROR_CHILD_MUST_BE_VOLATILE";
            break;
          case 1022:
LABEL_2967:
            result = L"ERROR_NOTIFY_ENUM_DIR";
            break;
          case 1051:
LABEL_2968:
            result = L"ERROR_DEPENDENT_SERVICES_RUNNING";
            break;
          case 1052:
LABEL_2969:
            result = L"ERROR_INVALID_SERVICE_CONTROL";
            break;
          case 1053:
LABEL_2970:
            result = L"ERROR_SERVICE_REQUEST_TIMEOUT";
            break;
          case 1054:
LABEL_2971:
            result = L"ERROR_SERVICE_NO_THREAD";
            break;
          case 1055:
LABEL_2972:
            result = L"ERROR_SERVICE_DATABASE_LOCKED";
            break;
          case 1056:
LABEL_2973:
            result = L"ERROR_SERVICE_ALREADY_RUNNING";
            break;
          case 1057:
LABEL_2974:
            result = L"ERROR_INVALID_SERVICE_ACCOUNT";
            break;
          case 1058:
LABEL_2975:
            result = L"ERROR_SERVICE_DISABLED";
            break;
          case 1059:
LABEL_2976:
            result = L"ERROR_CIRCULAR_DEPENDENCY";
            break;
          case 1060:
LABEL_2977:
            result = L"ERROR_SERVICE_DOES_NOT_EXIST";
            break;
          case 1061:
LABEL_2978:
            result = L"ERROR_SERVICE_CANNOT_ACCEPT_CTRL";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 == 1003 )
        return L"ERROR_CAN_NOT_COMPLETE";
      if ( a1 <= 301 )
      {
        if ( a1 != 301 )
        {
          switch ( a1 )
          {
            case 254:
LABEL_2904:
              result = L"ERROR_INVALID_EA_NAME";
              break;
            case 255:
LABEL_2905:
              result = L"ERROR_EA_LIST_INCONSISTENT";
              break;
            case 258:
LABEL_2906:
              result = L"WAIT_TIMEOUT";
              break;
            case 259:
LABEL_2907:
              result = L"ERROR_NO_MORE_ITEMS & DIERR_NOMOREITEMS";
              break;
            case 266:
              return L"ERROR_CANNOT_COPY";
            case 267:
              return L"ERROR_DIRECTORY";
            case 275:
              return L"ERROR_EAS_DIDNT_FIT";
            case 276:
              return L"ERROR_EA_FILE_CORRUPT";
            case 277:
              return L"ERROR_EA_TABLE_FULL";
            case 278:
              return L"ERROR_INVALID_EA_HANDLE";
            case 282:
              return L"ERROR_EAS_NOT_SUPPORTED";
            case 288:
              return L"ERROR_NOT_OWNER";
            case 298:
              return L"ERROR_TOO_MANY_POSTS";
            case 299:
              return L"ERROR_PARTIAL_COPY";
            case 300:
              return L"ERROR_OPLOCK_NOT_GRANTED";
            default:
              return L"Unknown";
          }
          return result;
        }
        return L"ERROR_INVALID_OPLOCK_PROTOCOL";
      }
      if ( a1 <= 994 )
      {
        switch ( a1 )
        {
          case 994:
            return L"ERROR_EA_ACCESS_DENIED";
          case 302:
            return L"ERROR_DISK_TOO_FRAGMENTED";
          case 303:
            return L"ERROR_DELETE_PENDING";
          case 317:
            return L"ERROR_MR_MID_NOT_FOUND";
          case 487:
            return L"ERROR_INVALID_ADDRESS";
        }
        if ( a1 != 534 )
        {
          if ( a1 != 535 )
          {
            if ( a1 != 536 )
              return L"Unknown";
            return L"ERROR_PIPE_LISTENING";
          }
          return L"ERROR_PIPE_CONNECTED";
        }
        return L"ERROR_ARITHMETIC_OVERFLOW";
      }
      if ( a1 != 995 )
      {
        switch ( a1 )
        {
          case 996:
            return L"ERROR_IO_INCOMPLETE";
          case 997:
            return L"ERROR_IO_PENDING";
          case 998:
            return L"ERROR_NOACCESS";
          case 999:
            return L"ERROR_SWAPERROR";
          case 1001:
            return L"ERROR_STACK_OVERFLOW";
          case 1002:
            return L"ERROR_INVALID_MESSAGE";
        }
        return L"Unknown";
      }
      return L"ERROR_OPERATION_ABORTED";
    }
    if ( a1 <= 8416 )
    {
      if ( a1 == 8416 )
        return L"ERROR_DS_ATT_SCHEMA_REQ_SYNTAX";
      if ( a1 <= 5012 )
      {
        if ( a1 == 5012 )
          return L"ERROR_GROUP_NOT_AVAILABLE";
        if ( a1 <= 1823 )
        {
          if ( a1 == 1823 )
            return L"RPC_S_NOT_RPC_ERROR";
          switch ( a1 )
          {
            case 1460:
LABEL_3306:
              result = L"ERROR_TIMEOUT";
              break;
            case 1461:
LABEL_3307:
              result = L"ERROR_INVALID_MONITOR_HANDLE";
              break;
            case 1500:
LABEL_3308:
              result = L"ERROR_EVENTLOG_FILE_CORRUPT";
              break;
            case 1501:
LABEL_3309:
              result = L"ERROR_EVENTLOG_CANT_START";
              break;
            case 1502:
LABEL_3310:
              result = L"ERROR_LOG_FILE_FULL";
              break;
            case 1503:
LABEL_3311:
              result = L"ERROR_EVENTLOG_FILE_CHANGED";
              break;
            case 1601:
LABEL_3446:
              result = L"ERROR_INSTALL_SERVICE_FAILURE";
              break;
            case 1602:
LABEL_3312:
              result = L"ERROR_INSTALL_USEREXIT";
              break;
            case 1603:
LABEL_3313:
              result = L"ERROR_INSTALL_FAILURE";
              break;
            case 1604:
LABEL_3314:
              result = L"ERROR_INSTALL_SUSPEND";
              break;
            case 1605:
LABEL_3315:
              result = L"ERROR_UNKNOWN_PRODUCT";
              break;
            case 1606:
LABEL_3316:
              result = L"ERROR_UNKNOWN_FEATURE";
              break;
            case 1607:
LABEL_3317:
              result = L"ERROR_UNKNOWN_COMPONENT";
              break;
            case 1608:
LABEL_3318:
              result = L"ERROR_UNKNOWN_PROPERTY";
              break;
            case 1609:
LABEL_3319:
              result = L"ERROR_INVALID_HANDLE_STATE";
              break;
            case 1610:
LABEL_3320:
              result = L"ERROR_BAD_CONFIGURATION";
              break;
            case 1611:
LABEL_3321:
              result = L"ERROR_INDEX_ABSENT";
              break;
            case 1612:
LABEL_3322:
              result = L"ERROR_INSTALL_SOURCE_ABSENT";
              break;
            case 1613:
LABEL_3447:
              result = L"ERROR_INSTALL_PACKAGE_VERSION";
              break;
            case 1614:
LABEL_3323:
              result = L"ERROR_PRODUCT_UNINSTALLED";
              break;
            case 1615:
LABEL_3324:
              result = L"ERROR_BAD_QUERY_SYNTAX";
              break;
            case 1616:
LABEL_3325:
              result = L"ERROR_INVALID_FIELD";
              break;
            case 1617:
LABEL_3326:
              result = L"ERROR_DEVICE_REMOVED";
              break;
            case 1618:
LABEL_3448:
              result = L"ERROR_INSTALL_ALREADY_RUNNING";
              break;
            case 1619:
LABEL_3449:
              result = L"ERROR_INSTALL_PACKAGE_OPEN_FAILED";
              break;
            case 1620:
LABEL_3450:
              result = L"ERROR_INSTALL_PACKAGE_INVALID";
              break;
            case 1621:
LABEL_3451:
              result = L"ERROR_INSTALL_UI_FAILURE";
              break;
            case 1622:
LABEL_3452:
              result = L"ERROR_INSTALL_LOG_FAILURE";
              break;
            case 1623:
LABEL_3453:
              result = L"ERROR_INSTALL_LANGUAGE_UNSUPPORTED";
              break;
            case 1624:
LABEL_3454:
              result = L"ERROR_INSTALL_TRANSFORM_FAILURE";
              break;
            case 1625:
LABEL_3455:
              result = L"ERROR_INSTALL_PACKAGE_REJECTED";
              break;
            case 1626:
LABEL_3456:
              result = L"ERROR_FUNCTION_NOT_CALLED";
              break;
            case 1627:
LABEL_3457:
              result = L"ERROR_FUNCTION_FAILED";
              break;
            case 1628:
LABEL_3458:
              result = L"ERROR_INVALID_TABLE";
              break;
            case 1629:
LABEL_3459:
              result = L"ERROR_DATATYPE_MISMATCH";
              break;
            case 1630:
LABEL_3460:
              result = L"ERROR_UNSUPPORTED_TYPE";
              break;
            case 1631:
LABEL_3461:
              result = L"ERROR_CREATE_FAILED";
              break;
            case 1632:
LABEL_3462:
              result = L"ERROR_INSTALL_TEMP_UNWRITABLE";
              break;
            case 1633:
LABEL_3463:
              result = L"ERROR_INSTALL_PLATFORM_UNSUPPORTED";
              break;
            case 1634:
LABEL_3464:
              result = L"ERROR_INSTALL_NOTUSED";
              break;
            case 1635:
LABEL_3465:
              result = L"ERROR_PATCH_PACKAGE_OPEN_FAILED";
              break;
            case 1636:
LABEL_3466:
              result = L"ERROR_PATCH_PACKAGE_INVALID";
              break;
            case 1637:
LABEL_3467:
              result = L"ERROR_PATCH_PACKAGE_UNSUPPORTED";
              break;
            case 1638:
LABEL_3468:
              result = L"ERROR_PRODUCT_VERSION";
              break;
            case 1639:
LABEL_3469:
              result = L"ERROR_INVALID_COMMAND_LINE";
              break;
            case 1640:
LABEL_3470:
              result = L"ERROR_INSTALL_REMOTE_DISALLOWED";
              break;
            case 1641:
LABEL_3471:
              result = L"ERROR_SUCCESS_REBOOT_INITIATED";
              break;
            case 1642:
LABEL_3472:
              result = L"ERROR_PATCH_TARGET_NOT_FOUND";
              break;
            case 1643:
LABEL_3473:
              result = L"ERROR_PATCH_PACKAGE_REJECTED";
              break;
            case 1644:
LABEL_3474:
              result = L"ERROR_INSTALL_TRANSFORM_REJECTED";
              break;
            case 1700:
LABEL_3327:
              result = L"RPC_S_INVALID_STRING_BINDING";
              break;
            case 1701:
LABEL_3328:
              result = L"RPC_S_WRONG_KIND_OF_BINDING";
              break;
            case 1702:
LABEL_3329:
              result = L"RPC_S_INVALID_BINDING";
              break;
            case 1703:
LABEL_3330:
              result = L"RPC_S_PROTSEQ_NOT_SUPPORTED";
              break;
            case 1704:
LABEL_3331:
              result = L"RPC_S_INVALID_RPC_PROTSEQ";
              break;
            case 1705:
LABEL_3332:
              result = L"RPC_S_INVALID_STRING_UUID";
              break;
            case 1706:
LABEL_3333:
              result = L"RPC_S_INVALID_ENDPOINT_FORMAT";
              break;
            case 1707:
LABEL_3334:
              result = L"RPC_S_INVALID_NET_ADDR";
              break;
            case 1708:
LABEL_3335:
              result = L"RPC_S_NO_ENDPOINT_FOUND";
              break;
            case 1709:
LABEL_3336:
              result = L"RPC_S_INVALID_TIMEOUT";
              break;
            case 1710:
LABEL_3337:
              result = L"RPC_S_OBJECT_NOT_FOUND";
              break;
            case 1711:
LABEL_3338:
              result = L"RPC_S_ALREADY_REGISTERED";
              break;
            case 1712:
LABEL_3339:
              result = L"RPC_S_TYPE_ALREADY_REGISTERED";
              break;
            case 1713:
LABEL_3340:
              result = L"RPC_S_ALREADY_LISTENING";
              break;
            case 1714:
LABEL_3341:
              result = L"RPC_S_NO_PROTSEQS_REGISTERED";
              break;
            case 1715:
LABEL_3342:
              result = L"RPC_S_NOT_LISTENING";
              break;
            case 1716:
LABEL_3343:
              result = L"RPC_S_UNKNOWN_MGR_TYPE";
              break;
            case 1717:
LABEL_3344:
              result = L"RPC_S_UNKNOWN_IF";
              break;
            case 1718:
              return L"RPC_S_NO_BINDINGS";
            case 1719:
LABEL_3346:
              result = L"RPC_S_NO_PROTSEQS";
              break;
            case 1720:
LABEL_3347:
              result = L"RPC_S_CANT_CREATE_ENDPOINT";
              break;
            case 1721:
LABEL_3348:
              result = L"RPC_S_OUT_OF_RESOURCES";
              break;
            case 1722:
LABEL_3349:
              result = L"RPC_S_SERVER_UNAVAILABLE";
              break;
            case 1723:
LABEL_3350:
              result = L"RPC_S_SERVER_TOO_BUSY";
              break;
            case 1724:
LABEL_3351:
              result = L"RPC_S_INVALID_NETWORK_OPTIONS";
              break;
            case 1725:
LABEL_3352:
              result = L"RPC_S_NO_CALL_ACTIVE";
              break;
            case 1726:
LABEL_3353:
              result = L"RPC_S_CALL_FAILED";
              break;
            case 1727:
LABEL_3354:
              result = L"RPC_S_CALL_FAILED_DNE";
              break;
            case 1728:
LABEL_3355:
              result = L"RPC_S_PROTOCOL_ERROR";
              break;
            case 1730:
LABEL_3356:
              result = L"RPC_S_UNSUPPORTED_TRANS_SYN";
              break;
            case 1732:
LABEL_3357:
              result = L"RPC_S_UNSUPPORTED_TYPE";
              break;
            case 1733:
LABEL_3358:
              result = L"RPC_S_INVALID_TAG";
              break;
            case 1734:
LABEL_3359:
              result = L"RPC_S_INVALID_BOUND";
              break;
            case 1735:
LABEL_3360:
              result = L"RPC_S_NO_ENTRY_NAME";
              break;
            case 1736:
LABEL_3361:
              result = L"RPC_S_INVALID_NAME_SYNTAX";
              break;
            case 1737:
LABEL_3362:
              result = L"RPC_S_UNSUPPORTED_NAME_SYNTAX";
              break;
            case 1739:
LABEL_3363:
              result = L"RPC_S_UUID_NO_ADDRESS";
              break;
            case 1740:
LABEL_3364:
              result = L"RPC_S_DUPLICATE_ENDPOINT";
              break;
            case 1741:
LABEL_3365:
              result = L"RPC_S_UNKNOWN_AUTHN_TYPE";
              break;
            case 1742:
LABEL_3366:
              result = L"RPC_S_MAX_CALLS_TOO_SMALL";
              break;
            case 1743:
LABEL_3367:
              result = L"RPC_S_STRING_TOO_LONG";
              break;
            case 1744:
LABEL_3368:
              result = L"RPC_S_PROTSEQ_NOT_FOUND";
              break;
            case 1745:
LABEL_3369:
              result = L"RPC_S_PROCNUM_OUT_OF_RANGE";
              break;
            case 1746:
LABEL_3370:
              result = L"RPC_S_BINDING_HAS_NO_AUTH";
              break;
            case 1747:
LABEL_3371:
              result = L"RPC_S_UNKNOWN_AUTHN_SERVICE";
              break;
            case 1748:
LABEL_3372:
              result = L"RPC_S_UNKNOWN_AUTHN_LEVEL";
              break;
            case 1749:
LABEL_3373:
              result = L"RPC_S_INVALID_AUTH_IDENTITY";
              break;
            case 1750:
LABEL_3374:
              result = L"RPC_S_UNKNOWN_AUTHZ_SERVICE";
              break;
            case 1751:
LABEL_3375:
              result = L"EPT_S_INVALID_ENTRY";
              break;
            case 1752:
LABEL_3376:
              result = L"EPT_S_CANT_PERFORM_OP";
              break;
            case 1753:
LABEL_3377:
              result = L"EPT_S_NOT_REGISTERED";
              break;
            case 1754:
LABEL_3378:
              result = L"RPC_S_NOTHING_TO_EXPORT";
              break;
            case 1755:
LABEL_3379:
              result = L"RPC_S_INCOMPLETE_NAME";
              break;
            case 1756:
LABEL_3380:
              result = L"RPC_S_INVALID_VERS_OPTION";
              break;
            case 1757:
LABEL_3381:
              result = L"RPC_S_NO_MORE_MEMBERS";
              break;
            case 1758:
LABEL_3382:
              result = L"RPC_S_NOT_ALL_OBJS_UNEXPORTED";
              break;
            case 1759:
LABEL_3383:
              result = L"RPC_S_INTERFACE_NOT_FOUND";
              break;
            case 1760:
LABEL_3384:
              result = L"RPC_S_ENTRY_ALREADY_EXISTS";
              break;
            case 1761:
LABEL_3385:
              result = L"RPC_S_ENTRY_NOT_FOUND";
              break;
            case 1762:
LABEL_3386:
              result = L"RPC_S_NAME_SERVICE_UNAVAILABLE";
              break;
            case 1763:
LABEL_3387:
              result = L"RPC_S_INVALID_NAF_ID";
              break;
            case 1764:
LABEL_3388:
              result = L"RPC_S_CANNOT_SUPPORT";
              break;
            case 1765:
LABEL_3389:
              result = L"RPC_S_NO_CONTEXT_AVAILABLE";
              break;
            case 1766:
LABEL_3390:
              result = L"RPC_S_INTERNAL_ERROR";
              break;
            case 1767:
LABEL_3391:
              result = L"RPC_S_ZERO_DIVIDE";
              break;
            case 1768:
LABEL_3392:
              result = L"RPC_S_ADDRESS_ERROR";
              break;
            case 1769:
LABEL_3393:
              result = L"RPC_S_FP_DIV_ZERO";
              break;
            case 1770:
LABEL_3394:
              result = L"RPC_S_FP_UNDERFLOW";
              break;
            case 1771:
LABEL_3395:
              result = L"RPC_S_FP_OVERFLOW";
              break;
            case 1772:
LABEL_3396:
              result = L"RPC_X_NO_MORE_ENTRIES";
              break;
            case 1773:
LABEL_3397:
              result = L"RPC_X_SS_CHAR_TRANS_OPEN_FAIL";
              break;
            case 1774:
LABEL_3398:
              result = L"RPC_X_SS_CHAR_TRANS_SHORT_FILE";
              break;
            case 1775:
LABEL_3399:
              result = L"RPC_X_SS_IN_NULL_CONTEXT";
              break;
            case 1777:
LABEL_3400:
              result = L"RPC_X_SS_CONTEXT_DAMAGED";
              break;
            case 1778:
LABEL_3401:
              result = L"RPC_X_SS_HANDLES_MISMATCH";
              break;
            case 1779:
LABEL_3402:
              result = L"RPC_X_SS_CANNOT_GET_CALL_HANDLE";
              break;
            case 1780:
LABEL_3403:
              result = L"RPC_X_NULL_REF_POINTER";
              break;
            case 1781:
LABEL_3404:
              result = L"RPC_X_ENUM_VALUE_OUT_OF_RANGE";
              break;
            case 1782:
LABEL_3405:
              result = L"RPC_X_BYTE_COUNT_TOO_SMALL";
              break;
            case 1783:
LABEL_3406:
              result = L"RPC_X_BAD_STUB_DATA";
              break;
            case 1784:
LABEL_3407:
              result = L"ERROR_INVALID_USER_BUFFER";
              break;
            case 1785:
LABEL_3408:
              result = L"ERROR_UNRECOGNIZED_MEDIA";
              break;
            case 1786:
LABEL_3409:
              result = L"ERROR_NO_TRUST_LSA_SECRET";
              break;
            case 1787:
LABEL_3410:
              result = L"ERROR_NO_TRUST_SAM_ACCOUNT";
              break;
            case 1788:
LABEL_3411:
              result = L"ERROR_TRUSTED_DOMAIN_FAILURE";
              break;
            case 1789:
LABEL_3412:
              result = L"ERROR_TRUSTED_RELATIONSHIP_FAILURE";
              break;
            case 1790:
LABEL_3413:
              result = L"ERROR_TRUST_FAILURE";
              break;
            case 1791:
LABEL_3414:
              result = L"RPC_S_CALL_IN_PROGRESS";
              break;
            case 1792:
LABEL_3415:
              result = L"ERROR_NETLOGON_NOT_STARTED";
              break;
            case 1793:
LABEL_3416:
              result = L"ERROR_ACCOUNT_EXPIRED";
              break;
            case 1794:
LABEL_3417:
              result = L"ERROR_REDIRECTOR_HAS_OPEN_HANDLES";
              break;
            case 1795:
LABEL_3418:
              result = L"ERROR_PRINTER_DRIVER_ALREADY_INSTALLED";
              break;
            case 1796:
LABEL_3419:
              result = L"ERROR_UNKNOWN_PORT";
              break;
            case 1797:
LABEL_3420:
              result = L"ERROR_UNKNOWN_PRINTER_DRIVER";
              break;
            case 1798:
LABEL_3421:
              result = L"ERROR_UNKNOWN_PRINTPROCESSOR";
              break;
            case 1799:
LABEL_3422:
              result = L"ERROR_INVALID_SEPARATOR_FILE";
              break;
            case 1800:
LABEL_3423:
              result = L"ERROR_INVALID_PRIORITY";
              break;
            case 1801:
LABEL_3424:
              result = L"ERROR_INVALID_PRINTER_NAME";
              break;
            case 1802:
LABEL_3425:
              result = L"ERROR_PRINTER_ALREADY_EXISTS";
              break;
            case 1803:
LABEL_3426:
              result = L"ERROR_INVALID_PRINTER_COMMAND";
              break;
            case 1804:
LABEL_3427:
              result = L"ERROR_INVALID_DATATYPE";
              break;
            case 1805:
LABEL_3428:
              result = L"ERROR_INVALID_ENVIRONMENT";
              break;
            case 1806:
LABEL_3429:
              result = L"RPC_S_NO_MORE_BINDINGS";
              break;
            case 1807:
LABEL_3430:
              result = L"ERROR_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT";
              break;
            case 1808:
LABEL_3431:
              result = L"ERROR_NOLOGON_WORKSTATION_TRUST_ACCOUNT";
              break;
            case 1809:
LABEL_3432:
              result = L"ERROR_NOLOGON_SERVER_TRUST_ACCOUNT";
              break;
            case 1810:
LABEL_3433:
              result = L"ERROR_DOMAIN_TRUST_INCONSISTENT";
              break;
            case 1811:
LABEL_3434:
              result = L"ERROR_SERVER_HAS_OPEN_HANDLES";
              break;
            case 1812:
LABEL_3435:
              result = L"ERROR_RESOURCE_DATA_NOT_FOUND";
              break;
            case 1813:
LABEL_3436:
              result = L"ERROR_RESOURCE_TYPE_NOT_FOUND";
              break;
            case 1814:
LABEL_3437:
              result = L"ERROR_RESOURCE_NAME_NOT_FOUND";
              break;
            case 1815:
LABEL_3438:
              result = L"ERROR_RESOURCE_LANG_NOT_FOUND";
              break;
            case 1816:
LABEL_3439:
              result = L"ERROR_NOT_ENOUGH_QUOTA";
              break;
            case 1817:
LABEL_3440:
              result = L"RPC_S_NO_INTERFACES";
              break;
            case 1818:
LABEL_3441:
              result = L"RPC_S_CALL_CANCELLED";
              break;
            case 1819:
LABEL_3442:
              result = L"RPC_S_BINDING_INCOMPLETE";
              break;
            case 1820:
LABEL_3443:
              result = L"RPC_S_COMM_FAILURE";
              break;
            case 1821:
LABEL_3444:
              result = L"RPC_S_UNSUPPORTED_AUTHN_LEVEL";
              break;
            case 1822:
LABEL_3445:
              result = L"RPC_S_NO_PRINC_NAME";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        if ( a1 <= 1898 )
        {
          if ( a1 == 1898 )
            return L"RPC_S_GROUP_MEMBER_NOT_FOUND";
          switch ( a1 )
          {
            case 1824:
LABEL_3479:
              result = L"RPC_S_UUID_LOCAL_ONLY";
              break;
            case 1825:
LABEL_3480:
              result = L"RPC_S_SEC_PKG_ERROR";
              break;
            case 1826:
LABEL_3481:
              result = L"RPC_S_NOT_CANCELLED";
              break;
            case 1827:
LABEL_3482:
              result = L"RPC_X_INVALID_ES_ACTION";
              break;
            case 1828:
LABEL_3483:
              result = L"RPC_X_WRONG_ES_VERSION";
              break;
            case 1829:
LABEL_3484:
              result = L"RPC_X_WRONG_STUB_VERSION";
              break;
            case 1830:
LABEL_3485:
              result = L"RPC_X_INVALID_PIPE_OBJECT";
              break;
            case 1831:
LABEL_3486:
              result = L"RPC_X_WRONG_PIPE_ORDER";
              break;
            case 1832:
LABEL_3487:
              result = L"RPC_X_WRONG_PIPE_VERSION";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        if ( a1 <= 2000 )
        {
          if ( a1 == 2000 )
            return L"ERROR_INVALID_PIXEL_FORMAT";
          switch ( a1 )
          {
            case 1899:
LABEL_3492:
              result = L"EPT_S_CANT_CREATE";
              break;
            case 1900:
LABEL_3493:
              result = L"RPC_S_INVALID_OBJECT";
              break;
            case 1901:
LABEL_3494:
              result = L"ERROR_INVALID_TIME";
              break;
            case 1902:
LABEL_3495:
              result = L"ERROR_INVALID_FORM_NAME";
              break;
            case 1903:
LABEL_3496:
              result = L"ERROR_INVALID_FORM_SIZE";
              break;
            case 1904:
LABEL_3497:
              result = L"ERROR_ALREADY_WAITING";
              break;
            case 1905:
LABEL_3498:
              result = L"ERROR_PRINTER_DELETED";
              break;
            case 1906:
LABEL_3499:
              result = L"ERROR_INVALID_PRINTER_STATE";
              break;
            case 1907:
LABEL_3500:
              result = L"ERROR_PASSWORD_MUST_CHANGE";
              break;
            case 1908:
LABEL_3501:
              result = L"ERROR_DOMAIN_CONTROLLER_NOT_FOUND";
              break;
            case 1909:
LABEL_3502:
              result = L"ERROR_ACCOUNT_LOCKED_OUT";
              break;
            case 1910:
LABEL_3503:
              result = L"OR_INVALID_OXID";
              break;
            case 1911:
LABEL_3504:
              result = L"OR_INVALID_OID";
              break;
            case 1912:
LABEL_3505:
              result = L"OR_INVALID_SET";
              break;
            case 1913:
LABEL_3506:
              result = L"RPC_S_SEND_INCOMPLETE";
              break;
            case 1914:
LABEL_3507:
              result = L"RPC_S_INVALID_ASYNC_HANDLE";
              break;
            case 1915:
LABEL_3508:
              result = L"RPC_S_INVALID_ASYNC_CALL";
              break;
            case 1916:
LABEL_3509:
              result = L"RPC_X_PIPE_CLOSED";
              break;
            case 1917:
LABEL_3510:
              result = L"RPC_X_PIPE_DISCIPLINE_ERROR";
              break;
            case 1918:
LABEL_3511:
              result = L"RPC_X_PIPE_EMPTY";
              break;
            case 1919:
LABEL_3512:
              result = L"ERROR_NO_SITENAME";
              break;
            case 1920:
LABEL_3513:
              result = L"ERROR_CANT_ACCESS_FILE";
              break;
            case 1921:
LABEL_3514:
              result = L"ERROR_CANT_RESOLVE_FILENAME";
              break;
            case 1922:
LABEL_3515:
              result = L"RPC_S_ENTRY_TYPE_MISMATCH";
              break;
            case 1923:
LABEL_3516:
              result = L"RPC_S_NOT_ALL_OBJS_EXPORTED";
              break;
            case 1924:
LABEL_3517:
              result = L"RPC_S_INTERFACE_NOT_EXPORTED";
              break;
            case 1925:
LABEL_3518:
              result = L"RPC_S_PROFILE_NOT_ADDED";
              break;
            case 1926:
LABEL_3519:
              result = L"RPC_S_PRF_ELT_NOT_ADDED";
              break;
            case 1927:
LABEL_3520:
              result = L"RPC_S_PRF_ELT_NOT_REMOVED";
              break;
            case 1928:
LABEL_3521:
              result = L"RPC_S_GRP_ELT_NOT_ADDED";
              break;
            case 1929:
LABEL_3522:
              result = L"RPC_S_GRP_ELT_NOT_REMOVED";
              break;
            case 1930:
LABEL_3523:
              result = L"ERROR_KM_DRIVER_BLOCKED";
              break;
            case 1931:
LABEL_3524:
              result = L"ERROR_CONTEXT_EXPIRED";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        if ( a1 <= 2108 )
        {
          if ( a1 == 2108 )
            return L"ERROR_CONNECTED_OTHER_PASSWORD";
          switch ( a1 )
          {
            case 2001:
LABEL_3529:
              result = L"ERROR_BAD_DRIVER";
              break;
            case 2002:
LABEL_3530:
              result = L"ERROR_INVALID_WINDOW_STYLE";
              break;
            case 2003:
LABEL_3531:
              result = L"ERROR_METAFILE_NOT_SUPPORTED";
              break;
            case 2004:
LABEL_3532:
              result = L"ERROR_TRANSFORM_NOT_SUPPORTED";
              break;
            case 2005:
LABEL_3533:
              result = L"ERROR_CLIPPING_NOT_SUPPORTED";
              break;
            case 2010:
LABEL_3534:
              result = L"ERROR_INVALID_CMM";
              break;
            case 2011:
LABEL_3535:
              result = L"ERROR_INVALID_PROFILE";
              break;
            case 2012:
LABEL_3536:
              result = L"ERROR_TAG_NOT_FOUND";
              break;
            case 2013:
LABEL_3537:
              result = L"ERROR_TAG_NOT_PRESENT";
              break;
            case 2014:
LABEL_3538:
              result = L"ERROR_DUPLICATE_TAG";
              break;
            case 2015:
LABEL_3539:
              result = L"ERROR_PROFILE_NOT_ASSOCIATED_WITH_DEVICE";
              break;
            case 2016:
LABEL_3540:
              result = L"ERROR_PROFILE_NOT_FOUND";
              break;
            case 2017:
LABEL_3541:
              result = L"ERROR_INVALID_COLORSPACE";
              break;
            case 2018:
LABEL_3542:
              result = L"ERROR_ICM_NOT_ENABLED";
              break;
            case 2019:
LABEL_3543:
              result = L"ERROR_DELETING_ICM_XFORM";
              break;
            case 2020:
LABEL_3544:
              result = L"ERROR_INVALID_TRANSFORM";
              break;
            case 2021:
LABEL_3545:
              result = L"ERROR_COLORSPACE_MISMATCH";
              break;
            case 2022:
LABEL_3546:
              result = L"ERROR_INVALID_COLORINDEX";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        if ( a1 <= 4308 )
        {
          if ( a1 == 4308 )
            return L"ERROR_MEDIA_UNAVAILABLE";
          if ( a1 <= 4005 )
          {
            if ( a1 != 4005 )
            {
              if ( a1 <= 3007 )
              {
                if ( a1 == 3007 )
                  return L"ERROR_INVALID_PRINT_MONITOR";
                if ( a1 <= 3000 )
                {
                  switch ( a1 )
                  {
                    case 3000:
                      return L"ERROR_UNKNOWN_PRINT_MONITOR";
                    case 2109:
                      return L"ERROR_CONNECTED_OTHER_PASSWORD_DEFAULT";
                    case 2202:
                      return L"ERROR_BAD_USERNAME";
                    case 2250:
                      return L"ERROR_NOT_CONNECTED";
                  }
                  if ( a1 != 2401 )
                  {
                    if ( a1 != 2402 )
                    {
                      if ( a1 != 2404 )
                        return L"Unknown";
                      return L"ERROR_DEVICE_IN_USE";
                    }
                    return L"ERROR_ACTIVE_CONNECTIONS";
                  }
                  return L"ERROR_OPEN_FILES";
                }
                switch ( a1 )
                {
                  case 3001:
                    return L"ERROR_PRINTER_DRIVER_IN_USE";
                  case 3002:
                    return L"ERROR_SPOOL_FILE_NOT_FOUND";
                  case 3003:
                    return L"ERROR_SPL_NO_STARTDOC";
                  case 3004:
                    return L"ERROR_SPL_NO_ADDJOB";
                  case 3005:
                    return L"ERROR_PRINT_PROCESSOR_ALREADY_INSTALLED";
                }
                return L"ERROR_PRINT_MONITOR_ALREADY_INSTALLED";
              }
              if ( a1 <= 3014 )
              {
                switch ( a1 )
                {
                  case 3014:
                    return L"ERROR_PRINTER_DRIVER_BLOCKED";
                  case 3008:
                    return L"ERROR_PRINT_MONITOR_IN_USE";
                  case 3009:
                    return L"ERROR_PRINTER_HAS_JOBS_QUEUED";
                  case 3010:
                    return L"ERROR_SUCCESS_REBOOT_REQUIRED";
                  case 3011:
                    return L"ERROR_SUCCESS_RESTART_REQUIRED";
                  case 3012:
                    return L"ERROR_PRINTER_NOT_FOUND";
                }
                return L"ERROR_PRINTER_DRIVER_WARNED";
              }
              if ( a1 == 4000 )
                return L"ERROR_WINS_INTERNAL";
              if ( a1 != 4001 )
              {
                if ( a1 != 4002 )
                {
                  if ( a1 != 4003 )
                  {
                    if ( a1 != 4004 )
                      return L"Unknown";
                    return L"ERROR_FULL_BACKUP";
                  }
                  return L"ERROR_INC_BACKUP";
                }
                return L"ERROR_STATIC_INIT";
              }
              return L"ERROR_CAN_NOT_DEL_LOCAL_WINS";
            }
            return L"ERROR_REC_NON_EXISTENT";
          }
          if ( a1 <= 4210 )
          {
            if ( a1 == 4210 )
              return L"ERROR_WMI_INVALID_MOF";
            if ( a1 > 4204 )
            {
              switch ( a1 )
              {
                case 4205:
                  return L"ERROR_WMI_UNRESOLVED_INSTANCE_REF";
                case 4206:
                  return L"ERROR_WMI_ALREADY_ENABLED";
                case 4207:
                  return L"ERROR_WMI_GUID_DISCONNECTED";
                case 4208:
                  return L"ERROR_WMI_SERVER_UNAVAILABLE";
              }
              return L"ERROR_WMI_DP_FAILED";
            }
            switch ( a1 )
            {
              case 4204:
                return L"ERROR_WMI_DP_NOT_FOUND";
              case 4006:
                return L"ERROR_RPL_NOT_ALLOWED";
              case 4100:
                return L"ERROR_DHCP_ADDRESS_CONFLICT";
              case 4200:
                return L"ERROR_WMI_GUID_NOT_FOUND";
              case 4201:
                return L"ERROR_WMI_INSTANCE_NOT_FOUND";
            }
            if ( a1 != 4202 )
            {
              if ( a1 == 4203 )
                return L"ERROR_WMI_TRY_AGAIN";
              return L"Unknown";
            }
            return L"ERROR_WMI_ITEMID_NOT_FOUND";
          }
          if ( a1 > 4302 )
          {
            switch ( a1 )
            {
              case 4303:
                return L"ERROR_DRIVE_MEDIA_MISMATCH";
              case 4304:
                return L"ERROR_MEDIA_OFFLINE";
              case 4305:
                return L"ERROR_LIBRARY_OFFLINE";
              case 4306:
                return L"ERROR_EMPTY";
            }
            return L"ERROR_NOT_EMPTY";
          }
          if ( a1 == 4302 )
            return L"ERROR_INVALID_MEDIA_POOL";
          if ( a1 != 4211 )
          {
            switch ( a1 )
            {
              case 4212:
                return L"ERROR_WMI_ALREADY_DISABLED";
              case 4213:
                return L"ERROR_WMI_READ_ONLY";
              case 4214:
                return L"ERROR_WMI_SET_FAILURE";
              case 4300:
                return L"ERROR_INVALID_MEDIA";
              case 4301:
                return L"ERROR_INVALID_LIBRARY";
            }
            return L"Unknown";
          }
          return L"ERROR_WMI_INVALID_REGINFO";
        }
        if ( a1 > 4500 )
        {
          switch ( a1 )
          {
            case 5001:
              return L"ERROR_DEPENDENT_RESOURCE_EXISTS";
            case 5002:
              return L"ERROR_DEPENDENCY_NOT_FOUND";
            case 5003:
              return L"ERROR_DEPENDENCY_ALREADY_EXISTS";
            case 5004:
              return L"ERROR_RESOURCE_NOT_ONLINE";
            case 5005:
              return L"ERROR_HOST_NODE_NOT_AVAILABLE";
            case 5006:
              return L"ERROR_RESOURCE_NOT_AVAILABLE";
            case 5007:
              return L"ERROR_RESOURCE_NOT_FOUND";
            case 5008:
              return L"ERROR_SHUTDOWN_CLUSTER";
            case 5009:
              return L"ERROR_CANT_EVICT_ACTIVE_NODE";
            case 5010:
              return L"ERROR_OBJECT_ALREADY_EXISTS";
            case 5011:
              return L"ERROR_OBJECT_IN_LIST";
            default:
              return L"Unknown";
          }
        }
        if ( a1 != 4500 )
        {
          switch ( a1 )
          {
            case 4309:
LABEL_3658:
              result = L"ERROR_RESOURCE_DISABLED";
              break;
            case 4310:
LABEL_3659:
              result = L"ERROR_INVALID_CLEANER";
              break;
            case 4311:
LABEL_3660:
              result = L"ERROR_UNABLE_TO_CLEAN";
              break;
            case 4312:
LABEL_3661:
              result = L"ERROR_OBJECT_NOT_FOUND";
              break;
            case 4313:
LABEL_3662:
              result = L"ERROR_DATABASE_FAILURE";
              break;
            case 4314:
LABEL_3663:
              result = L"ERROR_DATABASE_FULL";
              break;
            case 4315:
LABEL_3664:
              result = L"ERROR_MEDIA_INCOMPATIBLE";
              break;
            case 4316:
LABEL_3665:
              result = L"ERROR_RESOURCE_NOT_PRESENT";
              break;
            case 4317:
LABEL_3666:
              result = L"ERROR_INVALID_OPERATION";
              break;
            case 4318:
LABEL_3667:
              result = L"ERROR_MEDIA_NOT_AVAILABLE";
              break;
            case 4319:
LABEL_3668:
              result = L"ERROR_DEVICE_NOT_AVAILABLE";
              break;
            case 4320:
LABEL_3669:
              result = L"ERROR_REQUEST_REFUSED";
              break;
            case 4321:
LABEL_3670:
              result = L"ERROR_INVALID_DRIVE_OBJECT";
              break;
            case 4322:
LABEL_3671:
              result = L"ERROR_LIBRARY_FULL";
              break;
            case 4323:
LABEL_3672:
              result = L"ERROR_MEDIUM_NOT_ACCESSIBLE";
              break;
            case 4324:
LABEL_3673:
              result = L"ERROR_UNABLE_TO_LOAD_MEDIUM";
              break;
            case 4325:
LABEL_3674:
              result = L"ERROR_UNABLE_TO_INVENTORY_DRIVE";
              break;
            case 4326:
LABEL_3675:
              result = L"ERROR_UNABLE_TO_INVENTORY_SLOT";
              break;
            case 4327:
LABEL_3676:
              result = L"ERROR_UNABLE_TO_INVENTORY_TRANSPORT";
              break;
            case 4328:
LABEL_3677:
              result = L"ERROR_TRANSPORT_FULL";
              break;
            case 4329:
LABEL_3678:
              result = L"ERROR_CONTROLLING_IEPORT";
              break;
            case 4330:
LABEL_3679:
              result = L"ERROR_UNABLE_TO_EJECT_MOUNTED_MEDIA";
              break;
            case 4331:
LABEL_3680:
              result = L"ERROR_CLEANER_SLOT_SET";
              break;
            case 4332:
LABEL_3681:
              result = L"ERROR_CLEANER_SLOT_NOT_SET";
              break;
            case 4333:
              return L"ERROR_CLEANER_CARTRIDGE_SPENT";
            case 4334:
LABEL_3683:
              result = L"ERROR_UNEXPECTED_OMID";
              break;
            case 4335:
LABEL_3684:
              result = L"ERROR_CANT_DELETE_LAST_ITEM";
              break;
            case 4336:
LABEL_3685:
              result = L"ERROR_MESSAGE_EXCEEDS_MAX_SIZE";
              break;
            case 4337:
LABEL_3692:
              result = L"ERROR_VOLUME_CONTAINS_SYS_FILES";
              break;
            case 4338:
LABEL_3693:
              result = L"ERROR_INDIGENOUS_TYPE";
              break;
            case 4339:
LABEL_3694:
              result = L"ERROR_NO_SUPPORTING_DRIVES";
              break;
            case 4340:
LABEL_3695:
              result = L"ERROR_CLEANER_CARTRIDGE_INSTALLED";
              break;
            case 4350:
LABEL_3686:
              result = L"ERROR_FILE_OFFLINE";
              break;
            case 4351:
LABEL_3687:
              result = L"ERROR_REMOTE_STORAGE_NOT_ACTIVE";
              break;
            case 4352:
LABEL_3688:
              result = L"ERROR_REMOTE_STORAGE_MEDIA_ERROR";
              break;
            case 4390:
              return L"ERROR_NOT_A_REPARSE_POINT";
            case 4391:
              return L"ERROR_REPARSE_ATTRIBUTE_CONFLICT";
            case 4392:
              return L"ERROR_INVALID_REPARSE_DATA";
            case 4393:
              return L"ERROR_REPARSE_TAG_INVALID";
            case 4394:
              return L"ERROR_REPARSE_TAG_MISMATCH";
            default:
              return L"Unknown";
          }
          return result;
        }
        return L"ERROR_VOLUME_NOT_SIS_ENABLED";
      }
      if ( a1 <= 5890 )
      {
        if ( a1 != 5890 )
        {
          switch ( a1 )
          {
            case 5013:
LABEL_3713:
              result = L"ERROR_GROUP_NOT_FOUND";
              break;
            case 5014:
LABEL_3714:
              result = L"ERROR_GROUP_NOT_ONLINE";
              break;
            case 5015:
LABEL_3715:
              result = L"ERROR_HOST_NODE_NOT_RESOURCE_OWNER";
              break;
            case 5016:
LABEL_3716:
              result = L"ERROR_HOST_NODE_NOT_GROUP_OWNER";
              break;
            case 5017:
LABEL_3717:
              result = L"ERROR_RESMON_CREATE_FAILED";
              break;
            case 5018:
LABEL_3718:
              result = L"ERROR_RESMON_ONLINE_FAILED";
              break;
            case 5019:
LABEL_3719:
              result = L"ERROR_RESOURCE_ONLINE";
              break;
            case 5020:
LABEL_3720:
              result = L"ERROR_QUORUM_RESOURCE";
              break;
            case 5021:
LABEL_3721:
              result = L"ERROR_NOT_QUORUM_CAPABLE";
              break;
            case 5022:
LABEL_3722:
              result = L"ERROR_CLUSTER_SHUTTING_DOWN";
              break;
            case 5023:
LABEL_3723:
              result = L"ERROR_INVALID_STATE";
              break;
            case 5024:
LABEL_3724:
              result = L"ERROR_RESOURCE_PROPERTIES_STORED";
              break;
            case 5025:
LABEL_3725:
              result = L"ERROR_NOT_QUORUM_CLASS";
              break;
            case 5026:
LABEL_3726:
              result = L"ERROR_CORE_RESOURCE";
              break;
            case 5027:
              return L"ERROR_QUORUM_RESOURCE_ONLINE_FAILED";
            case 5028:
LABEL_3728:
              result = L"ERROR_QUORUMLOG_OPEN_FAILED";
              break;
            case 5029:
LABEL_3729:
              result = L"ERROR_CLUSTERLOG_CORRUPT";
              break;
            case 5030:
LABEL_3730:
              result = L"ERROR_CLUSTERLOG_RECORD_EXCEEDS_MAXSIZE";
              break;
            case 5031:
LABEL_3731:
              result = L"ERROR_CLUSTERLOG_EXCEEDS_MAXSIZE";
              break;
            case 5032:
LABEL_3732:
              result = L"ERROR_CLUSTERLOG_CHKPOINT_NOT_FOUND";
              break;
            case 5033:
LABEL_3733:
              result = L"ERROR_CLUSTERLOG_NOT_ENOUGH_SPACE";
              break;
            case 5034:
LABEL_3734:
              result = L"ERROR_QUORUM_OWNER_ALIVE";
              break;
            case 5035:
LABEL_3735:
              result = L"ERROR_NETWORK_NOT_AVAILABLE";
              break;
            case 5036:
LABEL_3736:
              result = L"ERROR_NODE_NOT_AVAILABLE";
              break;
            case 5037:
LABEL_3737:
              result = L"ERROR_ALL_NODES_NOT_AVAILABLE";
              break;
            case 5038:
LABEL_3738:
              result = L"ERROR_RESOURCE_FAILED";
              break;
            case 5039:
LABEL_3739:
              result = L"ERROR_CLUSTER_INVALID_NODE";
              break;
            case 5040:
LABEL_3740:
              result = L"ERROR_CLUSTER_NODE_EXISTS";
              break;
            case 5041:
LABEL_3741:
              result = L"ERROR_CLUSTER_JOIN_IN_PROGRESS";
              break;
            case 5042:
LABEL_3742:
              result = L"ERROR_CLUSTER_NODE_NOT_FOUND";
              break;
            case 5043:
LABEL_3743:
              result = L"ERROR_CLUSTER_LOCAL_NODE_NOT_FOUND";
              break;
            case 5044:
LABEL_3744:
              result = L"ERROR_CLUSTER_NETWORK_EXISTS";
              break;
            case 5045:
LABEL_3745:
              result = L"ERROR_CLUSTER_NETWORK_NOT_FOUND";
              break;
            case 5046:
LABEL_3746:
              result = L"ERROR_CLUSTER_NETINTERFACE_EXISTS";
              break;
            case 5047:
LABEL_3747:
              result = L"ERROR_CLUSTER_NETINTERFACE_NOT_FOUND";
              break;
            case 5048:
LABEL_3748:
              result = L"ERROR_CLUSTER_INVALID_REQUEST";
              break;
            case 5049:
LABEL_3749:
              result = L"ERROR_CLUSTER_INVALID_NETWORK_PROVIDER";
              break;
            case 5050:
LABEL_3750:
              result = L"ERROR_CLUSTER_NODE_DOWN";
              break;
            case 5051:
LABEL_3751:
              result = L"ERROR_CLUSTER_NODE_UNREACHABLE";
              break;
            case 5052:
LABEL_3752:
              result = L"ERROR_CLUSTER_NODE_NOT_MEMBER";
              break;
            case 5053:
LABEL_3753:
              result = L"ERROR_CLUSTER_JOIN_NOT_IN_PROGRESS";
              break;
            case 5054:
LABEL_3754:
              result = L"ERROR_CLUSTER_INVALID_NETWORK";
              break;
            case 5056:
LABEL_3755:
              result = L"ERROR_CLUSTER_NODE_UP";
              break;
            case 5057:
LABEL_3756:
              result = L"ERROR_CLUSTER_IPADDR_IN_USE";
              break;
            case 5058:
LABEL_3757:
              result = L"ERROR_CLUSTER_NODE_NOT_PAUSED";
              break;
            case 5059:
LABEL_3758:
              result = L"ERROR_CLUSTER_NO_SECURITY_CONTEXT";
              break;
            case 5060:
              return L"ERROR_CLUSTER_NETWORK_NOT_INTERNAL";
            case 5061:
LABEL_3760:
              result = L"ERROR_CLUSTER_NODE_ALREADY_UP";
              break;
            case 5062:
LABEL_3761:
              result = L"ERROR_CLUSTER_NODE_ALREADY_DOWN";
              break;
            case 5063:
LABEL_3762:
              result = L"ERROR_CLUSTER_NETWORK_ALREADY_ONLINE";
              break;
            case 5064:
LABEL_3763:
              result = L"ERROR_CLUSTER_NETWORK_ALREADY_OFFLINE";
              break;
            case 5065:
LABEL_3764:
              result = L"ERROR_CLUSTER_NODE_ALREADY_MEMBER";
              break;
            case 5066:
LABEL_3765:
              result = L"ERROR_CLUSTER_LAST_INTERNAL_NETWORK";
              break;
            case 5067:
LABEL_3766:
              result = L"ERROR_CLUSTER_NETWORK_HAS_DEPENDENTS";
              break;
            case 5068:
LABEL_3767:
              result = L"ERROR_INVALID_OPERATION_ON_QUORUM";
              break;
            case 5069:
LABEL_3768:
              result = L"ERROR_DEPENDENCY_NOT_ALLOWED";
              break;
            case 5070:
LABEL_3769:
              result = L"ERROR_CLUSTER_NODE_PAUSED";
              break;
            case 5071:
LABEL_3770:
              result = L"ERROR_NODE_CANT_HOST_RESOURCE";
              break;
            case 5072:
LABEL_3771:
              result = L"ERROR_CLUSTER_NODE_NOT_READY";
              break;
            case 5073:
LABEL_3772:
              result = L"ERROR_CLUSTER_NODE_SHUTTING_DOWN";
              break;
            case 5074:
LABEL_3773:
              result = L"ERROR_CLUSTER_JOIN_ABORTED";
              break;
            case 5075:
LABEL_3774:
              result = L"ERROR_CLUSTER_INCOMPATIBLE_VERSIONS";
              break;
            case 5076:
LABEL_3775:
              result = L"ERROR_CLUSTER_MAXNUM_OF_RESOURCES_EXCEEDED";
              break;
            case 5077:
LABEL_3776:
              result = L"ERROR_CLUSTER_SYSTEM_CONFIG_CHANGED";
              break;
            case 5078:
LABEL_3777:
              result = L"ERROR_CLUSTER_RESOURCE_TYPE_NOT_FOUND";
              break;
            case 5079:
LABEL_3778:
              result = L"ERROR_CLUSTER_RESTYPE_NOT_SUPPORTED";
              break;
            case 5080:
LABEL_3779:
              result = L"ERROR_CLUSTER_RESNAME_NOT_FOUND";
              break;
            case 5081:
LABEL_3780:
              result = L"ERROR_CLUSTER_NO_RPC_PACKAGES_REGISTERED";
              break;
            case 5082:
LABEL_3781:
              result = L"ERROR_CLUSTER_OWNER_NOT_IN_PREFLIST";
              break;
            case 5083:
LABEL_3782:
              result = L"ERROR_CLUSTER_DATABASE_SEQMISMATCH";
              break;
            case 5084:
LABEL_3783:
              result = L"ERROR_RESMON_INVALID_STATE";
              break;
            case 5085:
LABEL_3784:
              result = L"ERROR_CLUSTER_GUM_NOT_LOCKER";
              break;
            case 5086:
LABEL_3785:
              result = L"ERROR_QUORUM_DISK_NOT_FOUND";
              break;
            case 5087:
LABEL_3786:
              result = L"ERROR_DATABASE_BACKUP_CORRUPT";
              break;
            case 5088:
LABEL_3787:
              result = L"ERROR_CLUSTER_NODE_ALREADY_HAS_DFS_ROOT";
              break;
            case 5089:
LABEL_3788:
              result = L"ERROR_RESOURCE_PROPERTY_UNCHANGEABLE";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        return L"ERROR_CLUSTER_MEMBERSHIP_INVALID_STATE";
      }
      if ( a1 <= 6000 )
      {
        if ( a1 != 6000 )
        {
          switch ( a1 )
          {
            case 5891:
LABEL_3793:
              result = L"ERROR_CLUSTER_QUORUMLOG_NOT_FOUND";
              break;
            case 5892:
LABEL_3794:
              result = L"ERROR_CLUSTER_MEMBERSHIP_HALT";
              break;
            case 5893:
LABEL_3795:
              result = L"ERROR_CLUSTER_INSTANCE_ID_MISMATCH";
              break;
            case 5894:
LABEL_3796:
              result = L"ERROR_CLUSTER_NETWORK_NOT_FOUND_FOR_IP";
              break;
            case 5895:
LABEL_3797:
              result = L"ERROR_CLUSTER_PROPERTY_DATA_TYPE_MISMATCH";
              break;
            case 5896:
LABEL_3798:
              result = L"ERROR_CLUSTER_EVICT_WITHOUT_CLEANUP";
              break;
            case 5897:
LABEL_3799:
              result = L"ERROR_CLUSTER_PARAMETER_MISMATCH";
              break;
            case 5898:
LABEL_3800:
              result = L"ERROR_NODE_CANNOT_BE_CLUSTERED";
              break;
            case 5899:
LABEL_3801:
              result = L"ERROR_CLUSTER_WRONG_OS_VERSION";
              break;
            case 5900:
LABEL_3802:
              result = L"ERROR_CLUSTER_CANT_CREATE_DUP_CLUSTER_NAME";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        return L"ERROR_ENCRYPTION_FAILED";
      }
      if ( a1 <= 6118 )
      {
        if ( a1 != 6118 )
        {
          switch ( a1 )
          {
            case 6001:
LABEL_3807:
              result = L"ERROR_DECRYPTION_FAILED";
              break;
            case 6002:
LABEL_3808:
              result = L"ERROR_FILE_ENCRYPTED";
              break;
            case 6003:
LABEL_3809:
              result = L"ERROR_NO_RECOVERY_POLICY";
              break;
            case 6004:
LABEL_3810:
              result = L"ERROR_NO_EFS";
              break;
            case 6005:
LABEL_3811:
              result = L"ERROR_WRONG_EFS";
              break;
            case 6006:
LABEL_3812:
              result = L"ERROR_NO_USER_KEYS";
              break;
            case 6007:
LABEL_3813:
              result = L"ERROR_FILE_NOT_ENCRYPTED";
              break;
            case 6008:
LABEL_3814:
              result = L"ERROR_NOT_EXPORT_FORMAT";
              break;
            case 6009:
LABEL_3815:
              result = L"ERROR_FILE_READ_ONLY";
              break;
            case 6010:
LABEL_3816:
              result = L"ERROR_DIR_EFS_DISALLOWED";
              break;
            case 6011:
LABEL_3817:
              result = L"ERROR_EFS_SERVER_NOT_TRUSTED";
              break;
            case 6012:
LABEL_3818:
              result = L"ERROR_BAD_RECOVERY_POLICY";
              break;
            case 6013:
LABEL_3819:
              result = L"ERROR_EFS_ALG_BLOB_TOO_BIG";
              break;
            case 6014:
LABEL_3820:
              result = L"ERROR_VOLUME_NOT_SUPPORT_EFS";
              break;
            case 6015:
LABEL_3821:
              result = L"ERROR_EFS_DISABLED";
              break;
            case 6016:
LABEL_3822:
              result = L"ERROR_EFS_VERSION_NOT_SUPPORT";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        return L"ERROR_NO_BROWSER_SERVERS_FOUND";
      }
      if ( a1 > 8260 )
      {
        switch ( a1 )
        {
          case 8261:
LABEL_4081:
            result = L"ERROR_DS_SORT_CONTROL_MISSING";
            break;
          case 8262:
LABEL_4082:
            result = L"ERROR_DS_OFFSET_RANGE_ERROR";
            break;
          case 8301:
LABEL_3968:
            result = L"ERROR_DS_ROOT_MUST_BE_NC";
            break;
          case 8302:
LABEL_3969:
            result = L"ERROR_DS_ADD_REPLICA_INHIBITED";
            break;
          case 8303:
LABEL_3970:
            result = L"ERROR_DS_ATT_NOT_DEF_IN_SCHEMA";
            break;
          case 8304:
LABEL_3971:
            result = L"ERROR_DS_MAX_OBJ_SIZE_EXCEEDED";
            break;
          case 8305:
LABEL_3972:
            result = L"ERROR_DS_OBJ_STRING_NAME_EXISTS";
            break;
          case 8306:
LABEL_3973:
            result = L"ERROR_DS_NO_RDN_DEFINED_IN_SCHEMA";
            break;
          case 8307:
LABEL_3974:
            result = L"ERROR_DS_RDN_DOESNT_MATCH_SCHEMA";
            break;
          case 8308:
LABEL_3975:
            result = L"ERROR_DS_NO_REQUESTED_ATTS_FOUND";
            break;
          case 8309:
LABEL_3976:
            result = L"ERROR_DS_USER_BUFFER_TO_SMALL";
            break;
          case 8310:
LABEL_3977:
            result = L"ERROR_DS_ATT_IS_NOT_ON_OBJ";
            break;
          case 8311:
LABEL_3978:
            result = L"ERROR_DS_ILLEGAL_MOD_OPERATION";
            break;
          case 8312:
LABEL_3979:
            result = L"ERROR_DS_OBJ_TOO_LARGE";
            break;
          case 8313:
LABEL_3980:
            result = L"ERROR_DS_BAD_INSTANCE_TYPE";
            break;
          case 8314:
LABEL_3981:
            result = L"ERROR_DS_MASTERDSA_REQUIRED";
            break;
          case 8315:
LABEL_3982:
            result = L"ERROR_DS_OBJECT_CLASS_REQUIRED";
            break;
          case 8316:
LABEL_3983:
            result = L"ERROR_DS_MISSING_REQUIRED_ATT";
            break;
          case 8317:
LABEL_3984:
            result = L"ERROR_DS_ATT_NOT_DEF_FOR_CLASS";
            break;
          case 8318:
LABEL_3985:
            result = L"ERROR_DS_ATT_ALREADY_EXISTS";
            break;
          case 8320:
LABEL_3986:
            result = L"ERROR_DS_CANT_ADD_ATT_VALUES";
            break;
          case 8321:
LABEL_3987:
            result = L"ERROR_DS_SINGLE_VALUE_CONSTRAINT";
            break;
          case 8322:
LABEL_3988:
            result = L"ERROR_DS_RANGE_CONSTRAINT";
            break;
          case 8323:
LABEL_3989:
            result = L"ERROR_DS_ATT_VAL_ALREADY_EXISTS";
            break;
          case 8324:
LABEL_3990:
            result = L"ERROR_DS_CANT_REM_MISSING_ATT";
            break;
          case 8325:
LABEL_3991:
            result = L"ERROR_DS_CANT_REM_MISSING_ATT_VAL";
            break;
          case 8326:
LABEL_3992:
            result = L"ERROR_DS_ROOT_CANT_BE_SUBREF";
            break;
          case 8327:
LABEL_3993:
            result = L"ERROR_DS_NO_CHAINING";
            break;
          case 8328:
LABEL_3994:
            result = L"ERROR_DS_NO_CHAINED_EVAL";
            break;
          case 8329:
LABEL_3995:
            result = L"ERROR_DS_NO_PARENT_OBJECT";
            break;
          case 8330:
LABEL_3996:
            result = L"ERROR_DS_PARENT_IS_AN_ALIAS";
            break;
          case 8331:
LABEL_3997:
            result = L"ERROR_DS_CANT_MIX_MASTER_AND_REPS";
            break;
          case 8332:
LABEL_3998:
            result = L"ERROR_DS_CHILDREN_EXIST";
            break;
          case 8333:
LABEL_3999:
            result = L"ERROR_DS_OBJ_NOT_FOUND";
            break;
          case 8334:
LABEL_4000:
            result = L"ERROR_DS_ALIASED_OBJ_MISSING";
            break;
          case 8335:
LABEL_4001:
            result = L"ERROR_DS_BAD_NAME_SYNTAX";
            break;
          case 8336:
LABEL_4002:
            result = L"ERROR_DS_ALIAS_POINTS_TO_ALIAS";
            break;
          case 8337:
LABEL_4003:
            result = L"ERROR_DS_CANT_DEREF_ALIAS";
            break;
          case 8338:
LABEL_4004:
            result = L"ERROR_DS_OUT_OF_SCOPE";
            break;
          case 8339:
LABEL_4083:
            result = L"ERROR_DS_OBJECT_BEING_REMOVED";
            break;
          case 8340:
LABEL_4005:
            result = L"ERROR_DS_CANT_DELETE_DSA_OBJ";
            break;
          case 8341:
LABEL_4006:
            result = L"ERROR_DS_GENERIC_ERROR";
            break;
          case 8342:
LABEL_4007:
            result = L"ERROR_DS_DSA_MUST_BE_INT_MASTER";
            break;
          case 8343:
LABEL_4008:
            result = L"ERROR_DS_CLASS_NOT_DSA";
            break;
          case 8344:
LABEL_4009:
            result = L"ERROR_DS_INSUFF_ACCESS_RIGHTS";
            break;
          case 8345:
LABEL_4010:
            result = L"ERROR_DS_ILLEGAL_SUPERIOR";
            break;
          case 8346:
LABEL_4011:
            result = L"ERROR_DS_ATTRIBUTE_OWNED_BY_SAM";
            break;
          case 8347:
LABEL_4012:
            result = L"ERROR_DS_NAME_TOO_MANY_PARTS";
            break;
          case 8348:
LABEL_4013:
            result = L"ERROR_DS_NAME_TOO_LONG";
            break;
          case 8349:
LABEL_4014:
            result = L"ERROR_DS_NAME_VALUE_TOO_LONG";
            break;
          case 8350:
LABEL_4015:
            result = L"ERROR_DS_NAME_UNPARSEABLE";
            break;
          case 8351:
LABEL_4016:
            result = L"ERROR_DS_NAME_TYPE_UNKNOWN";
            break;
          case 8352:
LABEL_4017:
            result = L"ERROR_DS_NOT_AN_OBJECT";
            break;
          case 8353:
LABEL_4018:
            result = L"ERROR_DS_SEC_DESC_TOO_SHORT";
            break;
          case 8354:
LABEL_4019:
            result = L"ERROR_DS_SEC_DESC_INVALID";
            break;
          case 8355:
LABEL_4020:
            result = L"ERROR_DS_NO_DELETED_NAME";
            break;
          case 8356:
LABEL_4021:
            result = L"ERROR_DS_SUBREF_MUST_HAVE_PARENT";
            break;
          case 8357:
LABEL_4022:
            result = L"ERROR_DS_NCNAME_MUST_BE_NC";
            break;
          case 8358:
LABEL_4023:
            result = L"ERROR_DS_CANT_ADD_SYSTEM_ONLY";
            break;
          case 8359:
LABEL_4024:
            result = L"ERROR_DS_CLASS_MUST_BE_CONCRETE";
            break;
          case 8360:
LABEL_4025:
            result = L"ERROR_DS_INVALID_DMD";
            break;
          case 8361:
LABEL_4026:
            result = L"ERROR_DS_OBJ_GUID_EXISTS";
            break;
          case 8362:
LABEL_4027:
            result = L"ERROR_DS_NOT_ON_BACKLINK";
            break;
          case 8363:
LABEL_4028:
            result = L"ERROR_DS_NO_CROSSREF_FOR_NC";
            break;
          case 8364:
LABEL_4029:
            result = L"ERROR_DS_SHUTTING_DOWN";
            break;
          case 8365:
LABEL_4030:
            result = L"ERROR_DS_UNKNOWN_OPERATION";
            break;
          case 8366:
LABEL_4031:
            result = L"ERROR_DS_INVALID_ROLE_OWNER";
            break;
          case 8367:
LABEL_4032:
            result = L"ERROR_DS_COULDNT_CONTACT_FSMO";
            break;
          case 8368:
LABEL_4033:
            result = L"ERROR_DS_CROSS_NC_DN_RENAME";
            break;
          case 8369:
LABEL_4034:
            result = L"ERROR_DS_CANT_MOD_SYSTEM_ONLY";
            break;
          case 8370:
LABEL_4035:
            result = L"ERROR_DS_REPLICATOR_ONLY";
            break;
          case 8371:
LABEL_4036:
            result = L"ERROR_DS_OBJ_CLASS_NOT_DEFINED";
            break;
          case 8372:
LABEL_4037:
            result = L"ERROR_DS_OBJ_CLASS_NOT_SUBCLASS";
            break;
          case 8373:
LABEL_4038:
            result = L"ERROR_DS_NAME_REFERENCE_INVALID";
            break;
          case 8374:
LABEL_4039:
            result = L"ERROR_DS_CROSS_REF_EXISTS";
            break;
          case 8375:
LABEL_4040:
            result = L"ERROR_DS_CANT_DEL_MASTER_CROSSREF";
            break;
          case 8376:
LABEL_4041:
            result = L"ERROR_DS_SUBTREE_NOTIFY_NOT_NC_HEAD";
            break;
          case 8377:
LABEL_4042:
            result = L"ERROR_DS_NOTIFY_FILTER_TOO_COMPLEX";
            break;
          case 8378:
LABEL_4043:
            result = L"ERROR_DS_DUP_RDN";
            break;
          case 8379:
LABEL_4044:
            result = L"ERROR_DS_DUP_OID";
            break;
          case 8380:
LABEL_4045:
            result = L"ERROR_DS_DUP_MAPI_ID";
            break;
          case 8381:
LABEL_4046:
            result = L"ERROR_DS_DUP_SCHEMA_ID_GUID";
            break;
          case 8382:
LABEL_4047:
            result = L"ERROR_DS_DUP_LDAP_DISPLAY_NAME";
            break;
          case 8383:
LABEL_4048:
            result = L"ERROR_DS_SEMANTIC_ATT_TEST";
            break;
          case 8384:
LABEL_4049:
            result = L"ERROR_DS_SYNTAX_MISMATCH";
            break;
          case 8385:
LABEL_4050:
            result = L"ERROR_DS_EXISTS_IN_MUST_HAVE";
            break;
          case 8386:
LABEL_4051:
            result = L"ERROR_DS_EXISTS_IN_MAY_HAVE";
            break;
          case 8387:
LABEL_4052:
            result = L"ERROR_DS_NONEXISTENT_MAY_HAVE";
            break;
          case 8388:
LABEL_4053:
            result = L"ERROR_DS_NONEXISTENT_MUST_HAVE";
            break;
          case 8389:
LABEL_4054:
            result = L"ERROR_DS_AUX_CLS_TEST_FAIL";
            break;
          case 8390:
LABEL_4055:
            result = L"ERROR_DS_NONEXISTENT_POSS_SUP";
            break;
          case 8391:
LABEL_4056:
            result = L"ERROR_DS_SUB_CLS_TEST_FAIL";
            break;
          case 8392:
LABEL_4057:
            result = L"ERROR_DS_BAD_RDN_ATT_ID_SYNTAX";
            break;
          case 8393:
LABEL_4058:
            result = L"ERROR_DS_EXISTS_IN_AUX_CLS";
            break;
          case 8394:
LABEL_4059:
            result = L"ERROR_DS_EXISTS_IN_SUB_CLS";
            break;
          case 8395:
LABEL_4060:
            result = L"ERROR_DS_EXISTS_IN_POSS_SUP";
            break;
          case 8396:
LABEL_4061:
            result = L"ERROR_DS_RECALCSCHEMA_FAILED";
            break;
          case 8397:
LABEL_4062:
            result = L"ERROR_DS_TREE_DELETE_NOT_FINISHED";
            break;
          case 8398:
LABEL_4063:
            result = L"ERROR_DS_CANT_DELETE";
            break;
          case 8399:
LABEL_4064:
            result = L"ERROR_DS_ATT_SCHEMA_REQ_ID";
            break;
          case 8400:
LABEL_4065:
            result = L"ERROR_DS_BAD_ATT_SCHEMA_SYNTAX";
            break;
          case 8401:
LABEL_4066:
            result = L"ERROR_DS_CANT_CACHE_ATT";
            break;
          case 8402:
LABEL_4067:
            result = L"ERROR_DS_CANT_CACHE_CLASS";
            break;
          case 8403:
LABEL_4068:
            result = L"ERROR_DS_CANT_REMOVE_ATT_CACHE";
            break;
          case 8404:
LABEL_4069:
            result = L"ERROR_DS_CANT_REMOVE_CLASS_CACHE";
            break;
          case 8405:
LABEL_4070:
            result = L"ERROR_DS_CANT_RETRIEVE_DN";
            break;
          case 8406:
LABEL_4071:
            result = L"ERROR_DS_MISSING_SUPREF";
            break;
          case 8407:
LABEL_4072:
            result = L"ERROR_DS_CANT_RETRIEVE_INSTANCE";
            break;
          case 8408:
LABEL_4073:
            result = L"ERROR_DS_CODE_INCONSISTENCY";
            break;
          case 8409:
LABEL_4074:
            result = L"ERROR_DS_DATABASE_ERROR";
            break;
          case 8410:
LABEL_4075:
            result = L"ERROR_DS_GOVERNSID_MISSING";
            break;
          case 8411:
LABEL_4076:
            result = L"ERROR_DS_MISSING_EXPECTED_ATT";
            break;
          case 8412:
LABEL_4077:
            result = L"ERROR_DS_NCNAME_MISSING_CR_REF";
            break;
          case 8413:
LABEL_4078:
            result = L"ERROR_DS_SECURITY_CHECKING_ERROR";
            break;
          case 8414:
LABEL_4079:
            result = L"ERROR_DS_SCHEMA_NOT_LOADED";
            break;
          case 8415:
LABEL_4080:
            result = L"ERROR_DS_SCHEMA_ALLOC_FAILED";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 == 8260 )
        return L"ERROR_DS_REFERRAL_LIMIT_EXCEEDED";
      if ( a1 > 8201 )
      {
        switch ( a1 )
        {
          case 8202:
LABEL_3909:
            result = L"ERROR_DS_NO_ATTRIBUTE_OR_VALUE";
            break;
          case 8203:
LABEL_3910:
            result = L"ERROR_DS_INVALID_ATTRIBUTE_SYNTAX";
            break;
          case 8204:
LABEL_3911:
            result = L"ERROR_DS_ATTRIBUTE_TYPE_UNDEFINED";
            break;
          case 8205:
LABEL_3912:
            result = L"ERROR_DS_ATTRIBUTE_OR_VALUE_EXISTS";
            break;
          case 8206:
LABEL_3913:
            result = L"ERROR_DS_BUSY";
            break;
          case 8207:
LABEL_3914:
            result = L"ERROR_DS_UNAVAILABLE";
            break;
          case 8208:
LABEL_3915:
            result = L"ERROR_DS_NO_RIDS_ALLOCATED";
            break;
          case 8209:
LABEL_3916:
            result = L"ERROR_DS_NO_MORE_RIDS";
            break;
          case 8210:
LABEL_3917:
            result = L"ERROR_DS_INCORRECT_ROLE_OWNER";
            break;
          case 8211:
LABEL_3918:
            result = L"ERROR_DS_RIDMGR_INIT_ERROR";
            break;
          case 8212:
LABEL_3919:
            result = L"ERROR_DS_OBJ_CLASS_VIOLATION";
            break;
          case 8213:
LABEL_3920:
            result = L"ERROR_DS_CANT_ON_NON_LEAF";
            break;
          case 8214:
LABEL_3921:
            result = L"ERROR_DS_CANT_ON_RDN";
            break;
          case 8215:
LABEL_3922:
            result = L"ERROR_DS_CANT_MOD_OBJ_CLASS";
            break;
          case 8216:
LABEL_3923:
            result = L"ERROR_DS_CROSS_DOM_MOVE_ERROR";
            break;
          case 8217:
LABEL_3924:
            result = L"ERROR_DS_GC_NOT_AVAILABLE";
            break;
          case 8218:
LABEL_3925:
            result = L"ERROR_SHARED_POLICY";
            break;
          case 8219:
LABEL_3926:
            result = L"ERROR_POLICY_OBJECT_NOT_FOUND";
            break;
          case 8220:
LABEL_3927:
            result = L"ERROR_POLICY_ONLY_IN_DS";
            break;
          case 8221:
LABEL_3928:
            result = L"ERROR_PROMOTION_ACTIVE";
            break;
          case 8222:
LABEL_3929:
            result = L"ERROR_NO_PROMOTION_ACTIVE";
            break;
          case 8224:
LABEL_3930:
            result = L"ERROR_DS_OPERATIONS_ERROR";
            break;
          case 8225:
LABEL_3931:
            result = L"ERROR_DS_PROTOCOL_ERROR";
            break;
          case 8226:
LABEL_3932:
            result = L"ERROR_DS_TIMELIMIT_EXCEEDED";
            break;
          case 8227:
LABEL_3933:
            result = L"ERROR_DS_SIZELIMIT_EXCEEDED";
            break;
          case 8228:
LABEL_3934:
            result = L"ERROR_DS_ADMIN_LIMIT_EXCEEDED";
            break;
          case 8229:
LABEL_3935:
            result = L"ERROR_DS_COMPARE_FALSE";
            break;
          case 8230:
LABEL_3936:
            result = L"ERROR_DS_COMPARE_TRUE";
            break;
          case 8231:
LABEL_3937:
            result = L"ERROR_DS_AUTH_METHOD_NOT_SUPPORTED";
            break;
          case 8232:
LABEL_3938:
            result = L"ERROR_DS_STRONG_AUTH_REQUIRED";
            break;
          case 8233:
LABEL_3939:
            result = L"ERROR_DS_INAPPROPRIATE_AUTH";
            break;
          case 8234:
            return L"ERROR_DS_AUTH_UNKNOWN";
          case 8235:
LABEL_3941:
            result = L"ERROR_DS_REFERRAL";
            break;
          case 8236:
LABEL_3942:
            result = L"ERROR_DS_UNAVAILABLE_CRIT_EXTENSION";
            break;
          case 8237:
LABEL_3943:
            result = L"ERROR_DS_CONFIDENTIALITY_REQUIRED";
            break;
          case 8238:
LABEL_3944:
            result = L"ERROR_DS_INAPPROPRIATE_MATCHING";
            break;
          case 8239:
LABEL_3945:
            result = L"ERROR_DS_CONSTRAINT_VIOLATION";
            break;
          case 8240:
LABEL_3946:
            result = L"ERROR_DS_NO_SUCH_OBJECT";
            break;
          case 8241:
LABEL_3947:
            result = L"ERROR_DS_ALIAS_PROBLEM";
            break;
          case 8242:
LABEL_3948:
            result = L"ERROR_DS_INVALID_DN_SYNTAX";
            break;
          case 8243:
LABEL_3949:
            result = L"ERROR_DS_IS_LEAF";
            break;
          case 8244:
LABEL_3950:
            result = L"ERROR_DS_ALIAS_DEREF_PROBLEM";
            break;
          case 8245:
LABEL_3951:
            result = L"ERROR_DS_UNWILLING_TO_PERFORM";
            break;
          case 8246:
LABEL_3952:
            result = L"ERROR_DS_LOOP_DETECT";
            break;
          case 8247:
LABEL_3953:
            result = L"ERROR_DS_NAMING_VIOLATION";
            break;
          case 8248:
LABEL_3954:
            result = L"ERROR_DS_OBJECT_RESULTS_TOO_LARGE";
            break;
          case 8249:
LABEL_3955:
            result = L"ERROR_DS_AFFECTS_MULTIPLE_DSAS";
            break;
          case 8250:
LABEL_3956:
            result = L"ERROR_DS_SERVER_DOWN";
            break;
          case 8251:
LABEL_3957:
            result = L"ERROR_DS_LOCAL_ERROR";
            break;
          case 8252:
LABEL_3958:
            result = L"ERROR_DS_ENCODING_ERROR";
            break;
          case 8253:
LABEL_3959:
            result = L"ERROR_DS_DECODING_ERROR";
            break;
          case 8254:
LABEL_3960:
            result = L"ERROR_DS_FILTER_UNKNOWN";
            break;
          case 8255:
LABEL_3961:
            result = L"ERROR_DS_PARAM_ERROR";
            break;
          case 8256:
LABEL_3962:
            result = L"ERROR_DS_NOT_SUPPORTED";
            break;
          case 8257:
LABEL_3963:
            result = L"ERROR_DS_NO_RESULTS_RETURNED";
            break;
          case 8258:
LABEL_3964:
            result = L"ERROR_DS_CONTROL_NOT_FOUND";
            break;
          case 8259:
LABEL_3965:
            result = L"ERROR_DS_CLIENT_LOOP";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 == 8201 )
        return L"ERROR_DS_MEMBERSHIP_EVALUATED_LOCALLY";
      if ( a1 <= 7045 )
      {
        if ( a1 == 7045 )
          return L"ERROR_CTX_WINSTATION_ACCESS_DENIED";
        if ( a1 > 7014 )
        {
          switch ( a1 )
          {
            case 7015:
LABEL_3860:
              result = L"ERROR_CTX_MODEM_RESPONSE_BUSY";
              break;
            case 7016:
LABEL_3861:
              result = L"ERROR_CTX_MODEM_RESPONSE_VOICE";
              break;
            case 7017:
LABEL_3862:
              result = L"ERROR_CTX_TD_ERROR";
              break;
            case 7022:
LABEL_3863:
              result = L"ERROR_CTX_WINSTATION_NOT_FOUND";
              break;
            case 7023:
LABEL_3864:
              result = L"ERROR_CTX_WINSTATION_ALREADY_EXISTS";
              break;
            case 7024:
LABEL_3865:
              result = L"ERROR_CTX_WINSTATION_BUSY";
              break;
            case 7025:
LABEL_3866:
              result = L"ERROR_CTX_BAD_VIDEO_MODE";
              break;
            case 7035:
              return L"ERROR_CTX_GRAPHICS_INVALID";
            case 7037:
LABEL_3868:
              result = L"ERROR_CTX_LOGON_DISABLED";
              break;
            case 7038:
LABEL_3869:
              result = L"ERROR_CTX_NOT_CONSOLE";
              break;
            case 7040:
LABEL_3870:
              result = L"ERROR_CTX_CLIENT_QUERY_TIMEOUT";
              break;
            case 7041:
LABEL_3871:
              result = L"ERROR_CTX_CONSOLE_DISCONNECT";
              break;
            case 7042:
LABEL_3872:
              result = L"ERROR_CTX_CONSOLE_CONNECT";
              break;
            case 7044:
LABEL_3873:
              result = L"ERROR_CTX_SHADOW_DENIED";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        if ( a1 == 7014 )
          return L"ERROR_CTX_MODEM_RESPONSE_NO_DIALTONE";
        if ( a1 <= 7007 )
        {
          switch ( a1 )
          {
            case 7007:
              return L"ERROR_CTX_CLOSE_PENDING";
            case 6200:
              return L"SCHED_E_SERVICE_NOT_LOCALSYSTEM";
            case 7001:
              return L"ERROR_CTX_WINSTATION_NAME_INVALID";
            case 7002:
              return L"ERROR_CTX_INVALID_PD";
            case 7003:
              return L"ERROR_CTX_PD_NOT_FOUND";
            case 7004:
              return L"ERROR_CTX_WD_NOT_FOUND";
            case 7005:
              return L"ERROR_CTX_CANNOT_MAKE_EVENTLOG_ENTRY";
          }
          if ( a1 != 7006 )
            return L"Unknown";
          return L"ERROR_CTX_SERVICE_NAME_COLLISION";
        }
        switch ( a1 )
        {
          case 7008:
            return L"ERROR_CTX_NO_OUTBUF";
          case 7009:
            return L"ERROR_CTX_MODEM_INF_NOT_FOUND";
          case 7010:
            return L"ERROR_CTX_INVALID_MODEMNAME";
        }
        if ( a1 != 7011 )
        {
          if ( a1 == 7012 )
            return L"ERROR_CTX_MODEM_RESPONSE_TIMEOUT";
          else
            return L"ERROR_CTX_MODEM_RESPONSE_NO_CARRIER";
        }
        return L"ERROR_CTX_MODEM_RESPONSE_ERROR";
      }
      if ( a1 <= 8001 )
      {
        if ( a1 != 8001 )
        {
          switch ( a1 )
          {
            case 7049:
LABEL_3878:
              result = L"ERROR_CTX_INVALID_WD";
              break;
            case 7050:
LABEL_3879:
              result = L"ERROR_CTX_SHADOW_INVALID";
              break;
            case 7051:
LABEL_3880:
              result = L"ERROR_CTX_SHADOW_DISABLED";
              break;
            case 7052:
LABEL_3881:
              result = L"ERROR_CTX_CLIENT_LICENSE_IN_USE";
              break;
            case 7053:
LABEL_3882:
              result = L"ERROR_CTX_CLIENT_LICENSE_NOT_SET";
              break;
            case 7054:
LABEL_3883:
              result = L"ERROR_CTX_LICENSE_NOT_AVAILABLE";
              break;
            case 7055:
LABEL_3884:
              result = L"ERROR_CTX_LICENSE_CLIENT_INVALID";
              break;
            case 7056:
LABEL_3885:
              result = L"ERROR_CTX_LICENSE_EXPIRED";
              break;
            case 7057:
LABEL_3886:
              result = L"ERROR_CTX_SHADOW_NOT_RUNNING";
              break;
            case 7058:
LABEL_3887:
              result = L"ERROR_CTX_SHADOW_ENDED_BY_MODE_CHANGE";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        return L"FRS_ERR_INVALID_API_SEQUENCE";
      }
      if ( a1 != 8200 )
      {
        switch ( a1 )
        {
          case 8002:
            return L"FRS_ERR_STARTING_SERVICE";
          case 8003:
            return L"FRS_ERR_STOPPING_SERVICE";
          case 8004:
            return L"FRS_ERR_INTERNAL_API";
          case 8005:
            return L"FRS_ERR_INTERNAL";
          case 8006:
            return L"FRS_ERR_SERVICE_COMM";
          case 8007:
LABEL_3895:
            result = L"FRS_ERR_INSUFFICIENT_PRIV";
            break;
          case 8008:
LABEL_3896:
            result = L"FRS_ERR_AUTHENTICATION";
            break;
          case 8009:
LABEL_3897:
            result = L"FRS_ERR_PARENT_INSUFFICIENT_PRIV";
            break;
          case 8010:
LABEL_3898:
            result = L"FRS_ERR_PARENT_AUTHENTICATION";
            break;
          case 8011:
LABEL_3899:
            result = L"FRS_ERR_CHILD_TO_PARENT_COMM";
            break;
          case 8012:
LABEL_3900:
            result = L"FRS_ERR_PARENT_TO_CHILD_COMM";
            break;
          case 8013:
LABEL_3901:
            result = L"FRS_ERR_SYSVOL_POPULATE";
            break;
          case 8014:
LABEL_3902:
            result = L"FRS_ERR_SYSVOL_POPULATE_TIMEOUT";
            break;
          case 8015:
LABEL_3903:
            result = L"FRS_ERR_SYSVOL_IS_BUSY";
            break;
          case 8016:
LABEL_3904:
            result = L"FRS_ERR_SYSVOL_DEMOTE";
            break;
          case 8017:
LABEL_3905:
            result = L"FRS_ERR_INVALID_SERVICE_PARAMETER";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      return L"ERROR_DS_NOT_INSTALLED";
    }
    if ( a1 <= 9000 )
    {
      if ( a1 != 9000 )
      {
        switch ( a1 )
        {
          case 8417:
LABEL_4088:
            result = L"ERROR_DS_GCVERIFY_ERROR";
            break;
          case 8418:
LABEL_4089:
            result = L"ERROR_DS_DRA_SCHEMA_MISMATCH";
            break;
          case 8419:
LABEL_4090:
            result = L"ERROR_DS_CANT_FIND_DSA_OBJ";
            break;
          case 8420:
LABEL_4091:
            result = L"ERROR_DS_CANT_FIND_EXPECTED_NC";
            break;
          case 8421:
LABEL_4092:
            result = L"ERROR_DS_CANT_FIND_NC_IN_CACHE";
            break;
          case 8422:
LABEL_4093:
            result = L"ERROR_DS_CANT_RETRIEVE_CHILD";
            break;
          case 8423:
LABEL_4094:
            result = L"ERROR_DS_SECURITY_ILLEGAL_MODIFY";
            break;
          case 8424:
LABEL_4095:
            result = L"ERROR_DS_CANT_REPLACE_HIDDEN_REC";
            break;
          case 8425:
LABEL_4096:
            result = L"ERROR_DS_BAD_HIERARCHY_FILE";
            break;
          case 8426:
LABEL_4097:
            result = L"ERROR_DS_BUILD_HIERARCHY_TABLE_FAILED";
            break;
          case 8427:
LABEL_4098:
            result = L"ERROR_DS_CONFIG_PARAM_MISSING";
            break;
          case 8428:
LABEL_4099:
            result = L"ERROR_DS_COUNTING_AB_INDICES_FAILED";
            break;
          case 8429:
LABEL_4100:
            result = L"ERROR_DS_HIERARCHY_TABLE_MALLOC_FAILED";
            break;
          case 8430:
LABEL_4101:
            result = L"ERROR_DS_INTERNAL_FAILURE";
            break;
          case 8431:
LABEL_4102:
            result = L"ERROR_DS_UNKNOWN_ERROR";
            break;
          case 8432:
LABEL_4103:
            result = L"ERROR_DS_ROOT_REQUIRES_CLASS_TOP";
            break;
          case 8433:
LABEL_4104:
            result = L"ERROR_DS_REFUSING_FSMO_ROLES";
            break;
          case 8434:
LABEL_4105:
            result = L"ERROR_DS_MISSING_FSMO_SETTINGS";
            break;
          case 8435:
LABEL_4106:
            result = L"ERROR_DS_UNABLE_TO_SURRENDER_ROLES";
            break;
          case 8436:
LABEL_4107:
            result = L"ERROR_DS_DRA_GENERIC";
            break;
          case 8437:
LABEL_4108:
            result = L"ERROR_DS_DRA_INVALID_PARAMETER";
            break;
          case 8438:
LABEL_4109:
            result = L"ERROR_DS_DRA_BUSY";
            break;
          case 8439:
LABEL_4110:
            result = L"ERROR_DS_DRA_BAD_DN";
            break;
          case 8440:
LABEL_4111:
            result = L"ERROR_DS_DRA_BAD_NC";
            break;
          case 8441:
LABEL_4112:
            result = L"ERROR_DS_DRA_DN_EXISTS";
            break;
          case 8442:
LABEL_4113:
            result = L"ERROR_DS_DRA_INTERNAL_ERROR";
            break;
          case 8443:
LABEL_4114:
            result = L"ERROR_DS_DRA_INCONSISTENT_DIT";
            break;
          case 8444:
LABEL_4115:
            result = L"ERROR_DS_DRA_CONNECTION_FAILED";
            break;
          case 8445:
LABEL_4116:
            result = L"ERROR_DS_DRA_BAD_INSTANCE_TYPE";
            break;
          case 8446:
LABEL_4117:
            result = L"ERROR_DS_DRA_OUT_OF_MEM";
            break;
          case 8447:
LABEL_4118:
            result = L"ERROR_DS_DRA_MAIL_PROBLEM";
            break;
          case 8448:
LABEL_4119:
            result = L"ERROR_DS_DRA_REF_ALREADY_EXISTS";
            break;
          case 8449:
LABEL_4120:
            result = L"ERROR_DS_DRA_REF_NOT_FOUND";
            break;
          case 8450:
LABEL_4121:
            result = L"ERROR_DS_DRA_OBJ_IS_REP_SOURCE";
            break;
          case 8451:
LABEL_4122:
            result = L"ERROR_DS_DRA_DB_ERROR";
            break;
          case 8452:
LABEL_4123:
            result = L"ERROR_DS_DRA_NO_REPLICA";
            break;
          case 8453:
LABEL_4124:
            result = L"ERROR_DS_DRA_ACCESS_DENIED";
            break;
          case 8454:
LABEL_4125:
            result = L"ERROR_DS_DRA_NOT_SUPPORTED";
            break;
          case 8455:
LABEL_4126:
            result = L"ERROR_DS_DRA_RPC_CANCELLED";
            break;
          case 8456:
LABEL_4127:
            result = L"ERROR_DS_DRA_SOURCE_DISABLED";
            break;
          case 8457:
LABEL_4128:
            result = L"ERROR_DS_DRA_SINK_DISABLED";
            break;
          case 8458:
LABEL_4129:
            result = L"ERROR_DS_DRA_NAME_COLLISION";
            break;
          case 8459:
LABEL_4130:
            result = L"ERROR_DS_DRA_SOURCE_REINSTALLED";
            break;
          case 8460:
LABEL_4131:
            result = L"ERROR_DS_DRA_MISSING_PARENT";
            break;
          case 8461:
LABEL_4132:
            result = L"ERROR_DS_DRA_PREEMPTED";
            break;
          case 8462:
LABEL_4133:
            result = L"ERROR_DS_DRA_ABANDON_SYNC";
            break;
          case 8463:
LABEL_4134:
            result = L"ERROR_DS_DRA_SHUTDOWN";
            break;
          case 8464:
LABEL_4135:
            result = L"ERROR_DS_DRA_INCOMPATIBLE_PARTIAL_SET";
            break;
          case 8465:
LABEL_4136:
            result = L"ERROR_DS_DRA_SOURCE_IS_PARTIAL_REPLICA";
            break;
          case 8466:
LABEL_4137:
            result = L"ERROR_DS_DRA_EXTN_CONNECTION_FAILED";
            break;
          case 8467:
LABEL_4138:
            result = L"ERROR_DS_INSTALL_SCHEMA_MISMATCH";
            break;
          case 8468:
LABEL_4139:
            result = L"ERROR_DS_DUP_LINK_ID";
            break;
          case 8469:
LABEL_4140:
            result = L"ERROR_DS_NAME_ERROR_RESOLVING";
            break;
          case 8470:
LABEL_4141:
            result = L"ERROR_DS_NAME_ERROR_NOT_FOUND";
            break;
          case 8471:
LABEL_4142:
            result = L"ERROR_DS_NAME_ERROR_NOT_UNIQUE";
            break;
          case 8472:
LABEL_4143:
            result = L"ERROR_DS_NAME_ERROR_NO_MAPPING";
            break;
          case 8473:
LABEL_4144:
            result = L"ERROR_DS_NAME_ERROR_DOMAIN_ONLY";
            break;
          case 8474:
LABEL_4145:
            result = L"ERROR_DS_NAME_ERROR_NO_SYNTACTICAL_MAPPING";
            break;
          case 8475:
LABEL_4146:
            result = L"ERROR_DS_CONSTRUCTED_ATT_MOD";
            break;
          case 8476:
LABEL_4147:
            result = L"ERROR_DS_WRONG_OM_OBJ_CLASS";
            break;
          case 8477:
LABEL_4148:
            result = L"ERROR_DS_DRA_REPL_PENDING";
            break;
          case 8478:
LABEL_4149:
            result = L"ERROR_DS_DS_REQUIRED";
            break;
          case 8479:
LABEL_4150:
            result = L"ERROR_DS_INVALID_LDAP_DISPLAY_NAME";
            break;
          case 8480:
LABEL_4151:
            result = L"ERROR_DS_NON_BASE_SEARCH";
            break;
          case 8481:
LABEL_4152:
            result = L"ERROR_DS_CANT_RETRIEVE_ATTS";
            break;
          case 8482:
LABEL_4153:
            result = L"ERROR_DS_BACKLINK_WITHOUT_LINK";
            break;
          case 8483:
LABEL_4154:
            result = L"ERROR_DS_EPOCH_MISMATCH";
            break;
          case 8484:
LABEL_4155:
            result = L"ERROR_DS_SRC_NAME_MISMATCH";
            break;
          case 8485:
LABEL_4156:
            result = L"ERROR_DS_SRC_AND_DST_NC_IDENTICAL";
            break;
          case 8486:
LABEL_4157:
            result = L"ERROR_DS_DST_NC_MISMATCH";
            break;
          case 8487:
LABEL_4158:
            result = L"ERROR_DS_NOT_AUTHORITIVE_FOR_DST_NC";
            break;
          case 8488:
LABEL_4159:
            result = L"ERROR_DS_SRC_GUID_MISMATCH";
            break;
          case 8489:
LABEL_4160:
            result = L"ERROR_DS_CANT_MOVE_DELETED_OBJECT";
            break;
          case 8490:
LABEL_4161:
            result = L"ERROR_DS_PDC_OPERATION_IN_PROGRESS";
            break;
          case 8491:
LABEL_4162:
            result = L"ERROR_DS_CROSS_DOMAIN_CLEANUP_REQD";
            break;
          case 8492:
LABEL_4163:
            result = L"ERROR_DS_ILLEGAL_XDOM_MOVE_OPERATION";
            break;
          case 8493:
LABEL_4164:
            result = L"ERROR_DS_CANT_WITH_ACCT_GROUP_MEMBERSHPS";
            break;
          case 8494:
LABEL_4165:
            result = L"ERROR_DS_NC_MUST_HAVE_NC_PARENT";
            break;
          case 8495:
LABEL_4166:
            result = L"ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE";
            break;
          case 8496:
LABEL_4167:
            result = L"ERROR_DS_DST_DOMAIN_NOT_NATIVE";
            break;
          case 8497:
LABEL_4168:
            result = L"ERROR_DS_MISSING_INFRASTRUCTURE_CONTAINER";
            break;
          case 8498:
LABEL_4169:
            result = L"ERROR_DS_CANT_MOVE_ACCOUNT_GROUP";
            break;
          case 8499:
LABEL_4170:
            result = L"ERROR_DS_CANT_MOVE_RESOURCE_GROUP";
            break;
          case 8500:
LABEL_4171:
            result = L"ERROR_DS_INVALID_SEARCH_FLAG";
            break;
          case 8501:
LABEL_4172:
            result = L"ERROR_DS_NO_TREE_DELETE_ABOVE_NC";
            break;
          case 8502:
LABEL_4173:
            result = L"ERROR_DS_COULDNT_LOCK_TREE_FOR_DELETE";
            break;
          case 8503:
LABEL_4174:
            result = L"ERROR_DS_COULDNT_IDENTIFY_OBJECTS_FOR_TREE_DELETE";
            break;
          case 8504:
LABEL_4175:
            result = L"ERROR_DS_SAM_INIT_FAILURE";
            break;
          case 8505:
LABEL_4176:
            result = L"ERROR_DS_SENSITIVE_GROUP_VIOLATION";
            break;
          case 8506:
LABEL_4177:
            result = L"ERROR_DS_CANT_MOD_PRIMARYGROUPID";
            break;
          case 8507:
LABEL_4178:
            result = L"ERROR_DS_ILLEGAL_BASE_SCHEMA_MOD";
            break;
          case 8508:
LABEL_4179:
            result = L"ERROR_DS_NONSAFE_SCHEMA_CHANGE";
            break;
          case 8509:
LABEL_4180:
            result = L"ERROR_DS_SCHEMA_UPDATE_DISALLOWED";
            break;
          case 8510:
LABEL_4181:
            result = L"ERROR_DS_CANT_CREATE_UNDER_SCHEMA";
            break;
          case 8511:
LABEL_4182:
            result = L"ERROR_DS_INSTALL_NO_SRC_SCH_VERSION";
            break;
          case 8512:
LABEL_4183:
            result = L"ERROR_DS_INSTALL_NO_SCH_VERSION_IN_INIFILE";
            break;
          case 8513:
LABEL_4184:
            result = L"ERROR_DS_INVALID_GROUP_TYPE";
            break;
          case 8514:
LABEL_4185:
            result = L"ERROR_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN";
            break;
          case 8515:
LABEL_4186:
            result = L"ERROR_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN";
            break;
          case 8516:
LABEL_4187:
            result = L"ERROR_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER";
            break;
          case 8517:
LABEL_4188:
            result = L"ERROR_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER";
            break;
          case 8518:
LABEL_4189:
            result = L"ERROR_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER";
            break;
          case 8519:
LABEL_4190:
            result = L"ERROR_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER";
            break;
          case 8520:
LABEL_4191:
            result = L"ERROR_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER";
            break;
          case 8521:
LABEL_4192:
            result = L"ERROR_DS_HAVE_PRIMARY_MEMBERS";
            break;
          case 8522:
LABEL_4193:
            result = L"ERROR_DS_STRING_SD_CONVERSION_FAILED";
            break;
          case 8523:
LABEL_4194:
            result = L"ERROR_DS_NAMING_MASTER_GC";
            break;
          case 8524:
LABEL_4195:
            result = L"ERROR_DS_DNS_LOOKUP_FAILURE";
            break;
          case 8525:
LABEL_4196:
            result = L"ERROR_DS_COULDNT_UPDATE_SPNS";
            break;
          case 8526:
LABEL_4197:
            result = L"ERROR_DS_CANT_RETRIEVE_SD";
            break;
          case 8527:
LABEL_4198:
            result = L"ERROR_DS_KEY_NOT_UNIQUE";
            break;
          case 8528:
LABEL_4199:
            result = L"ERROR_DS_WRONG_LINKED_ATT_SYNTAX";
            break;
          case 8529:
LABEL_4200:
            result = L"ERROR_DS_SAM_NEED_BOOTKEY_PASSWORD";
            break;
          case 8530:
LABEL_4201:
            result = L"ERROR_DS_SAM_NEED_BOOTKEY_FLOPPY";
            break;
          case 8531:
LABEL_4202:
            result = L"ERROR_DS_CANT_START";
            break;
          case 8532:
LABEL_4203:
            result = L"ERROR_DS_INIT_FAILURE";
            break;
          case 8533:
LABEL_4204:
            result = L"ERROR_DS_NO_PKT_PRIVACY_ON_CONNECTION";
            break;
          case 8534:
LABEL_4205:
            result = L"ERROR_DS_SOURCE_DOMAIN_IN_FOREST";
            break;
          case 8535:
LABEL_4206:
            result = L"ERROR_DS_DESTINATION_DOMAIN_NOT_IN_FOREST";
            break;
          case 8536:
LABEL_4207:
            result = L"ERROR_DS_DESTINATION_AUDITING_NOT_ENABLED";
            break;
          case 8537:
LABEL_4208:
            result = L"ERROR_DS_CANT_FIND_DC_FOR_SRC_DOMAIN";
            break;
          case 8538:
LABEL_4209:
            result = L"ERROR_DS_SRC_OBJ_NOT_GROUP_OR_USER";
            break;
          case 8539:
LABEL_4210:
            result = L"ERROR_DS_SRC_SID_EXISTS_IN_FOREST";
            break;
          case 8540:
LABEL_4211:
            result = L"ERROR_DS_SRC_AND_DST_OBJECT_CLASS_MISMATCH";
            break;
          case 8541:
LABEL_4212:
            result = L"ERROR_SAM_INIT_FAILURE";
            break;
          case 8542:
LABEL_4213:
            result = L"ERROR_DS_DRA_SCHEMA_INFO_SHIP";
            break;
          case 8543:
LABEL_4214:
            result = L"ERROR_DS_DRA_SCHEMA_CONFLICT";
            break;
          case 8544:
LABEL_4215:
            result = L"ERROR_DS_DRA_EARLIER_SCHEMA_CONFLICT";
            break;
          case 8545:
LABEL_4216:
            result = L"ERROR_DS_DRA_OBJ_NC_MISMATCH";
            break;
          case 8546:
LABEL_4217:
            result = L"ERROR_DS_NC_STILL_HAS_DSAS";
            break;
          case 8547:
LABEL_4218:
            result = L"ERROR_DS_GC_REQUIRED";
            break;
          case 8548:
LABEL_4219:
            result = L"ERROR_DS_LOCAL_MEMBER_OF_LOCAL_ONLY";
            break;
          case 8549:
LABEL_4220:
            result = L"ERROR_DS_NO_FPO_IN_UNIVERSAL_GROUPS";
            break;
          case 8550:
LABEL_4221:
            result = L"ERROR_DS_CANT_ADD_TO_GC";
            break;
          case 8551:
LABEL_4222:
            result = L"ERROR_DS_NO_CHECKPOINT_WITH_PDC";
            break;
          case 8552:
LABEL_4223:
            result = L"ERROR_DS_SOURCE_AUDITING_NOT_ENABLED";
            break;
          case 8553:
LABEL_4224:
            result = L"ERROR_DS_CANT_CREATE_IN_NONDOMAIN_NC";
            break;
          case 8554:
LABEL_4225:
            result = L"ERROR_DS_INVALID_NAME_FOR_SPN";
            break;
          case 8555:
LABEL_4226:
            result = L"ERROR_DS_FILTER_USES_CONTRUCTED_ATTRS";
            break;
          case 8556:
LABEL_4227:
            result = L"ERROR_DS_UNICODEPWD_NOT_IN_QUOTES";
            break;
          case 8557:
LABEL_4228:
            result = L"ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED";
            break;
          case 8558:
LABEL_4229:
            result = L"ERROR_DS_MUST_BE_RUN_ON_DST_DC";
            break;
          case 8559:
LABEL_4230:
            result = L"ERROR_DS_SRC_DC_MUST_BE_SP4_OR_GREATER";
            break;
          case 8560:
LABEL_4231:
            result = L"ERROR_DS_CANT_TREE_DELETE_CRITICAL_OBJ";
            break;
          case 8561:
LABEL_4232:
            result = L"ERROR_DS_INIT_FAILURE_CONSOLE";
            break;
          case 8562:
LABEL_4233:
            result = L"ERROR_DS_SAM_INIT_FAILURE_CONSOLE";
            break;
          case 8563:
LABEL_4234:
            result = L"ERROR_DS_FOREST_VERSION_TOO_HIGH";
            break;
          case 8564:
LABEL_4235:
            result = L"ERROR_DS_DOMAIN_VERSION_TOO_HIGH";
            break;
          case 8565:
LABEL_4236:
            result = L"ERROR_DS_FOREST_VERSION_TOO_LOW";
            break;
          case 8566:
LABEL_4237:
            result = L"ERROR_DS_DOMAIN_VERSION_TOO_LOW";
            break;
          case 8567:
LABEL_4238:
            result = L"ERROR_DS_INCOMPATIBLE_VERSION";
            break;
          case 8568:
LABEL_4239:
            result = L"ERROR_DS_LOW_DSA_VERSION";
            break;
          case 8569:
LABEL_4240:
            result = L"ERROR_DS_NO_BEHAVIOR_VERSION_IN_MIXEDDOMAIN";
            break;
          case 8570:
LABEL_4241:
            result = L"ERROR_DS_NOT_SUPPORTED_SORT_ORDER";
            break;
          case 8571:
LABEL_4242:
            result = L"ERROR_DS_NAME_NOT_UNIQUE";
            break;
          case 8572:
            return L"ERROR_DS_MACHINE_ACCOUNT_CREATED_PRENT4";
          case 8573:
LABEL_4244:
            result = L"ERROR_DS_OUT_OF_VERSION_STORE";
            break;
          case 8574:
LABEL_4245:
            result = L"ERROR_DS_INCOMPATIBLE_CONTROLS_USED";
            break;
          case 8575:
LABEL_4246:
            result = L"ERROR_DS_NO_REF_DOMAIN";
            break;
          case 8576:
LABEL_4247:
            result = L"ERROR_DS_RESERVED_LINK_ID";
            break;
          case 8577:
LABEL_4248:
            result = L"ERROR_DS_LINK_ID_NOT_AVAILABLE";
            break;
          case 8578:
LABEL_4249:
            result = L"ERROR_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER";
            break;
          case 8579:
LABEL_4250:
            result = L"ERROR_DS_MODIFYDN_DISALLOWED_BY_INSTANCE_TYPE";
            break;
          case 8580:
LABEL_4251:
            result = L"ERROR_DS_NO_OBJECT_MOVE_IN_SCHEMA_NC";
            break;
          case 8581:
LABEL_4252:
            result = L"ERROR_DS_MODIFYDN_DISALLOWED_BY_FLAG";
            break;
          case 8582:
LABEL_4253:
            result = L"ERROR_DS_MODIFYDN_WRONG_GRANDPARENT";
            break;
          case 8583:
LABEL_4254:
            result = L"ERROR_DS_NAME_ERROR_TRUST_REFERRAL";
            break;
          case 8584:
LABEL_4255:
            result = L"ERROR_NOT_SUPPORTED_ON_STANDARD_SERVER";
            break;
          case 8585:
LABEL_4256:
            result = L"ERROR_DS_CANT_ACCESS_REMOTE_PART_OF_AD";
            break;
          case 8586:
LABEL_4257:
            result = L"ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE_V2";
            break;
          case 8587:
LABEL_4258:
            result = L"ERROR_DS_THREAD_LIMIT_EXCEEDED";
            break;
          case 8588:
LABEL_4259:
            result = L"ERROR_DS_NOT_CLOSEST";
            break;
          case 8589:
LABEL_4260:
            result = L"ERROR_DS_CANT_DERIVE_SPN_WITHOUT_SERVER_REF";
            break;
          case 8590:
LABEL_4261:
            result = L"ERROR_DS_SINGLE_USER_MODE_FAILED";
            break;
          case 8591:
LABEL_4262:
            result = L"ERROR_DS_NTDSCRIPT_SYNTAX_ERROR";
            break;
          case 8592:
LABEL_4263:
            result = L"ERROR_DS_NTDSCRIPT_PROCESS_ERROR";
            break;
          case 8593:
LABEL_4264:
            result = L"ERROR_DS_DIFFERENT_REPL_EPOCHS";
            break;
          case 8594:
LABEL_4265:
            result = L"ERROR_DS_DRS_EXTENSIONS_CHANGED";
            break;
          case 8595:
LABEL_4266:
            result = L"ERROR_DS_REPLICA_SET_CHANGE_NOT_ALLOWED_ON_DISABLED_CR";
            break;
          case 8596:
LABEL_4267:
            result = L"ERROR_DS_NO_MSDS_INTID";
            break;
          case 8597:
LABEL_4268:
            result = L"ERROR_DS_DUP_MSDS_INTID";
            break;
          case 8598:
LABEL_4269:
            result = L"ERROR_DS_EXISTS_IN_RDNATTID";
            break;
          case 8599:
LABEL_4270:
            result = L"ERROR_DS_AUTHORIZATION_FAILED";
            break;
          case 8600:
LABEL_4271:
            result = L"ERROR_DS_INVALID_SCRIPT";
            break;
          case 8601:
LABEL_4272:
            result = L"ERROR_DS_REMOTE_CROSSREF_OP_FAILED";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      return L"DNS_ERROR_RESPONSE_CODES_BASE";
    }
    if ( a1 <= 9500 )
    {
      if ( a1 != 9500 )
      {
        switch ( a1 )
        {
          case 9001:
LABEL_4277:
            result = L"DNS_ERROR_RCODE_FORMAT_ERROR";
            break;
          case 9002:
LABEL_4278:
            result = L"DNS_ERROR_RCODE_SERVER_FAILURE";
            break;
          case 9003:
LABEL_4279:
            result = L"DNS_ERROR_RCODE_NAME_ERROR";
            break;
          case 9004:
LABEL_4280:
            result = L"DNS_ERROR_RCODE_NOT_IMPLEMENTED";
            break;
          case 9005:
LABEL_4281:
            result = L"DNS_ERROR_RCODE_REFUSED";
            break;
          case 9006:
LABEL_4282:
            result = L"DNS_ERROR_RCODE_YXDOMAIN";
            break;
          case 9007:
LABEL_4283:
            result = L"DNS_ERROR_RCODE_YXRRSET";
            break;
          case 9008:
LABEL_4284:
            result = L"DNS_ERROR_RCODE_NXRRSET";
            break;
          case 9009:
LABEL_4285:
            result = L"DNS_ERROR_RCODE_NOTAUTH";
            break;
          case 9010:
LABEL_4286:
            result = L"DNS_ERROR_RCODE_NOTZONE";
            break;
          case 9016:
LABEL_4287:
            result = L"DNS_ERROR_RCODE_BADSIG";
            break;
          case 9017:
LABEL_4288:
            result = L"DNS_ERROR_RCODE_BADKEY";
            break;
          case 9018:
LABEL_4289:
            result = L"DNS_ERROR_RCODE_BADTIME";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      return L"DNS_ERROR_PACKET_FMT_BASE";
    }
    if ( a1 > 13857 )
    {
      if ( a1 <= 14000 )
      {
        if ( a1 == 14000 )
          return L"ERROR_SXS_SECTION_NOT_FOUND";
        switch ( a1 )
        {
          case 13858:
LABEL_4600:
            result = L"ERROR_IPSEC_IKE_INVALID_FILTER";
            break;
          case 13859:
LABEL_4601:
            result = L"ERROR_IPSEC_IKE_OUT_OF_MEMORY";
            break;
          case 13860:
LABEL_4602:
            result = L"ERROR_IPSEC_IKE_ADD_UPDATE_KEY_FAILED";
            break;
          case 13861:
LABEL_4603:
            result = L"ERROR_IPSEC_IKE_INVALID_POLICY";
            break;
          case 13862:
LABEL_4604:
            result = L"ERROR_IPSEC_IKE_UNKNOWN_DOI";
            break;
          case 13863:
LABEL_4605:
            result = L"ERROR_IPSEC_IKE_INVALID_SITUATION";
            break;
          case 13864:
LABEL_4606:
            result = L"ERROR_IPSEC_IKE_DH_FAILURE";
            break;
          case 13865:
LABEL_4607:
            result = L"ERROR_IPSEC_IKE_INVALID_GROUP";
            break;
          case 13866:
LABEL_4608:
            result = L"ERROR_IPSEC_IKE_ENCRYPT";
            break;
          case 13867:
LABEL_4609:
            result = L"ERROR_IPSEC_IKE_DECRYPT";
            break;
          case 13868:
LABEL_4610:
            result = L"ERROR_IPSEC_IKE_POLICY_MATCH";
            break;
          case 13869:
LABEL_4611:
            result = L"ERROR_IPSEC_IKE_UNSUPPORTED_ID";
            break;
          case 13870:
LABEL_4612:
            result = L"ERROR_IPSEC_IKE_INVALID_HASH";
            break;
          case 13871:
LABEL_4613:
            result = L"ERROR_IPSEC_IKE_INVALID_HASH_ALG";
            break;
          case 13872:
LABEL_4614:
            result = L"ERROR_IPSEC_IKE_INVALID_HASH_SIZE";
            break;
          case 13873:
LABEL_4615:
            result = L"ERROR_IPSEC_IKE_INVALID_ENCRYPT_ALG";
            break;
          case 13874:
LABEL_4616:
            result = L"ERROR_IPSEC_IKE_INVALID_AUTH_ALG";
            break;
          case 13875:
LABEL_4617:
            result = L"ERROR_IPSEC_IKE_INVALID_SIG";
            break;
          case 13876:
LABEL_4618:
            result = L"ERROR_IPSEC_IKE_LOAD_FAILED";
            break;
          case 13877:
LABEL_4619:
            result = L"ERROR_IPSEC_IKE_RPC_DELETE";
            break;
          case 13878:
LABEL_4620:
            result = L"ERROR_IPSEC_IKE_BENIGN_REINIT";
            break;
          case 13879:
LABEL_4621:
            result = L"ERROR_IPSEC_IKE_INVALID_RESPONDER_LIFETIME_NOTIFY";
            break;
          case 13881:
LABEL_4622:
            result = L"ERROR_IPSEC_IKE_INVALID_CERT_KEYLEN";
            break;
          case 13882:
LABEL_4623:
            result = L"ERROR_IPSEC_IKE_MM_LIMIT";
            break;
          case 13883:
LABEL_4624:
            result = L"ERROR_IPSEC_IKE_NEGOTIATION_DISABLED";
            break;
          case 13884:
LABEL_4625:
            result = L"ERROR_IPSEC_IKE_NEG_STATUS_END";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 <= 197120 )
      {
        if ( a1 == 197120 )
          return L"STG_S_CONVERTED";
        switch ( a1 )
        {
          case 14001:
LABEL_4630:
            result = L"ERROR_SXS_CANT_GEN_ACTCTX";
            break;
          case 14002:
LABEL_4631:
            result = L"ERROR_SXS_INVALID_ACTCTXDATA_FORMAT";
            break;
          case 14003:
LABEL_4632:
            result = L"ERROR_SXS_ASSEMBLY_NOT_FOUND";
            break;
          case 14004:
LABEL_4633:
            result = L"ERROR_SXS_MANIFEST_FORMAT_ERROR";
            break;
          case 14005:
LABEL_4634:
            result = L"ERROR_SXS_MANIFEST_PARSE_ERROR";
            break;
          case 14006:
LABEL_4635:
            result = L"ERROR_SXS_ACTIVATION_CONTEXT_DISABLED";
            break;
          case 14007:
LABEL_4636:
            result = L"ERROR_SXS_KEY_NOT_FOUND";
            break;
          case 14008:
LABEL_4637:
            result = L"ERROR_SXS_VERSION_CONFLICT";
            break;
          case 14009:
LABEL_4638:
            result = L"ERROR_SXS_WRONG_SECTION_TYPE";
            break;
          case 14010:
LABEL_4639:
            result = L"ERROR_SXS_THREAD_QUERIES_DISABLED";
            break;
          case 14011:
            return L"ERROR_SXS_PROCESS_DEFAULT_ALREADY_SET";
          case 14012:
LABEL_4641:
            result = L"ERROR_SXS_UNKNOWN_ENCODING_GROUP";
            break;
          case 14013:
LABEL_4642:
            result = L"ERROR_SXS_UNKNOWN_ENCODING";
            break;
          case 14014:
LABEL_4643:
            result = L"ERROR_SXS_INVALID_XML_NAMESPACE_URI";
            break;
          case 14015:
LABEL_4644:
            result = L"ERROR_SXS_ROOT_MANIFEST_DEPENDENCY_NOT_INSTALLED";
            break;
          case 14016:
LABEL_4645:
            result = L"ERROR_SXS_LEAF_MANIFEST_DEPENDENCY_NOT_INSTALLED";
            break;
          case 14017:
LABEL_4646:
            result = L"ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE";
            break;
          case 14018:
LABEL_4647:
            result = L"ERROR_SXS_MANIFEST_MISSING_REQUIRED_DEFAULT_NAMESPACE";
            break;
          case 14019:
LABEL_4648:
            result = L"ERROR_SXS_MANIFEST_INVALID_REQUIRED_DEFAULT_NAMESPACE";
            break;
          case 14020:
LABEL_4649:
            result = L"ERROR_SXS_PRIVATE_MANIFEST_CROSS_PATH_WITH_REPARSE_POINT";
            break;
          case 14021:
LABEL_4650:
            result = L"ERROR_SXS_DUPLICATE_DLL_NAME";
            break;
          case 14022:
LABEL_4651:
            result = L"ERROR_SXS_DUPLICATE_WINDOWCLASS_NAME";
            break;
          case 14023:
LABEL_4652:
            result = L"ERROR_SXS_DUPLICATE_CLSID";
            break;
          case 14024:
LABEL_4653:
            result = L"ERROR_SXS_DUPLICATE_IID";
            break;
          case 14025:
LABEL_4654:
            result = L"ERROR_SXS_DUPLICATE_TLBID";
            break;
          case 14026:
LABEL_4655:
            result = L"ERROR_SXS_DUPLICATE_PROGID";
            break;
          case 14027:
LABEL_4656:
            result = L"ERROR_SXS_DUPLICATE_ASSEMBLY_NAME";
            break;
          case 14028:
LABEL_4657:
            result = L"ERROR_SXS_FILE_HASH_MISMATCH";
            break;
          case 14029:
LABEL_4658:
            result = L"ERROR_SXS_POLICY_PARSE_ERROR";
            break;
          case 14030:
LABEL_4659:
            result = L"ERROR_SXS_XML_E_MISSINGQUOTE";
            break;
          case 14031:
LABEL_4660:
            result = L"ERROR_SXS_XML_E_COMMENTSYNTAX";
            break;
          case 14032:
LABEL_4661:
            result = L"ERROR_SXS_XML_E_BADSTARTNAMECHAR";
            break;
          case 14033:
LABEL_4662:
            result = L"ERROR_SXS_XML_E_BADNAMECHAR";
            break;
          case 14034:
LABEL_4663:
            result = L"ERROR_SXS_XML_E_BADCHARINSTRING";
            break;
          case 14035:
LABEL_4664:
            result = L"ERROR_SXS_XML_E_XMLDECLSYNTAX";
            break;
          case 14036:
LABEL_4665:
            result = L"ERROR_SXS_XML_E_BADCHARDATA";
            break;
          case 14037:
LABEL_4666:
            result = L"ERROR_SXS_XML_E_MISSINGWHITESPACE";
            break;
          case 14038:
LABEL_4667:
            result = L"ERROR_SXS_XML_E_EXPECTINGTAGEND";
            break;
          case 14039:
LABEL_4668:
            result = L"ERROR_SXS_XML_E_MISSINGSEMICOLON";
            break;
          case 14040:
LABEL_4669:
            result = L"ERROR_SXS_XML_E_UNBALANCEDPAREN";
            break;
          case 14041:
LABEL_4670:
            result = L"ERROR_SXS_XML_E_INTERNALERROR";
            break;
          case 14042:
LABEL_4671:
            result = L"ERROR_SXS_XML_E_UNEXPECTED_WHITESPACE";
            break;
          case 14043:
LABEL_4672:
            result = L"ERROR_SXS_XML_E_INCOMPLETE_ENCODING";
            break;
          case 14044:
LABEL_4673:
            result = L"ERROR_SXS_XML_E_MISSING_PAREN";
            break;
          case 14045:
LABEL_4674:
            result = L"ERROR_SXS_XML_E_EXPECTINGCLOSEQUOTE";
            break;
          case 14046:
LABEL_4675:
            result = L"ERROR_SXS_XML_E_MULTIPLE_COLONS";
            break;
          case 14047:
LABEL_4676:
            result = L"ERROR_SXS_XML_E_INVALID_DECIMAL";
            break;
          case 14048:
LABEL_4677:
            result = L"ERROR_SXS_XML_E_INVALID_HEXIDECIMAL";
            break;
          case 14049:
LABEL_4678:
            result = L"ERROR_SXS_XML_E_INVALID_UNICODE";
            break;
          case 14050:
LABEL_4679:
            result = L"ERROR_SXS_XML_E_WHITESPACEORQUESTIONMARK";
            break;
          case 14051:
LABEL_4680:
            result = L"ERROR_SXS_XML_E_UNEXPECTEDENDTAG";
            break;
          case 14052:
LABEL_4681:
            result = L"ERROR_SXS_XML_E_UNCLOSEDTAG";
            break;
          case 14053:
LABEL_4682:
            result = L"ERROR_SXS_XML_E_DUPLICATEATTRIBUTE";
            break;
          case 14054:
LABEL_4683:
            result = L"ERROR_SXS_XML_E_MULTIPLEROOTS";
            break;
          case 14055:
LABEL_4684:
            result = L"ERROR_SXS_XML_E_INVALIDATROOTLEVEL";
            break;
          case 14056:
LABEL_4685:
            result = L"ERROR_SXS_XML_E_BADXMLDECL";
            break;
          case 14057:
LABEL_4686:
            result = L"ERROR_SXS_XML_E_MISSINGROOT";
            break;
          case 14058:
LABEL_4687:
            result = L"ERROR_SXS_XML_E_UNEXPECTEDEOF";
            break;
          case 14059:
LABEL_4688:
            result = L"ERROR_SXS_XML_E_BADPEREFINSUBSET";
            break;
          case 14060:
LABEL_4689:
            result = L"ERROR_SXS_XML_E_UNCLOSEDSTARTTAG";
            break;
          case 14061:
LABEL_4690:
            result = L"ERROR_SXS_XML_E_UNCLOSEDENDTAG";
            break;
          case 14062:
LABEL_4691:
            result = L"ERROR_SXS_XML_E_UNCLOSEDSTRING";
            break;
          case 14063:
LABEL_4692:
            result = L"ERROR_SXS_XML_E_UNCLOSEDCOMMENT";
            break;
          case 14064:
LABEL_4693:
            result = L"ERROR_SXS_XML_E_UNCLOSEDDECL";
            break;
          case 14065:
LABEL_4694:
            result = L"ERROR_SXS_XML_E_UNCLOSEDCDATA";
            break;
          case 14066:
LABEL_4695:
            result = L"ERROR_SXS_XML_E_RESERVEDNAMESPACE";
            break;
          case 14067:
LABEL_4696:
            result = L"ERROR_SXS_XML_E_INVALIDENCODING";
            break;
          case 14068:
LABEL_4697:
            result = L"ERROR_SXS_XML_E_INVALIDSWITCH";
            break;
          case 14069:
LABEL_4698:
            result = L"ERROR_SXS_XML_E_BADXMLCASE";
            break;
          case 14070:
LABEL_4699:
            result = L"ERROR_SXS_XML_E_INVALID_STANDALONE";
            break;
          case 14071:
LABEL_4700:
            result = L"ERROR_SXS_XML_E_UNEXPECTED_STANDALONE";
            break;
          case 14072:
LABEL_4701:
            result = L"ERROR_SXS_XML_E_INVALID_VERSION";
            break;
          case 14073:
LABEL_4702:
            result = L"ERROR_SXS_XML_E_MISSINGEQUALS";
            break;
          case 14074:
LABEL_4703:
            result = L"ERROR_SXS_PROTECTION_RECOVERY_FAILED";
            break;
          case 14075:
LABEL_4704:
            result = L"ERROR_SXS_PROTECTION_PUBLIC_KEY_TOO_SHORT";
            break;
          case 14076:
LABEL_4705:
            result = L"ERROR_SXS_PROTECTION_CATALOG_NOT_VALID";
            break;
          case 14077:
LABEL_4706:
            result = L"ERROR_SXS_UNTRANSLATABLE_HRESULT";
            break;
          case 14078:
LABEL_4707:
            result = L"ERROR_SXS_PROTECTION_CATALOG_FILE_MISSING";
            break;
          case 14079:
LABEL_4708:
            result = L"ERROR_SXS_MISSING_ASSEMBLY_IDENTITY_ATTRIBUTE";
            break;
          case 14080:
LABEL_4709:
            result = L"ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE_NAME";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 <= 262736 )
      {
        if ( a1 == 262736 )
          return L"VFW_S_RESOURCE_NOT_NEEDED";
        if ( a1 > 262480 )
        {
          if ( a1 > 262607 )
          {
            if ( a1 > 262631 )
            {
              switch ( a1 )
              {
                case 262639:
                  return L"MK_S_LAST";
                case 262658:
                  return L"EVENT_S_NOSUBSCRIBERS";
                case 262701:
                  return L"VFW_S_DUPLICATE_NAME";
                case 262711:
                  return L"VFW_S_STATE_INTERMEDIATE";
                case 262722:
                  return L"VFW_S_PARTIAL_RENDER";
                case 262725:
                  return L"VFW_S_SOME_DATA_IGNORED";
                case 262726:
                  return L"VFW_S_CONNECTIONS_DEFERRED";
              }
            }
            else
            {
              switch ( a1 )
              {
                case 262631:
                  return L"MK_S_MONIKERALREADYREGISTERED";
                case 262608:
                  return L"CLIPBRD_S_FIRST";
                case 262623:
                  return L"CLIPBRD_S_LAST";
                case 262624:
                  return L"MK_S_FIRST";
                case 262626:
                  return L"MK_S_REDUCED_TO_SELF";
                case 262628:
                  return L"MK_S_ME";
                case 262629:
                  return L"MK_S_HIM";
                case 262630:
                  return L"MK_S_US";
              }
            }
          }
          else
          {
            if ( a1 == 262607 )
              return L"CONVERT10_S_LAST";
            if ( a1 > 262543 )
            {
              switch ( a1 )
              {
                case 262544:
                  return L"CLIENTSITE_S_FIRST";
                case 262559:
                  return L"CLIENTSITE_S_LAST";
                case 262560:
                  return L"INPLACE_S_FIRST";
                case 262575:
                  return L"INPLACE_S_LAST";
                case 262576:
                  return L"ENUM_S_FIRST";
                case 262591:
                  return L"ENUM_S_LAST";
                case 262592:
                  return L"CONVERT10_S_FIRST";
              }
            }
            else
            {
              if ( a1 == 262543 )
                return L"OLEOBJ_S_LAST";
              if ( a1 > 262527 )
              {
                switch ( a1 )
                {
                  case 262528:
                    return L"OLEOBJ_S_FIRST";
                  case 262529:
                    return L"OLEOBJ_S_CANNOT_DOVERB_NOW";
                  case 262530:
                    return L"OLEOBJ_S_INVALIDHWND";
                }
              }
              else
              {
                switch ( a1 )
                {
                  case 262527:
                    return L"CACHE_S_LAST";
                  case 262495:
                    return L"REGDB_S_LAST";
                  case 262512:
                    return L"CACHE_S_FIRST";
                  case 262513:
                    return L"CACHE_S_SAMECACHE";
                  case 262514:
                    return L"CACHE_S_SOMECACHES_NOTUPDATED";
                }
              }
            }
          }
          return L"Unknown";
        }
        if ( a1 == 262480 )
          return L"REGDB_S_FIRST";
        if ( a1 > 262160 )
        {
          if ( a1 > 262416 )
          {
            switch ( a1 )
            {
              case 262431:
                return L"CLASSFACTORY_S_LAST";
              case 262432:
                return L"MARSHAL_S_FIRST";
              case 262447:
                return L"MARSHAL_S_LAST";
              case 262448:
                return L"DATA_S_FIRST";
              case 262463:
                return L"DATA_S_LAST";
              case 262464:
                return L"VIEW_S_FIRST";
              case 262479:
                return L"VIEW_S_LAST";
            }
          }
          else
          {
            switch ( a1 )
            {
              case 262416:
                return L"CLASSFACTORY_S_FIRST";
              case 262167:
                return L"WBEM_S_SOURCE_NOT_AVAILABLE";
              case 262399:
                return L"OLE_S_LAST";
              case 262400:
                return L"DRAGDROP_S_FIRST";
              case 262401:
                return L"DRAGDROP_S_CANCEL";
              case 262402:
                return L"DRAGDROP_S_USEDEFAULTCURSORS";
              case 262403:
                return L"VFW_S_NO_MORE_ITEMS";
              case 262415:
                return L"DRAGDROP_S_LAST";
            }
          }
          return L"Unknown";
        }
        if ( a1 == 262160 )
          return L"WBEM_S_PARTIAL_RESULTS";
        if ( a1 > 262146 )
        {
          switch ( a1 )
          {
            case 262147:
              return L"MS_S_ENDOFSTREAM & WBEM_S_DIFFERENT";
            case 262148:
              return L"WBEM_S_TIMEDOUT";
            case 262149:
              return L"WBEM_S_NO_MORE_DATA";
            case 262150:
              return L"WBEM_S_OPERATION_CANCELLED";
            case 262151:
              return L"WBEM_S_PENDING";
            case 262152:
              return L"WBEM_S_DUPLICATE_OBJECTS";
            case 262153:
              return L"WBEM_S_ACCESS_DENIED";
          }
          return L"Unknown";
        }
        if ( a1 == 262146 )
          return L"OLE_S_MAC_CLIPFORMAT & MS_S_NOUPDATE";
        if ( a1 > 197125 )
        {
          switch ( a1 )
          {
            case 197126:
              return L"STG_S_CANNOTCONSOLIDATE";
            case 262144:
              return L"OLE_S_FIRST";
            case 262145:
              return L"OLE_S_STATIC & MS_S_PENDING";
          }
          return L"Unknown";
        }
        switch ( a1 )
        {
          case 197125:
            return L"STG_S_CONSOLIDATIONFAILED";
          case 197121:
            return L"STG_S_BLOCK";
          case 197122:
            return L"STG_S_RETRYNOW";
          case 197123:
            return L"STG_S_MONITORING";
        }
        return L"STG_S_MULTIPLEOPENS";
      }
      if ( a1 <= 315402 )
      {
        if ( a1 == 315402 )
          return L"XACT_S_LOCALLY_OK";
        if ( a1 <= 267011 )
        {
          if ( a1 == 267011 )
            return L"SCHED_S_TASK_HAS_NOT_RUN";
          if ( a1 > 262768 )
          {
            switch ( a1 )
            {
              case 262782:
                return L"VFW_S_NOPREVIEWPIN";
              case 262784:
                return L"VFW_S_DVD_NON_ONE_SEQUENTIAL";
              case 262796:
                return L"VFW_S_DVD_CHANNEL_CONTENTS_NOT_AVAILABLE";
              case 262797:
                return L"VFW_S_DVD_NOT_ACCURATE";
              case 267008:
                return L"SCHED_S_TASK_READY";
              case 267009:
                return L"SCHED_S_TASK_RUNNING";
              case 267010:
                return L"SCHED_S_TASK_DISABLED";
            }
          }
          else
          {
            if ( a1 == 262768 )
              return L"VFW_S_NO_STOP_TIME";
            if ( a1 > 262752 )
            {
              switch ( a1 )
              {
                case 262755:
                  return L"VFW_S_RESERVED";
                case 262759:
                  return L"VFW_S_STREAM_OFF";
                case 262760:
                  return L"VFW_S_CANT_CUE";
              }
            }
            else
            {
              switch ( a1 )
              {
                case 262752:
                  return L"VFW_S_ESTIMATED";
                case 262740:
                  return L"VFW_S_MEDIA_TYPE_IGNORED";
                case 262743:
                  return L"VFW_S_VIDEO_NOT_RENDERED";
                case 262744:
                  return L"VFW_S_AUDIO_NOT_RENDERED";
                case 262746:
                  return L"VFW_S_RPZA";
              }
            }
          }
          return L"Unknown";
        }
        if ( a1 <= 315394 )
        {
          switch ( a1 )
          {
            case 315394:
              return L"XACT_S_READONLY";
            case 267012:
              return L"SCHED_S_TASK_NO_MORE_RUNS";
            case 267013:
              return L"SCHED_S_TASK_NOT_SCHEDULED";
            case 267014:
              return L"SCHED_S_TASK_TERMINATED";
            case 267015:
              return L"SCHED_S_TASK_NO_VALID_TRIGGERS";
            case 267016:
              return L"SCHED_S_EVENT_TRIGGER";
            case 315392:
              return L"XACT_S_FIRST";
            case 315393:
              return L"XACT_S_DEFECT";
          }
          return L"Unknown";
        }
        switch ( a1 )
        {
          case 315395:
            return L"XACT_S_SOMENORETAIN";
          case 315396:
            return L"XACT_S_OKINFORM";
          case 315397:
            return L"XACT_S_MADECHANGESCONTENT";
          case 315398:
            return L"XACT_S_MADECHANGESINFORM";
          case 315399:
            return L"XACT_S_ALLNORETAIN";
          case 315400:
            return L"XACT_S_ABORTING";
        }
        return L"XACT_S_SINGLEPHASE";
      }
      if ( a1 <= 1376266 )
      {
        if ( a1 == 1376266 )
          return L"DV_HALFDUPLEX";
        if ( a1 > 590612 )
        {
          switch ( a1 )
          {
            case 590613:
              return L"SEC_I_LOCAL_LOGON";
            case 590615:
              return L"SEC_I_CONTEXT_EXPIRED";
            case 590624:
              return L"SEC_I_INCOMPLETE_CREDENTIALS";
            case 590625:
              return L"SEC_I_RENEGOTIATE";
            case 590627:
              return L"SEC_I_NO_LSA_CONTEXT";
            case 593938:
              return L"CRYPT_I_NEW_PROTECTION_REQUIRED";
            case 1376261:
              return L"DV_FULLDUPLEX";
          }
        }
        else
        {
          switch ( a1 )
          {
            case 590612:
              return L"SEC_I_COMPLETE_AND_CONTINUE";
            case 315408:
              return L"XACT_S_LAST";
            case 319488:
              return L"CONTEXT_S_FIRST";
            case 319535:
              return L"CONTEXT_S_LAST";
            case 524306:
              return L"CO_S_NOTALLINTERFACES";
            case 524307:
              return L"CO_S_MACHINENAMENOTFOUND";
            case 590610:
              return L"SEC_I_CONTINUE_NEEDED";
            case 590611:
              return L"SEC_I_COMPLETE_NEEDED";
          }
        }
        return L"Unknown";
      }
      if ( a1 <= 142086658 )
      {
        switch ( a1 )
        {
          case 142086658:
            return L"DMUS_S_END";
          case 1376272:
            return L"DV_PENDING";
          case 141953135:
            return L"D3DOK_NOAUTOGEN";
          case 142082058:
            return L"DS_NO_VIRTUALIZATION";
          case 142086289:
            return L"DMUS_S_PARTIALLOAD";
          case 142086290:
            return L"DMUS_S_PARTIALDOWNLOAD";
          case 142086656:
            return L"DMUS_S_REQUEUE";
          case 142086657:
            return L"DMUS_S_FREE";
        }
        return L"Unknown";
      }
      switch ( a1 )
      {
        case 142086672:
          return L"DMUS_S_STRING_TRUNCATED";
        case 142086673:
          return L"DMUS_S_LAST_TOOL";
        case 142086674:
          return L"DMUS_S_OVER_CHORD";
        case 142086675:
          return L"DMUS_S_UP_OCTAVE";
        case 142086676:
          return L"DMUS_S_DOWN_OCTAVE";
        case 142086677:
          return L"DMUS_S_NOBUFFERCONTROL";
        case 142086678:
          return L"DMUS_S_GARBAGE_COLLECTED";
      }
      return L"Unknown";
    }
    if ( a1 == 13857 )
      return L"ERROR_IPSEC_IKE_GETSPIFAIL";
    if ( a1 <= 10104 )
    {
      if ( a1 == 10104 )
        return L"WSAEINVALIDPROCTABLE";
      if ( a1 <= 9719 )
      {
        if ( a1 != 9719 )
        {
          switch ( a1 )
          {
            case 9501:
LABEL_4298:
              result = L"DNS_INFO_NO_RECORDS";
              break;
            case 9502:
LABEL_4299:
              result = L"DNS_ERROR_BAD_PACKET";
              break;
            case 9503:
LABEL_4300:
              result = L"DNS_ERROR_NO_PACKET";
              break;
            case 9504:
LABEL_4301:
              result = L"DNS_ERROR_RCODE";
              break;
            case 9505:
LABEL_4302:
              result = L"DNS_ERROR_UNSECURE_PACKET";
              break;
            case 9550:
LABEL_4303:
              result = L"DNS_ERROR_GENERAL_API_BASE";
              break;
            case 9551:
LABEL_4304:
              result = L"DNS_ERROR_INVALID_TYPE";
              break;
            case 9552:
LABEL_4305:
              result = L"DNS_ERROR_INVALID_IP_ADDRESS";
              break;
            case 9553:
LABEL_4306:
              result = L"DNS_ERROR_INVALID_PROPERTY";
              break;
            case 9554:
LABEL_4307:
              result = L"DNS_ERROR_TRY_AGAIN_LATER";
              break;
            case 9555:
LABEL_4308:
              result = L"DNS_ERROR_NOT_UNIQUE";
              break;
            case 9556:
LABEL_4309:
              result = L"DNS_ERROR_NON_RFC_NAME";
              break;
            case 9557:
LABEL_4310:
              result = L"DNS_STATUS_FQDN";
              break;
            case 9558:
LABEL_4311:
              result = L"DNS_STATUS_DOTTED_NAME";
              break;
            case 9559:
LABEL_4312:
              result = L"DNS_STATUS_SINGLE_PART_NAME";
              break;
            case 9600:
LABEL_4313:
              result = L"DNS_ERROR_ZONE_BASE";
              break;
            case 9601:
LABEL_4314:
              result = L"DNS_ERROR_ZONE_DOES_NOT_EXIST";
              break;
            case 9602:
LABEL_4315:
              result = L"DNS_ERROR_NO_ZONE_INFO";
              break;
            case 9603:
LABEL_4316:
              result = L"DNS_ERROR_INVALID_ZONE_OPERATION";
              break;
            case 9604:
LABEL_4317:
              result = L"DNS_ERROR_ZONE_CONFIGURATION_ERROR";
              break;
            case 9605:
LABEL_4318:
              result = L"DNS_ERROR_ZONE_HAS_NO_SOA_RECORD";
              break;
            case 9606:
LABEL_4319:
              result = L"DNS_ERROR_ZONE_HAS_NO_NS_RECORDS";
              break;
            case 9607:
LABEL_4320:
              result = L"DNS_ERROR_ZONE_LOCKED";
              break;
            case 9608:
LABEL_4321:
              result = L"DNS_ERROR_ZONE_CREATION_FAILED";
              break;
            case 9609:
LABEL_4322:
              result = L"DNS_ERROR_ZONE_ALREADY_EXISTS";
              break;
            case 9610:
LABEL_4323:
              result = L"DNS_ERROR_AUTOZONE_ALREADY_EXISTS";
              break;
            case 9611:
LABEL_4324:
              result = L"DNS_ERROR_INVALID_ZONE_TYPE";
              break;
            case 9612:
LABEL_4325:
              result = L"DNS_ERROR_SECONDARY_REQUIRES_MASTER_IP";
              break;
            case 9613:
LABEL_4326:
              result = L"DNS_ERROR_ZONE_NOT_SECONDARY";
              break;
            case 9614:
LABEL_4327:
              result = L"DNS_ERROR_NEED_SECONDARY_ADDRESSES";
              break;
            case 9615:
LABEL_4328:
              result = L"DNS_ERROR_WINS_INIT_FAILED";
              break;
            case 9616:
LABEL_4329:
              result = L"DNS_ERROR_NEED_WINS_SERVERS";
              break;
            case 9617:
LABEL_4330:
              result = L"DNS_ERROR_NBSTAT_INIT_FAILED";
              break;
            case 9618:
LABEL_4331:
              result = L"DNS_ERROR_SOA_DELETE_INVALID";
              break;
            case 9650:
              return L"DNS_ERROR_DATAFILE_BASE";
            case 9651:
LABEL_4333:
              result = L"DNS_ERROR_PRIMARY_REQUIRES_DATAFILE";
              break;
            case 9652:
LABEL_4334:
              result = L"DNS_ERROR_INVALID_DATAFILE_NAME";
              break;
            case 9653:
LABEL_4335:
              result = L"DNS_ERROR_DATAFILE_OPEN_FAILURE";
              break;
            case 9654:
LABEL_4336:
              result = L"DNS_ERROR_FILE_WRITEBACK_FAILED";
              break;
            case 9655:
LABEL_4337:
              result = L"DNS_ERROR_DATAFILE_PARSING";
              break;
            case 9700:
LABEL_4338:
              result = L"DNS_ERROR_DATABASE_BASE";
              break;
            case 9701:
LABEL_4339:
              result = L"DNS_ERROR_RECORD_DOES_NOT_EXIST";
              break;
            case 9702:
LABEL_4340:
              result = L"DNS_ERROR_RECORD_FORMAT";
              break;
            case 9703:
LABEL_4341:
              result = L"DNS_ERROR_NODE_CREATION_FAILED";
              break;
            case 9704:
LABEL_4342:
              result = L"DNS_ERROR_UNKNOWN_RECORD_TYPE";
              break;
            case 9705:
LABEL_4343:
              result = L"DNS_ERROR_RECORD_TIMED_OUT";
              break;
            case 9706:
LABEL_4344:
              result = L"DNS_ERROR_NAME_NOT_IN_ZONE";
              break;
            case 9707:
LABEL_4345:
              result = L"DNS_ERROR_CNAME_LOOP";
              break;
            case 9708:
LABEL_4346:
              result = L"DNS_ERROR_NODE_IS_CNAME";
              break;
            case 9709:
LABEL_4347:
              result = L"DNS_ERROR_CNAME_COLLISION";
              break;
            case 9710:
LABEL_4348:
              result = L"DNS_ERROR_RECORD_ONLY_AT_ZONE_ROOT";
              break;
            case 9711:
LABEL_4349:
              result = L"DNS_ERROR_RECORD_ALREADY_EXISTS";
              break;
            case 9712:
              return L"DNS_ERROR_SECONDARY_DATA";
            case 9713:
              return L"DNS_ERROR_NO_CREATE_CACHE_DATA";
            case 9714:
              return L"DNS_ERROR_NAME_DOES_NOT_EXIST";
            case 9715:
              return L"DNS_WARNING_PTR_CREATE_FAILED";
            case 9716:
              return L"DNS_WARNING_DOMAIN_UNDELETED";
            case 9717:
              return L"DNS_ERROR_DS_UNAVAILABLE";
            case 9718:
              return L"DNS_ERROR_DS_ZONE_ALREADY_EXISTS";
            default:
              return L"Unknown";
          }
          return result;
        }
        return L"DNS_ERROR_NO_BOOTFILE_IF_DS_ZONE";
      }
      if ( a1 > 10048 )
      {
        switch ( a1 )
        {
          case 10049:
LABEL_4406:
            result = L"WSAEADDRNOTAVAIL";
            break;
          case 10050:
LABEL_4407:
            result = L"WSAENETDOWN";
            break;
          case 10051:
LABEL_4408:
            result = L"WSAENETUNREACH";
            break;
          case 10052:
LABEL_4409:
            result = L"WSAENETRESET";
            break;
          case 10053:
LABEL_4410:
            result = L"WSAECONNABORTED";
            break;
          case 10054:
LABEL_4411:
            result = L"WSAECONNRESET";
            break;
          case 10055:
LABEL_4412:
            result = L"WSAENOBUFS";
            break;
          case 10056:
LABEL_4413:
            result = L"WSAEISCONN";
            break;
          case 10057:
LABEL_4414:
            result = L"WSAENOTCONN";
            break;
          case 10058:
LABEL_4415:
            result = L"WSAESHUTDOWN";
            break;
          case 10059:
LABEL_4416:
            result = L"WSAETOOMANYREFS";
            break;
          case 10060:
LABEL_4417:
            result = L"WSAETIMEDOUT";
            break;
          case 10061:
LABEL_4418:
            result = L"WSAECONNREFUSED";
            break;
          case 10062:
LABEL_4419:
            result = L"WSAELOOP";
            break;
          case 10063:
            return L"WSAENAMETOOLONG";
          case 10064:
LABEL_4421:
            result = L"WSAEHOSTDOWN";
            break;
          case 10065:
LABEL_4422:
            result = L"WSAEHOSTUNREACH";
            break;
          case 10066:
LABEL_4423:
            result = L"WSAENOTEMPTY";
            break;
          case 10067:
LABEL_4424:
            result = L"WSAEPROCLIM";
            break;
          case 10068:
LABEL_4425:
            result = L"WSAEUSERS";
            break;
          case 10069:
LABEL_4426:
            result = L"WSAEDQUOT";
            break;
          case 10070:
LABEL_4427:
            result = L"WSAESTALE";
            break;
          case 10071:
LABEL_4428:
            result = L"WSAEREMOTE";
            break;
          case 10091:
LABEL_4429:
            result = L"WSASYSNOTREADY";
            break;
          case 10092:
LABEL_4430:
            result = L"WSAVERNOTSUPPORTED";
            break;
          case 10093:
LABEL_4431:
            result = L"WSANOTINITIALISED";
            break;
          case 10101:
LABEL_4432:
            result = L"WSAEDISCON";
            break;
          case 10102:
LABEL_4433:
            result = L"WSAENOMORE";
            break;
          case 10103:
LABEL_4434:
            result = L"WSAECANCELLED";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 == 10048 )
        return L"WSAEADDRINUSE";
      if ( a1 > 10022 )
      {
        switch ( a1 )
        {
          case 10024:
LABEL_4390:
            result = L"WSAEMFILE";
            break;
          case 10035:
LABEL_4391:
            result = L"WSAEWOULDBLOCK";
            break;
          case 10036:
LABEL_4392:
            result = L"WSAEINPROGRESS";
            break;
          case 10037:
LABEL_4393:
            result = L"WSAEALREADY";
            break;
          case 10038:
LABEL_4394:
            result = L"WSAENOTSOCK";
            break;
          case 10039:
LABEL_4395:
            result = L"WSAEDESTADDRREQ";
            break;
          case 10040:
LABEL_4396:
            result = L"WSAEMSGSIZE";
            break;
          case 10041:
LABEL_4397:
            result = L"WSAEPROTOTYPE";
            break;
          case 10042:
LABEL_4398:
            result = L"WSAENOPROTOOPT";
            break;
          case 10043:
LABEL_4399:
            result = L"WSAEPROTONOSUPPORT";
            break;
          case 10044:
LABEL_4400:
            result = L"WSAESOCKTNOSUPPORT";
            break;
          case 10045:
LABEL_4401:
            result = L"WSAEOPNOTSUPP";
            break;
          case 10046:
LABEL_4402:
            result = L"WSAEPFNOSUPPORT";
            break;
          case 10047:
LABEL_4403:
            result = L"WSAEAFNOSUPPORT";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 == 10022 )
        return L"WSAEINVAL";
      if ( a1 <= 9851 )
      {
        switch ( a1 )
        {
          case 9851:
            return L"DNS_ERROR_NO_TCPIP";
          case 9750:
            return L"DNS_ERROR_OPERATION_BASE";
          case 9751:
            return L"DNS_INFO_AXFR_COMPLETE";
        }
        if ( a1 != 9752 )
        {
          if ( a1 != 9753 )
          {
            if ( a1 != 9800 )
            {
              if ( a1 != 9801 )
              {
                if ( a1 != 9850 )
                  return L"Unknown";
                return L"DNS_ERROR_SETUP_BASE";
              }
              return L"DNS_STATUS_CONTINUE_NEEDED";
            }
            return L"DNS_ERROR_SECURE_BASE";
          }
          return L"DNS_INFO_ADDED_LOCAL_WINS";
        }
        return L"DNS_ERROR_AXFR";
      }
      if ( a1 == 9852 )
        return L"DNS_ERROR_NO_DNS_SERVERS";
      if ( a1 != 10000 )
      {
        switch ( a1 )
        {
          case 10004:
            return L"WSAEINTR";
          case 10009:
            return L"WSAEBADF";
          case 10013:
            return L"WSAEACCES";
          case 10014:
            return L"WSAEFAULT";
        }
        return L"Unknown";
      }
      return L"WSABASEERR";
    }
    if ( a1 <= 13020 )
    {
      if ( a1 == 13020 )
        return L"ERROR_IPSEC_TUNNEL_FILTER_PENDING_DELETION";
      if ( a1 <= 11022 )
      {
        if ( a1 == 11022 )
          return L"WSA_QOS_EOBJLENGTH";
        if ( a1 > 11007 )
        {
          switch ( a1 )
          {
            case 11008:
              return L"WSA_QOS_NO_RECEIVERS";
            case 11009:
              return L"WSA_QOS_REQUEST_CONFIRMED";
            case 11010:
              return L"WSA_QOS_ADMISSION_FAILURE";
            case 11011:
              return L"WSA_QOS_POLICY_FAILURE";
            case 11012:
LABEL_4473:
              result = L"WSA_QOS_BAD_STYLE";
              break;
            case 11013:
LABEL_4474:
              result = L"WSA_QOS_BAD_OBJECT";
              break;
            case 11014:
LABEL_4475:
              result = L"WSA_QOS_TRAFFIC_CTRL_ERROR";
              break;
            case 11015:
LABEL_4476:
              result = L"WSA_QOS_GENERIC_ERROR";
              break;
            case 11016:
LABEL_4477:
              result = L"WSA_QOS_ESERVICETYPE";
              break;
            case 11017:
LABEL_4478:
              result = L"WSA_QOS_EFLOWSPEC";
              break;
            case 11018:
LABEL_4479:
              result = L"WSA_QOS_EPROVSPECBUF";
              break;
            case 11019:
LABEL_4480:
              result = L"WSA_QOS_EFILTERSTYLE";
              break;
            case 11020:
LABEL_4481:
              result = L"WSA_QOS_EFILTERTYPE";
              break;
            case 11021:
LABEL_4482:
              result = L"WSA_QOS_EFILTERCOUNT";
              break;
            default:
              return L"Unknown";
          }
          return result;
        }
        if ( a1 == 11007 )
          return L"WSA_QOS_NO_SENDERS";
        if ( a1 <= 10112 )
        {
          if ( a1 != 10112 )
          {
            switch ( a1 )
            {
              case 10105:
                return L"WSAEINVALIDPROVIDER";
              case 10106:
                return L"WSAEPROVIDERFAILEDINIT";
              case 10107:
                return L"WSASYSCALLFAILURE";
              case 10108:
                return L"WSASERVICE_NOT_FOUND";
              case 10109:
                return L"WSATYPE_NOT_FOUND";
              case 10110:
                return L"WSA_E_NO_MORE";
            }
            return L"WSA_E_CANCELLED";
          }
          return L"WSAEREFUSED";
        }
        switch ( a1 )
        {
          case 11001:
            return L"WSAHOST_NOT_FOUND";
          case 11002:
            return L"WSATRY_AGAIN";
          case 11003:
            return L"WSANO_RECOVERY";
        }
        if ( a1 != 11004 )
        {
          if ( a1 != 11005 )
          {
            if ( a1 != 11006 )
              return L"Unknown";
            return L"WSA_QOS_SENDERS";
          }
          return L"WSA_QOS_RECEIVERS";
        }
        return L"WSANO_DATA";
      }
      if ( a1 > 13000 )
      {
        switch ( a1 )
        {
          case 13001:
LABEL_4498:
            result = L"ERROR_IPSEC_QM_POLICY_NOT_FOUND";
            break;
          case 13002:
LABEL_4499:
            result = L"ERROR_IPSEC_QM_POLICY_IN_USE";
            break;
          case 13003:
LABEL_4500:
            result = L"ERROR_IPSEC_MM_POLICY_EXISTS";
            break;
          case 13004:
LABEL_4501:
            result = L"ERROR_IPSEC_MM_POLICY_NOT_FOUND";
            break;
          case 13005:
LABEL_4502:
            result = L"ERROR_IPSEC_MM_POLICY_IN_USE";
            break;
          case 13006:
LABEL_4503:
            result = L"ERROR_IPSEC_MM_FILTER_EXISTS";
            break;
          case 13007:
LABEL_4504:
            result = L"ERROR_IPSEC_MM_FILTER_NOT_FOUND";
            break;
          case 13008:
LABEL_4505:
            result = L"ERROR_IPSEC_TRANSPORT_FILTER_EXISTS";
            break;
          case 13009:
LABEL_4506:
            result = L"ERROR_IPSEC_TRANSPORT_FILTER_NOT_FOUND";
            break;
          case 13010:
LABEL_4507:
            result = L"ERROR_IPSEC_MM_AUTH_EXISTS";
            break;
          case 13011:
LABEL_4508:
            result = L"ERROR_IPSEC_MM_AUTH_NOT_FOUND";
            break;
          case 13012:
LABEL_4509:
            result = L"ERROR_IPSEC_MM_AUTH_IN_USE";
            break;
          case 13013:
LABEL_4510:
            result = L"ERROR_IPSEC_DEFAULT_MM_POLICY_NOT_FOUND";
            break;
          case 13014:
LABEL_4511:
            result = L"ERROR_IPSEC_DEFAULT_MM_AUTH_NOT_FOUND";
            break;
          case 13015:
LABEL_4512:
            result = L"ERROR_IPSEC_DEFAULT_QM_POLICY_NOT_FOUND";
            break;
          case 13016:
LABEL_4513:
            result = L"ERROR_IPSEC_TUNNEL_FILTER_EXISTS";
            break;
          case 13017:
LABEL_4514:
            result = L"ERROR_IPSEC_TUNNEL_FILTER_NOT_FOUND";
            break;
          case 13018:
LABEL_4515:
            result = L"ERROR_IPSEC_MM_FILTER_PENDING_DELETION";
            break;
          case 13019:
LABEL_4516:
            result = L"ERROR_IPSEC_TRANSPORT_FILTER_PENDING_DELETION";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 != 13000 )
      {
        switch ( a1 )
        {
          case 11023:
LABEL_4487:
            result = L"WSA_QOS_EFLOWCOUNT";
            break;
          case 11024:
LABEL_4488:
            result = L"WSA_QOS_EUNKOWNPSOBJ";
            break;
          case 11025:
LABEL_4489:
            result = L"WSA_QOS_EPOLICYOBJ";
            break;
          case 11026:
LABEL_4490:
            result = L"WSA_QOS_EFLOWDESC";
            break;
          case 11027:
LABEL_4491:
            result = L"WSA_QOS_EPSFLOWSPEC";
            break;
          case 11028:
LABEL_4492:
            result = L"WSA_QOS_EPSFILTERSPEC";
            break;
          case 11029:
LABEL_4493:
            result = L"WSA_QOS_ESDMODEOBJ";
            break;
          case 11030:
LABEL_4494:
            result = L"WSA_QOS_ESHAPERATEOBJ";
            break;
          case 11031:
LABEL_4495:
            result = L"WSA_QOS_RESERVED_PETYPE";
            break;
          default:
            return L"Unknown";
        }
        return result;
      }
      return L"ERROR_IPSEC_QM_POLICY_EXISTS";
    }
    if ( a1 > 13828 )
    {
      switch ( a1 )
      {
        case 13829:
LABEL_4568:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR";
          break;
        case 13830:
LABEL_4569:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_SA";
          break;
        case 13831:
LABEL_4570:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_PROP";
          break;
        case 13832:
LABEL_4571:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_TRANS";
          break;
        case 13833:
LABEL_4572:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_KE";
          break;
        case 13834:
LABEL_4573:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_ID";
          break;
        case 13835:
LABEL_4574:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_CERT";
          break;
        case 13836:
LABEL_4575:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_CERT_REQ";
          break;
        case 13837:
LABEL_4576:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_HASH";
          break;
        case 13838:
LABEL_4577:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_SIG";
          break;
        case 13839:
LABEL_4578:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_NONCE";
          break;
        case 13840:
LABEL_4579:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_NOTIFY";
          break;
        case 13841:
LABEL_4580:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_DELETE";
          break;
        case 13842:
LABEL_4581:
          result = L"ERROR_IPSEC_IKE_PROCESS_ERR_VENDOR";
          break;
        case 13843:
LABEL_4582:
          result = L"ERROR_IPSEC_IKE_INVALID_PAYLOAD";
          break;
        case 13844:
LABEL_4583:
          result = L"ERROR_IPSEC_IKE_LOAD_SOFT_SA";
          break;
        case 13845:
LABEL_4584:
          result = L"ERROR_IPSEC_IKE_SOFT_SA_TORN_DOWN";
          break;
        case 13846:
LABEL_4585:
          result = L"ERROR_IPSEC_IKE_INVALID_COOKIE";
          break;
        case 13847:
LABEL_4586:
          result = L"ERROR_IPSEC_IKE_NO_PEER_CERT";
          break;
        case 13848:
LABEL_4587:
          result = L"ERROR_IPSEC_IKE_PEER_CRL_FAILED";
          break;
        case 13849:
LABEL_4588:
          result = L"ERROR_IPSEC_IKE_POLICY_CHANGE";
          break;
        case 13850:
LABEL_4589:
          result = L"ERROR_IPSEC_IKE_NO_MM_POLICY";
          break;
        case 13851:
LABEL_4590:
          result = L"ERROR_IPSEC_IKE_NOTCBPRIV";
          break;
        case 13852:
LABEL_4591:
          result = L"ERROR_IPSEC_IKE_SECLOADFAIL";
          break;
        case 13853:
LABEL_4592:
          result = L"ERROR_IPSEC_IKE_FAILSSPINIT";
          break;
        case 13854:
LABEL_4593:
          result = L"ERROR_IPSEC_IKE_FAILQUERYSSP";
          break;
        case 13855:
LABEL_4594:
          result = L"ERROR_IPSEC_IKE_SRVACQFAIL";
          break;
        case 13856:
LABEL_4595:
          result = L"ERROR_IPSEC_IKE_SRVQUERYCRED";
          break;
        default:
          return L"Unknown";
      }
      return result;
    }
    if ( a1 == 13828 )
      return L"ERROR_IPSEC_IKE_NO_PUBLIC_KEY";
    if ( a1 > 13811 )
    {
      switch ( a1 )
      {
        case 13812:
LABEL_4552:
          result = L"ERROR_IPSEC_IKE_QUEUE_DROP_NO_MM";
          break;
        case 13813:
LABEL_4553:
          result = L"ERROR_IPSEC_IKE_DROP_NO_RESPONSE";
          break;
        case 13814:
LABEL_4554:
          result = L"ERROR_IPSEC_IKE_MM_DELAY_DROP";
          break;
        case 13815:
LABEL_4555:
          result = L"ERROR_IPSEC_IKE_QM_DELAY_DROP";
          break;
        case 13816:
LABEL_4556:
          result = L"ERROR_IPSEC_IKE_ERROR";
          break;
        case 13817:
LABEL_4557:
          result = L"ERROR_IPSEC_IKE_CRL_FAILED";
          break;
        case 13818:
LABEL_4558:
          result = L"ERROR_IPSEC_IKE_INVALID_KEY_USAGE";
          break;
        case 13819:
LABEL_4559:
          result = L"ERROR_IPSEC_IKE_INVALID_CERT_TYPE";
          break;
        case 13820:
LABEL_4560:
          result = L"ERROR_IPSEC_IKE_NO_PRIVATE_KEY";
          break;
        case 13822:
LABEL_4561:
          result = L"ERROR_IPSEC_IKE_DH_FAIL";
          break;
        case 13824:
LABEL_4562:
          result = L"ERROR_IPSEC_IKE_INVALID_HEADER";
          break;
        case 13825:
LABEL_4563:
          result = L"ERROR_IPSEC_IKE_NO_POLICY";
          break;
        case 13826:
LABEL_4564:
          result = L"ERROR_IPSEC_IKE_INVALID_SIGNATURE";
          break;
        case 13827:
LABEL_4565:
          result = L"ERROR_IPSEC_IKE_KERBEROS_ERROR";
          break;
        default:
          return L"Unknown";
      }
      return result;
    }
    if ( a1 == 13811 )
      return L"ERROR_IPSEC_IKE_QUEUE_DROP_MM";
    if ( a1 > 13804 )
    {
      switch ( a1 )
      {
        case 13805:
          return L"ERROR_IPSEC_IKE_TIMED_OUT";
        case 13806:
          return L"ERROR_IPSEC_IKE_NO_CERT";
        case 13807:
          return L"ERROR_IPSEC_IKE_SA_DELETED";
        case 13808:
          return L"ERROR_IPSEC_IKE_SA_REAPED";
        case 13809:
          return L"ERROR_IPSEC_IKE_MM_ACQUIRE_DROP";
      }
      return L"ERROR_IPSEC_IKE_QM_ACQUIRE_DROP";
    }
    switch ( a1 )
    {
      case 13804:
        return L"ERROR_IPSEC_IKE_GENERAL_PROCESSING_ERROR";
      case 13021:
        return L"ERROR_IPSEC_MM_POLICY_PENDING_DELETION";
      case 13022:
        return L"ERROR_IPSEC_MM_AUTH_PENDING_DELETION";
      case 13023:
        return L"ERROR_IPSEC_QM_POLICY_PENDING_DELETION";
    }
    if ( a1 != 13800 )
    {
      switch ( a1 )
      {
        case 13801:
          return L"ERROR_IPSEC_IKE_AUTH_FAIL";
        case 13802:
          return L"ERROR_IPSEC_IKE_ATTRIB_FAIL";
        case 13803:
          return L"ERROR_IPSEC_IKE_NEGOTIATION_PENDING";
      }
      return L"Unknown";
    }
    return L"ERROR_IPSEC_IKE_NEG_STATUS_BEGIN";
  }
  if ( a1 == -2146881278 )
    return L"CRYPT_E_ASN1_EOD";
  if ( a1 > -2147023178 )
  {
    if ( a1 <= -2147022646 )
    {
      if ( a1 != -2147022646 )
      {
        switch ( a1 )
        {
          case -2147023177:
            goto LABEL_3346;
          case -2147023176:
            goto LABEL_3347;
          case -2147023175:
            goto LABEL_3348;
          case -2147023174:
            goto LABEL_3349;
          case -2147023173:
            goto LABEL_3350;
          case -2147023172:
            goto LABEL_3351;
          case -2147023171:
            goto LABEL_3352;
          case -2147023170:
            goto LABEL_3353;
          case -2147023169:
            goto LABEL_3354;
          case -2147023168:
            goto LABEL_3355;
          case -2147023166:
            goto LABEL_3356;
          case -2147023164:
            goto LABEL_3357;
          case -2147023163:
            goto LABEL_3358;
          case -2147023162:
            goto LABEL_3359;
          case -2147023161:
            goto LABEL_3360;
          case -2147023160:
            goto LABEL_3361;
          case -2147023159:
            goto LABEL_3362;
          case -2147023157:
            goto LABEL_3363;
          case -2147023156:
            goto LABEL_3364;
          case -2147023155:
            goto LABEL_3365;
          case -2147023154:
            goto LABEL_3366;
          case -2147023153:
            goto LABEL_3367;
          case -2147023152:
            goto LABEL_3368;
          case -2147023151:
            goto LABEL_3369;
          case -2147023150:
            goto LABEL_3370;
          case -2147023149:
            goto LABEL_3371;
          case -2147023148:
            goto LABEL_3372;
          case -2147023147:
            goto LABEL_3373;
          case -2147023146:
            goto LABEL_3374;
          case -2147023145:
            goto LABEL_3375;
          case -2147023144:
            goto LABEL_3376;
          case -2147023143:
            goto LABEL_3377;
          case -2147023142:
            goto LABEL_3378;
          case -2147023141:
            goto LABEL_3379;
          case -2147023140:
            goto LABEL_3380;
          case -2147023139:
            goto LABEL_3381;
          case -2147023138:
            goto LABEL_3382;
          case -2147023137:
            goto LABEL_3383;
          case -2147023136:
            goto LABEL_3384;
          case -2147023135:
            goto LABEL_3385;
          case -2147023134:
            goto LABEL_3386;
          case -2147023133:
            goto LABEL_3387;
          case -2147023132:
            goto LABEL_3388;
          case -2147023131:
            goto LABEL_3389;
          case -2147023130:
            goto LABEL_3390;
          case -2147023129:
            goto LABEL_3391;
          case -2147023128:
            goto LABEL_3392;
          case -2147023127:
            goto LABEL_3393;
          case -2147023126:
            goto LABEL_3394;
          case -2147023125:
            goto LABEL_3395;
          case -2147023124:
            goto LABEL_3396;
          case -2147023123:
            goto LABEL_3397;
          case -2147023122:
            goto LABEL_3398;
          case -2147023121:
            goto LABEL_3399;
          case -2147023119:
            goto LABEL_3400;
          case -2147023118:
            goto LABEL_3401;
          case -2147023117:
            goto LABEL_3402;
          case -2147023116:
            goto LABEL_3403;
          case -2147023115:
            goto LABEL_3404;
          case -2147023114:
            goto LABEL_3405;
          case -2147023113:
            goto LABEL_3406;
          case -2147023112:
            goto LABEL_3407;
          case -2147023111:
            goto LABEL_3408;
          case -2147023110:
            goto LABEL_3409;
          case -2147023109:
            goto LABEL_3410;
          case -2147023108:
            goto LABEL_3411;
          case -2147023107:
            goto LABEL_3412;
          case -2147023106:
            goto LABEL_3413;
          case -2147023105:
            goto LABEL_3414;
          case -2147023104:
            goto LABEL_3415;
          case -2147023103:
            goto LABEL_3416;
          case -2147023102:
            goto LABEL_3417;
          case -2147023101:
            goto LABEL_3418;
          case -2147023100:
            goto LABEL_3419;
          case -2147023099:
            goto LABEL_3420;
          case -2147023098:
            goto LABEL_3421;
          case -2147023097:
            goto LABEL_3422;
          case -2147023096:
            goto LABEL_3423;
          case -2147023095:
            goto LABEL_3424;
          case -2147023094:
            goto LABEL_3425;
          case -2147023093:
            goto LABEL_3426;
          case -2147023092:
            goto LABEL_3427;
          case -2147023091:
            goto LABEL_3428;
          case -2147023090:
            goto LABEL_3429;
          case -2147023089:
            goto LABEL_3430;
          case -2147023088:
            goto LABEL_3431;
          case -2147023087:
            goto LABEL_3432;
          case -2147023086:
            goto LABEL_3433;
          case -2147023085:
            goto LABEL_3434;
          case -2147023084:
            goto LABEL_3435;
          case -2147023083:
            goto LABEL_3436;
          case -2147023082:
            goto LABEL_3437;
          case -2147023081:
            goto LABEL_3438;
          case -2147023080:
            goto LABEL_3439;
          case -2147023079:
            goto LABEL_3440;
          case -2147023078:
            goto LABEL_3441;
          case -2147023077:
            goto LABEL_3442;
          case -2147023076:
            goto LABEL_3443;
          case -2147023075:
            goto LABEL_3444;
          case -2147023074:
            goto LABEL_3445;
          case -2147023073:
            return L"RPC_S_NOT_RPC_ERROR";
          case -2147023072:
            goto LABEL_3479;
          case -2147023071:
            goto LABEL_3480;
          case -2147023070:
            goto LABEL_3481;
          case -2147023069:
            goto LABEL_3482;
          case -2147023068:
            goto LABEL_3483;
          case -2147023067:
            goto LABEL_3484;
          case -2147023066:
            goto LABEL_3485;
          case -2147023065:
            goto LABEL_3486;
          case -2147023064:
            goto LABEL_3487;
          case -2147022998:
            return L"RPC_S_GROUP_MEMBER_NOT_FOUND";
          case -2147022997:
            goto LABEL_3492;
          case -2147022996:
            goto LABEL_3493;
          case -2147022995:
            goto LABEL_3494;
          case -2147022994:
            goto LABEL_3495;
          case -2147022993:
            goto LABEL_3496;
          case -2147022992:
            goto LABEL_3497;
          case -2147022991:
            goto LABEL_3498;
          case -2147022990:
            goto LABEL_3499;
          case -2147022989:
            goto LABEL_3500;
          case -2147022988:
            goto LABEL_3501;
          case -2147022987:
            goto LABEL_3502;
          case -2147022986:
            goto LABEL_3503;
          case -2147022985:
            goto LABEL_3504;
          case -2147022984:
            goto LABEL_3505;
          case -2147022983:
            goto LABEL_3506;
          case -2147022982:
            goto LABEL_3507;
          case -2147022981:
            goto LABEL_3508;
          case -2147022980:
            goto LABEL_3509;
          case -2147022979:
            goto LABEL_3510;
          case -2147022978:
            goto LABEL_3511;
          case -2147022977:
            goto LABEL_3512;
          case -2147022976:
            goto LABEL_3513;
          case -2147022975:
            goto LABEL_3514;
          case -2147022974:
            goto LABEL_3515;
          case -2147022973:
            goto LABEL_3516;
          case -2147022972:
            goto LABEL_3517;
          case -2147022971:
            goto LABEL_3518;
          case -2147022970:
            goto LABEL_3519;
          case -2147022969:
            goto LABEL_3520;
          case -2147022968:
            goto LABEL_3521;
          case -2147022967:
            goto LABEL_3522;
          case -2147022966:
            goto LABEL_3523;
          case -2147022965:
            goto LABEL_3524;
          case -2147022896:
            return L"ERROR_INVALID_PIXEL_FORMAT";
          case -2147022895:
            goto LABEL_3529;
          case -2147022894:
            goto LABEL_3530;
          case -2147022893:
            goto LABEL_3531;
          case -2147022892:
            goto LABEL_3532;
          case -2147022891:
            goto LABEL_3533;
          case -2147022886:
            goto LABEL_3534;
          case -2147022885:
            goto LABEL_3535;
          case -2147022884:
            goto LABEL_3536;
          case -2147022883:
            goto LABEL_3537;
          case -2147022882:
            goto LABEL_3538;
          case -2147022881:
            goto LABEL_3539;
          case -2147022880:
            goto LABEL_3540;
          case -2147022879:
            goto LABEL_3541;
          case -2147022878:
            goto LABEL_3542;
          case -2147022877:
            goto LABEL_3543;
          case -2147022876:
            goto LABEL_3544;
          case -2147022875:
            goto LABEL_3545;
          case -2147022874:
            goto LABEL_3546;
          case -2147022788:
            return L"ERROR_CONNECTED_OTHER_PASSWORD";
          case -2147022787:
            return L"ERROR_CONNECTED_OTHER_PASSWORD_DEFAULT";
          case -2147022694:
            return L"ERROR_BAD_USERNAME";
          default:
            return L"Unknown";
        }
      }
      return L"ERROR_NOT_CONNECTED";
    }
    if ( a1 <= -2147016324 )
    {
      if ( a1 == -2147016324 )
        return L"ERROR_DS_MACHINE_ACCOUNT_CREATED_PRENT4";
      if ( a1 > -2147016662 )
      {
        switch ( a1 )
        {
          case -2147016661:
            goto LABEL_3941;
          case -2147016660:
            goto LABEL_3942;
          case -2147016659:
            goto LABEL_3943;
          case -2147016658:
            goto LABEL_3944;
          case -2147016657:
            goto LABEL_3945;
          case -2147016656:
            goto LABEL_3946;
          case -2147016655:
            goto LABEL_3947;
          case -2147016654:
            goto LABEL_3948;
          case -2147016653:
            goto LABEL_3949;
          case -2147016652:
            goto LABEL_3950;
          case -2147016651:
            goto LABEL_3951;
          case -2147016650:
            goto LABEL_3952;
          case -2147016649:
            goto LABEL_3953;
          case -2147016648:
            goto LABEL_3954;
          case -2147016647:
            goto LABEL_3955;
          case -2147016646:
            goto LABEL_3956;
          case -2147016645:
            goto LABEL_3957;
          case -2147016644:
            goto LABEL_3958;
          case -2147016643:
            goto LABEL_3959;
          case -2147016642:
            goto LABEL_3960;
          case -2147016641:
            goto LABEL_3961;
          case -2147016640:
            goto LABEL_3962;
          case -2147016639:
            goto LABEL_3963;
          case -2147016638:
            goto LABEL_3964;
          case -2147016637:
            goto LABEL_3965;
          case -2147016636:
            return L"ERROR_DS_REFERRAL_LIMIT_EXCEEDED";
          case -2147016635:
            goto LABEL_4081;
          case -2147016634:
            goto LABEL_4082;
          case -2147016595:
            goto LABEL_3968;
          case -2147016594:
            goto LABEL_3969;
          case -2147016593:
            goto LABEL_3970;
          case -2147016592:
            goto LABEL_3971;
          case -2147016591:
            goto LABEL_3972;
          case -2147016590:
            goto LABEL_3973;
          case -2147016589:
            goto LABEL_3974;
          case -2147016588:
            goto LABEL_3975;
          case -2147016587:
            goto LABEL_3976;
          case -2147016586:
            goto LABEL_3977;
          case -2147016585:
            goto LABEL_3978;
          case -2147016584:
            goto LABEL_3979;
          case -2147016583:
            goto LABEL_3980;
          case -2147016582:
            goto LABEL_3981;
          case -2147016581:
            goto LABEL_3982;
          case -2147016580:
            goto LABEL_3983;
          case -2147016579:
            goto LABEL_3984;
          case -2147016578:
            goto LABEL_3985;
          case -2147016576:
            goto LABEL_3986;
          case -2147016575:
            goto LABEL_3987;
          case -2147016574:
            goto LABEL_3988;
          case -2147016573:
            goto LABEL_3989;
          case -2147016572:
            goto LABEL_3990;
          case -2147016571:
            goto LABEL_3991;
          case -2147016570:
            goto LABEL_3992;
          case -2147016569:
            goto LABEL_3993;
          case -2147016568:
            goto LABEL_3994;
          case -2147016567:
            goto LABEL_3995;
          case -2147016566:
            goto LABEL_3996;
          case -2147016565:
            goto LABEL_3997;
          case -2147016564:
            goto LABEL_3998;
          case -2147016563:
            goto LABEL_3999;
          case -2147016562:
            goto LABEL_4000;
          case -2147016561:
            goto LABEL_4001;
          case -2147016560:
            goto LABEL_4002;
          case -2147016559:
            goto LABEL_4003;
          case -2147016558:
            goto LABEL_4004;
          case -2147016557:
            goto LABEL_4083;
          case -2147016556:
            goto LABEL_4005;
          case -2147016555:
            goto LABEL_4006;
          case -2147016554:
            goto LABEL_4007;
          case -2147016553:
            goto LABEL_4008;
          case -2147016552:
            goto LABEL_4009;
          case -2147016551:
            goto LABEL_4010;
          case -2147016550:
            goto LABEL_4011;
          case -2147016549:
            goto LABEL_4012;
          case -2147016548:
            goto LABEL_4013;
          case -2147016547:
            goto LABEL_4014;
          case -2147016546:
            goto LABEL_4015;
          case -2147016545:
            goto LABEL_4016;
          case -2147016544:
            goto LABEL_4017;
          case -2147016543:
            goto LABEL_4018;
          case -2147016542:
            goto LABEL_4019;
          case -2147016541:
            goto LABEL_4020;
          case -2147016540:
            goto LABEL_4021;
          case -2147016539:
            goto LABEL_4022;
          case -2147016538:
            goto LABEL_4023;
          case -2147016537:
            goto LABEL_4024;
          case -2147016536:
            goto LABEL_4025;
          case -2147016535:
            goto LABEL_4026;
          case -2147016534:
            goto LABEL_4027;
          case -2147016533:
            goto LABEL_4028;
          case -2147016532:
            goto LABEL_4029;
          case -2147016531:
            goto LABEL_4030;
          case -2147016530:
            goto LABEL_4031;
          case -2147016529:
            goto LABEL_4032;
          case -2147016528:
            goto LABEL_4033;
          case -2147016527:
            goto LABEL_4034;
          case -2147016526:
            goto LABEL_4035;
          case -2147016525:
            goto LABEL_4036;
          case -2147016524:
            goto LABEL_4037;
          case -2147016523:
            goto LABEL_4038;
          case -2147016522:
            goto LABEL_4039;
          case -2147016521:
            goto LABEL_4040;
          case -2147016520:
            goto LABEL_4041;
          case -2147016519:
            goto LABEL_4042;
          case -2147016518:
            goto LABEL_4043;
          case -2147016517:
            goto LABEL_4044;
          case -2147016516:
            goto LABEL_4045;
          case -2147016515:
            goto LABEL_4046;
          case -2147016514:
            goto LABEL_4047;
          case -2147016513:
            goto LABEL_4048;
          case -2147016512:
            goto LABEL_4049;
          case -2147016511:
            goto LABEL_4050;
          case -2147016510:
            goto LABEL_4051;
          case -2147016509:
            goto LABEL_4052;
          case -2147016508:
            goto LABEL_4053;
          case -2147016507:
            goto LABEL_4054;
          case -2147016506:
            goto LABEL_4055;
          case -2147016505:
            goto LABEL_4056;
          case -2147016504:
            goto LABEL_4057;
          case -2147016503:
            goto LABEL_4058;
          case -2147016502:
            goto LABEL_4059;
          case -2147016501:
            goto LABEL_4060;
          case -2147016500:
            goto LABEL_4061;
          case -2147016499:
            goto LABEL_4062;
          case -2147016498:
            goto LABEL_4063;
          case -2147016497:
            goto LABEL_4064;
          case -2147016496:
            goto LABEL_4065;
          case -2147016495:
            goto LABEL_4066;
          case -2147016494:
            goto LABEL_4067;
          case -2147016493:
            goto LABEL_4068;
          case -2147016492:
            goto LABEL_4069;
          case -2147016491:
            goto LABEL_4070;
          case -2147016490:
            goto LABEL_4071;
          case -2147016489:
            goto LABEL_4072;
          case -2147016488:
            goto LABEL_4073;
          case -2147016487:
            goto LABEL_4074;
          case -2147016486:
            goto LABEL_4075;
          case -2147016485:
            goto LABEL_4076;
          case -2147016484:
            goto LABEL_4077;
          case -2147016483:
            goto LABEL_4078;
          case -2147016482:
            goto LABEL_4079;
          case -2147016481:
            goto LABEL_4080;
          case -2147016480:
            return L"ERROR_DS_ATT_SCHEMA_REQ_SYNTAX";
          case -2147016479:
            goto LABEL_4088;
          case -2147016478:
            goto LABEL_4089;
          case -2147016477:
            goto LABEL_4090;
          case -2147016476:
            goto LABEL_4091;
          case -2147016475:
            goto LABEL_4092;
          case -2147016474:
            goto LABEL_4093;
          case -2147016473:
            goto LABEL_4094;
          case -2147016472:
            goto LABEL_4095;
          case -2147016471:
            goto LABEL_4096;
          case -2147016470:
            goto LABEL_4097;
          case -2147016469:
            goto LABEL_4098;
          case -2147016468:
            goto LABEL_4099;
          case -2147016467:
            goto LABEL_4100;
          case -2147016466:
            goto LABEL_4101;
          case -2147016465:
            goto LABEL_4102;
          case -2147016464:
            goto LABEL_4103;
          case -2147016463:
            goto LABEL_4104;
          case -2147016462:
            goto LABEL_4105;
          case -2147016461:
            goto LABEL_4106;
          case -2147016460:
            goto LABEL_4107;
          case -2147016459:
            goto LABEL_4108;
          case -2147016458:
            goto LABEL_4109;
          case -2147016457:
            goto LABEL_4110;
          case -2147016456:
            goto LABEL_4111;
          case -2147016455:
            goto LABEL_4112;
          case -2147016454:
            goto LABEL_4113;
          case -2147016453:
            goto LABEL_4114;
          case -2147016452:
            goto LABEL_4115;
          case -2147016451:
            goto LABEL_4116;
          case -2147016450:
            goto LABEL_4117;
          case -2147016449:
            goto LABEL_4118;
          case -2147016448:
            goto LABEL_4119;
          case -2147016447:
            goto LABEL_4120;
          case -2147016446:
            goto LABEL_4121;
          case -2147016445:
            goto LABEL_4122;
          case -2147016444:
            goto LABEL_4123;
          case -2147016443:
            goto LABEL_4124;
          case -2147016442:
            goto LABEL_4125;
          case -2147016441:
            goto LABEL_4126;
          case -2147016440:
            goto LABEL_4127;
          case -2147016439:
            goto LABEL_4128;
          case -2147016438:
            goto LABEL_4129;
          case -2147016437:
            goto LABEL_4130;
          case -2147016436:
            goto LABEL_4131;
          case -2147016435:
            goto LABEL_4132;
          case -2147016434:
            goto LABEL_4133;
          case -2147016433:
            goto LABEL_4134;
          case -2147016432:
            goto LABEL_4135;
          case -2147016431:
            goto LABEL_4136;
          case -2147016430:
            goto LABEL_4137;
          case -2147016429:
            goto LABEL_4138;
          case -2147016428:
            goto LABEL_4139;
          case -2147016427:
            goto LABEL_4140;
          case -2147016426:
            goto LABEL_4141;
          case -2147016425:
            goto LABEL_4142;
          case -2147016424:
            goto LABEL_4143;
          case -2147016423:
            goto LABEL_4144;
          case -2147016422:
            goto LABEL_4145;
          case -2147016421:
            goto LABEL_4146;
          case -2147016420:
            goto LABEL_4147;
          case -2147016419:
            goto LABEL_4148;
          case -2147016418:
            goto LABEL_4149;
          case -2147016417:
            goto LABEL_4150;
          case -2147016416:
            goto LABEL_4151;
          case -2147016415:
            goto LABEL_4152;
          case -2147016414:
            goto LABEL_4153;
          case -2147016413:
            goto LABEL_4154;
          case -2147016412:
            goto LABEL_4155;
          case -2147016411:
            goto LABEL_4156;
          case -2147016410:
            goto LABEL_4157;
          case -2147016409:
            goto LABEL_4158;
          case -2147016408:
            goto LABEL_4159;
          case -2147016407:
            goto LABEL_4160;
          case -2147016406:
            goto LABEL_4161;
          case -2147016405:
            goto LABEL_4162;
          case -2147016404:
            goto LABEL_4163;
          case -2147016403:
            goto LABEL_4164;
          case -2147016402:
            goto LABEL_4165;
          case -2147016401:
            goto LABEL_4166;
          case -2147016400:
            goto LABEL_4167;
          case -2147016399:
            goto LABEL_4168;
          case -2147016398:
            goto LABEL_4169;
          case -2147016397:
            goto LABEL_4170;
          case -2147016396:
            goto LABEL_4171;
          case -2147016395:
            goto LABEL_4172;
          case -2147016394:
            goto LABEL_4173;
          case -2147016393:
            goto LABEL_4174;
          case -2147016392:
            goto LABEL_4175;
          case -2147016391:
            goto LABEL_4176;
          case -2147016390:
            goto LABEL_4177;
          case -2147016389:
            goto LABEL_4178;
          case -2147016388:
            goto LABEL_4179;
          case -2147016387:
            goto LABEL_4180;
          case -2147016386:
            goto LABEL_4181;
          case -2147016385:
            goto LABEL_4182;
          case -2147016384:
            goto LABEL_4183;
          case -2147016383:
            goto LABEL_4184;
          case -2147016382:
            goto LABEL_4185;
          case -2147016381:
            goto LABEL_4186;
          case -2147016380:
            goto LABEL_4187;
          case -2147016379:
            goto LABEL_4188;
          case -2147016378:
            goto LABEL_4189;
          case -2147016377:
            goto LABEL_4190;
          case -2147016376:
            goto LABEL_4191;
          case -2147016375:
            goto LABEL_4192;
          case -2147016374:
            goto LABEL_4193;
          case -2147016373:
            goto LABEL_4194;
          case -2147016372:
            goto LABEL_4195;
          case -2147016371:
            goto LABEL_4196;
          case -2147016370:
            goto LABEL_4197;
          case -2147016369:
            goto LABEL_4198;
          case -2147016368:
            goto LABEL_4199;
          case -2147016367:
            goto LABEL_4200;
          case -2147016366:
            goto LABEL_4201;
          case -2147016365:
            goto LABEL_4202;
          case -2147016364:
            goto LABEL_4203;
          case -2147016363:
            goto LABEL_4204;
          case -2147016362:
            goto LABEL_4205;
          case -2147016361:
            goto LABEL_4206;
          case -2147016360:
            goto LABEL_4207;
          case -2147016359:
            goto LABEL_4208;
          case -2147016358:
            goto LABEL_4209;
          case -2147016357:
            goto LABEL_4210;
          case -2147016356:
            goto LABEL_4211;
          case -2147016355:
            goto LABEL_4212;
          case -2147016354:
            goto LABEL_4213;
          case -2147016353:
            goto LABEL_4214;
          case -2147016352:
            goto LABEL_4215;
          case -2147016351:
            goto LABEL_4216;
          case -2147016350:
            goto LABEL_4217;
          case -2147016349:
            goto LABEL_4218;
          case -2147016348:
            goto LABEL_4219;
          case -2147016347:
            goto LABEL_4220;
          case -2147016346:
            goto LABEL_4221;
          case -2147016345:
            goto LABEL_4222;
          case -2147016344:
            goto LABEL_4223;
          case -2147016343:
            goto LABEL_4224;
          case -2147016342:
            goto LABEL_4225;
          case -2147016341:
            goto LABEL_4226;
          case -2147016340:
            goto LABEL_4227;
          case -2147016339:
            goto LABEL_4228;
          case -2147016338:
            goto LABEL_4229;
          case -2147016337:
            goto LABEL_4230;
          case -2147016336:
            goto LABEL_4231;
          case -2147016335:
            goto LABEL_4232;
          case -2147016334:
            goto LABEL_4233;
          case -2147016333:
            goto LABEL_4234;
          case -2147016332:
            goto LABEL_4235;
          case -2147016331:
            goto LABEL_4236;
          case -2147016330:
            goto LABEL_4237;
          case -2147016329:
            goto LABEL_4238;
          case -2147016328:
            goto LABEL_4239;
          case -2147016327:
            goto LABEL_4240;
          case -2147016326:
            goto LABEL_4241;
          case -2147016325:
            goto LABEL_4242;
          default:
            return L"Unknown";
        }
      }
      if ( a1 == -2147016662 )
        return L"ERROR_DS_AUTH_UNKNOWN";
      if ( a1 <= -2147019836 )
      {
        if ( a1 == -2147019836 )
          return L"ERROR_CLUSTER_NETWORK_NOT_INTERNAL";
        if ( a1 <= -2147020563 )
        {
          if ( a1 == -2147020563 )
            return L"ERROR_CLEANER_CARTRIDGE_SPENT";
          if ( a1 > -2147020685 )
          {
            switch ( a1 )
            {
              case -2147020684:
                return L"ERROR_WMI_ALREADY_DISABLED";
              case -2147020683:
                return L"ERROR_WMI_READ_ONLY";
              case -2147020682:
                return L"ERROR_WMI_SET_FAILURE";
              case -2147020596:
                return L"ERROR_INVALID_MEDIA";
              case -2147020595:
                return L"ERROR_INVALID_LIBRARY";
              case -2147020594:
                return L"ERROR_INVALID_MEDIA_POOL";
              case -2147020593:
                return L"ERROR_DRIVE_MEDIA_MISMATCH";
              case -2147020592:
                return L"ERROR_MEDIA_OFFLINE";
              case -2147020591:
                return L"ERROR_LIBRARY_OFFLINE";
              case -2147020590:
                return L"ERROR_EMPTY";
              case -2147020589:
                return L"ERROR_NOT_EMPTY";
              case -2147020588:
                return L"ERROR_MEDIA_UNAVAILABLE";
              case -2147020587:
                goto LABEL_3658;
              case -2147020586:
                goto LABEL_3659;
              case -2147020585:
                goto LABEL_3660;
              case -2147020584:
                goto LABEL_3661;
              case -2147020583:
                goto LABEL_3662;
              case -2147020582:
                goto LABEL_3663;
              case -2147020581:
                goto LABEL_3664;
              case -2147020580:
                goto LABEL_3665;
              case -2147020579:
                goto LABEL_3666;
              case -2147020578:
                goto LABEL_3667;
              case -2147020577:
                goto LABEL_3668;
              case -2147020576:
                goto LABEL_3669;
              case -2147020575:
                goto LABEL_3670;
              case -2147020574:
                goto LABEL_3671;
              case -2147020573:
                goto LABEL_3672;
              case -2147020572:
                goto LABEL_3673;
              case -2147020571:
                goto LABEL_3674;
              case -2147020570:
                goto LABEL_3675;
              case -2147020569:
                goto LABEL_3676;
              case -2147020568:
                goto LABEL_3677;
              case -2147020567:
                goto LABEL_3678;
              case -2147020566:
                goto LABEL_3679;
              case -2147020565:
                goto LABEL_3680;
              case -2147020564:
                goto LABEL_3681;
              default:
                return L"Unknown";
            }
          }
          if ( a1 != -2147020685 )
          {
            if ( a1 <= -2147020896 )
            {
              if ( a1 != -2147020896 )
              {
                if ( a1 > -2147021890 )
                {
                  switch ( a1 )
                  {
                    case -2147021889:
                      return L"ERROR_INVALID_PRINT_MONITOR";
                    case -2147021888:
                      return L"ERROR_PRINT_MONITOR_IN_USE";
                    case -2147021887:
                      return L"ERROR_PRINTER_HAS_JOBS_QUEUED";
                    case -2147021886:
                      return L"ERROR_SUCCESS_REBOOT_REQUIRED";
                    case -2147021885:
                      return L"ERROR_SUCCESS_RESTART_REQUIRED";
                    case -2147021884:
                      return L"ERROR_PRINTER_NOT_FOUND";
                    case -2147021883:
                      return L"ERROR_PRINTER_DRIVER_WARNED";
                    case -2147021882:
                      return L"ERROR_PRINTER_DRIVER_BLOCKED";
                    default:
                      return L"Unknown";
                  }
                }
                if ( a1 != -2147021890 )
                {
                  if ( a1 <= -2147021895 )
                  {
                    if ( a1 != -2147021895 )
                    {
                      if ( a1 != -2147022495 )
                      {
                        if ( a1 != -2147022494 )
                        {
                          if ( a1 != -2147022492 )
                          {
                            if ( a1 != -2147021896 )
                              return L"Unknown";
                            return L"ERROR_UNKNOWN_PRINT_MONITOR";
                          }
                          return L"ERROR_DEVICE_IN_USE";
                        }
                        return L"ERROR_ACTIVE_CONNECTIONS";
                      }
                      return L"ERROR_OPEN_FILES";
                    }
                    return L"ERROR_PRINTER_DRIVER_IN_USE";
                  }
                  if ( a1 != -2147021894 )
                  {
                    if ( a1 != -2147021893 )
                    {
                      if ( a1 != -2147021892 )
                        return L"ERROR_PRINT_PROCESSOR_ALREADY_INSTALLED";
                      return L"ERROR_SPL_NO_ADDJOB";
                    }
                    return L"ERROR_SPL_NO_STARTDOC";
                  }
                  return L"ERROR_SPOOL_FILE_NOT_FOUND";
                }
                return L"ERROR_PRINT_MONITOR_ALREADY_INSTALLED";
              }
              return L"ERROR_WINS_INTERNAL";
            }
            if ( a1 > -2147020694 )
            {
              switch ( a1 )
              {
                case -2147020693:
                  return L"ERROR_WMI_TRY_AGAIN";
                case -2147020692:
                  return L"ERROR_WMI_DP_NOT_FOUND";
                case -2147020691:
                  return L"ERROR_WMI_UNRESOLVED_INSTANCE_REF";
                case -2147020690:
                  return L"ERROR_WMI_ALREADY_ENABLED";
                case -2147020689:
                  return L"ERROR_WMI_GUID_DISCONNECTED";
                case -2147020688:
                  return L"ERROR_WMI_SERVER_UNAVAILABLE";
                case -2147020687:
                  return L"ERROR_WMI_DP_FAILED";
                case -2147020686:
                  return L"ERROR_WMI_INVALID_MOF";
                default:
                  return L"Unknown";
              }
            }
            if ( a1 != -2147020694 )
            {
              if ( a1 <= -2147020891 )
              {
                if ( a1 != -2147020891 )
                {
                  if ( a1 != -2147020895 )
                  {
                    if ( a1 != -2147020894 )
                    {
                      if ( a1 != -2147020893 )
                        return L"ERROR_FULL_BACKUP";
                      return L"ERROR_INC_BACKUP";
                    }
                    return L"ERROR_STATIC_INIT";
                  }
                  return L"ERROR_CAN_NOT_DEL_LOCAL_WINS";
                }
                return L"ERROR_REC_NON_EXISTENT";
              }
              if ( a1 != -2147020890 )
              {
                if ( a1 != -2147020796 )
                {
                  if ( a1 != -2147020696 )
                  {
                    if ( a1 != -2147020695 )
                      return L"Unknown";
                    return L"ERROR_WMI_INSTANCE_NOT_FOUND";
                  }
                  return L"ERROR_WMI_GUID_NOT_FOUND";
                }
                return L"ERROR_DHCP_ADDRESS_CONFLICT";
              }
              return L"ERROR_RPL_NOT_ALLOWED";
            }
            return L"ERROR_WMI_ITEMID_NOT_FOUND";
          }
          return L"ERROR_WMI_INVALID_REGINFO";
        }
        if ( a1 <= -2147020506 )
        {
          if ( a1 != -2147020506 )
          {
            switch ( a1 )
            {
              case -2147020562:
                goto LABEL_3683;
              case -2147020561:
                goto LABEL_3684;
              case -2147020560:
                goto LABEL_3685;
              case -2147020559:
                goto LABEL_3692;
              case -2147020558:
                goto LABEL_3693;
              case -2147020557:
                goto LABEL_3694;
              case -2147020556:
                goto LABEL_3695;
              case -2147020546:
                goto LABEL_3686;
              case -2147020545:
                goto LABEL_3687;
              case -2147020544:
                goto LABEL_3688;
              default:
                return L"Unknown";
            }
          }
          return L"ERROR_NOT_A_REPARSE_POINT";
        }
        if ( a1 > -2147019869 )
        {
          switch ( a1 )
          {
            case -2147019868:
              goto LABEL_3728;
            case -2147019867:
              goto LABEL_3729;
            case -2147019866:
              goto LABEL_3730;
            case -2147019865:
              goto LABEL_3731;
            case -2147019864:
              goto LABEL_3732;
            case -2147019863:
              goto LABEL_3733;
            case -2147019862:
              goto LABEL_3734;
            case -2147019861:
              goto LABEL_3735;
            case -2147019860:
              goto LABEL_3736;
            case -2147019859:
              goto LABEL_3737;
            case -2147019858:
              goto LABEL_3738;
            case -2147019857:
              goto LABEL_3739;
            case -2147019856:
              goto LABEL_3740;
            case -2147019855:
              goto LABEL_3741;
            case -2147019854:
              goto LABEL_3742;
            case -2147019853:
              goto LABEL_3743;
            case -2147019852:
              goto LABEL_3744;
            case -2147019851:
              goto LABEL_3745;
            case -2147019850:
              goto LABEL_3746;
            case -2147019849:
              goto LABEL_3747;
            case -2147019848:
              goto LABEL_3748;
            case -2147019847:
              goto LABEL_3749;
            case -2147019846:
              goto LABEL_3750;
            case -2147019845:
              goto LABEL_3751;
            case -2147019844:
              goto LABEL_3752;
            case -2147019843:
              goto LABEL_3753;
            case -2147019842:
              goto LABEL_3754;
            case -2147019840:
              goto LABEL_3755;
            case -2147019839:
              goto LABEL_3756;
            case -2147019838:
              goto LABEL_3757;
            case -2147019837:
              goto LABEL_3758;
            default:
              return L"Unknown";
          }
        }
        if ( a1 == -2147019869 )
          return L"ERROR_QUORUM_RESOURCE_ONLINE_FAILED";
        if ( a1 > -2147019885 )
        {
          switch ( a1 )
          {
            case -2147019884:
              return L"ERROR_GROUP_NOT_AVAILABLE";
            case -2147019883:
              goto LABEL_3713;
            case -2147019882:
              goto LABEL_3714;
            case -2147019881:
              goto LABEL_3715;
            case -2147019880:
              goto LABEL_3716;
            case -2147019879:
              goto LABEL_3717;
            case -2147019878:
              goto LABEL_3718;
            case -2147019877:
              goto LABEL_3719;
            case -2147019876:
              goto LABEL_3720;
            case -2147019875:
              goto LABEL_3721;
            case -2147019874:
              goto LABEL_3722;
            case -2147019873:
              goto LABEL_3723;
            case -2147019872:
              goto LABEL_3724;
            case -2147019871:
              goto LABEL_3725;
            case -2147019870:
              goto LABEL_3726;
            default:
              return L"Unknown";
          }
        }
        if ( a1 == -2147019885 )
          return L"ERROR_OBJECT_IN_LIST";
        if ( a1 > -2147019893 )
        {
          switch ( a1 )
          {
            case -2147019892:
              return L"ERROR_RESOURCE_NOT_ONLINE";
            case -2147019891:
              return L"ERROR_HOST_NODE_NOT_AVAILABLE";
            case -2147019890:
              return L"ERROR_RESOURCE_NOT_AVAILABLE";
            case -2147019889:
              return L"ERROR_RESOURCE_NOT_FOUND";
            case -2147019888:
              return L"ERROR_SHUTDOWN_CLUSTER";
            case -2147019887:
              return L"ERROR_CANT_EVICT_ACTIVE_NODE";
          }
          return L"ERROR_OBJECT_ALREADY_EXISTS";
        }
        switch ( a1 )
        {
          case -2147019893:
            return L"ERROR_DEPENDENCY_ALREADY_EXISTS";
          case -2147020505:
            return L"ERROR_REPARSE_ATTRIBUTE_CONFLICT";
          case -2147020504:
            return L"ERROR_INVALID_REPARSE_DATA";
          case -2147020503:
            return L"ERROR_REPARSE_TAG_INVALID";
          case -2147020502:
            return L"ERROR_REPARSE_TAG_MISMATCH";
        }
        if ( a1 != -2147020396 )
        {
          if ( a1 == -2147019895 )
            return L"ERROR_DEPENDENT_RESOURCE_EXISTS";
          if ( a1 == -2147019894 )
            return L"ERROR_DEPENDENCY_NOT_FOUND";
          return L"Unknown";
        }
        return L"ERROR_VOLUME_NOT_SIS_ENABLED";
      }
      if ( a1 <= -2147019006 )
      {
        if ( a1 != -2147019006 )
        {
          switch ( a1 )
          {
            case -2147019835:
              goto LABEL_3760;
            case -2147019834:
              goto LABEL_3761;
            case -2147019833:
              goto LABEL_3762;
            case -2147019832:
              goto LABEL_3763;
            case -2147019831:
              goto LABEL_3764;
            case -2147019830:
              goto LABEL_3765;
            case -2147019829:
              goto LABEL_3766;
            case -2147019828:
              goto LABEL_3767;
            case -2147019827:
              goto LABEL_3768;
            case -2147019826:
              goto LABEL_3769;
            case -2147019825:
              goto LABEL_3770;
            case -2147019824:
              goto LABEL_3771;
            case -2147019823:
              goto LABEL_3772;
            case -2147019822:
              goto LABEL_3773;
            case -2147019821:
              goto LABEL_3774;
            case -2147019820:
              goto LABEL_3775;
            case -2147019819:
              goto LABEL_3776;
            case -2147019818:
              goto LABEL_3777;
            case -2147019817:
              goto LABEL_3778;
            case -2147019816:
              goto LABEL_3779;
            case -2147019815:
              goto LABEL_3780;
            case -2147019814:
              goto LABEL_3781;
            case -2147019813:
              goto LABEL_3782;
            case -2147019812:
              goto LABEL_3783;
            case -2147019811:
              goto LABEL_3784;
            case -2147019810:
              goto LABEL_3785;
            case -2147019809:
              goto LABEL_3786;
            case -2147019808:
              goto LABEL_3787;
            case -2147019807:
              goto LABEL_3788;
            default:
              return L"Unknown";
          }
        }
        return L"ERROR_CLUSTER_MEMBERSHIP_INVALID_STATE";
      }
      if ( a1 <= -2147018896 )
      {
        if ( a1 != -2147018896 )
        {
          switch ( a1 )
          {
            case -2147019005:
              goto LABEL_3793;
            case -2147019004:
              goto LABEL_3794;
            case -2147019003:
              goto LABEL_3795;
            case -2147019002:
              goto LABEL_3796;
            case -2147019001:
              goto LABEL_3797;
            case -2147019000:
              goto LABEL_3798;
            case -2147018999:
              goto LABEL_3799;
            case -2147018998:
              goto LABEL_3800;
            case -2147018997:
              goto LABEL_3801;
            case -2147018996:
              goto LABEL_3802;
            default:
              return L"Unknown";
          }
        }
        return L"ERROR_ENCRYPTION_FAILED";
      }
      if ( a1 <= -2147018778 )
      {
        if ( a1 != -2147018778 )
        {
          switch ( a1 )
          {
            case -2147018895:
              goto LABEL_3807;
            case -2147018894:
              goto LABEL_3808;
            case -2147018893:
              goto LABEL_3809;
            case -2147018892:
              goto LABEL_3810;
            case -2147018891:
              goto LABEL_3811;
            case -2147018890:
              goto LABEL_3812;
            case -2147018889:
              goto LABEL_3813;
            case -2147018888:
              goto LABEL_3814;
            case -2147018887:
              goto LABEL_3815;
            case -2147018886:
              goto LABEL_3816;
            case -2147018885:
              goto LABEL_3817;
            case -2147018884:
              goto LABEL_3818;
            case -2147018883:
              goto LABEL_3819;
            case -2147018882:
              goto LABEL_3820;
            case -2147018881:
              goto LABEL_3821;
            case -2147018880:
              goto LABEL_3822;
            default:
              return L"Unknown";
          }
        }
        return L"ERROR_NO_BROWSER_SERVERS_FOUND";
      }
      if ( a1 <= -2147016890 )
      {
        if ( a1 == -2147016890 )
          return L"FRS_ERR_SERVICE_COMM";
        if ( a1 <= -2147017861 )
        {
          if ( a1 == -2147017861 )
            return L"ERROR_CTX_GRAPHICS_INVALID";
          if ( a1 > -2147017885 )
          {
            switch ( a1 )
            {
              case -2147017884:
                return L"ERROR_CTX_MODEM_RESPONSE_TIMEOUT";
              case -2147017883:
                return L"ERROR_CTX_MODEM_RESPONSE_NO_CARRIER";
              case -2147017882:
                return L"ERROR_CTX_MODEM_RESPONSE_NO_DIALTONE";
              case -2147017881:
                goto LABEL_3860;
              case -2147017880:
                goto LABEL_3861;
              case -2147017879:
                goto LABEL_3862;
              case -2147017874:
                goto LABEL_3863;
              case -2147017873:
                goto LABEL_3864;
              case -2147017872:
                goto LABEL_3865;
              case -2147017871:
                goto LABEL_3866;
              default:
                return L"Unknown";
            }
          }
          if ( a1 != -2147017885 )
          {
            if ( a1 <= -2147017891 )
            {
              if ( a1 != -2147017891 )
              {
                if ( a1 != -2147018696 )
                {
                  if ( a1 != -2147017895 )
                  {
                    if ( a1 != -2147017894 )
                    {
                      if ( a1 != -2147017893 )
                      {
                        if ( a1 != -2147017892 )
                          return L"Unknown";
                        return L"ERROR_CTX_WD_NOT_FOUND";
                      }
                      return L"ERROR_CTX_PD_NOT_FOUND";
                    }
                    return L"ERROR_CTX_INVALID_PD";
                  }
                  return L"ERROR_CTX_WINSTATION_NAME_INVALID";
                }
                return L"SCHED_E_SERVICE_NOT_LOCALSYSTEM";
              }
              return L"ERROR_CTX_CANNOT_MAKE_EVENTLOG_ENTRY";
            }
            if ( a1 != -2147017890 )
            {
              if ( a1 != -2147017889 )
              {
                if ( a1 != -2147017888 )
                {
                  if ( a1 != -2147017887 )
                    return L"ERROR_CTX_INVALID_MODEMNAME";
                  return L"ERROR_CTX_MODEM_INF_NOT_FOUND";
                }
                return L"ERROR_CTX_NO_OUTBUF";
              }
              return L"ERROR_CTX_CLOSE_PENDING";
            }
            return L"ERROR_CTX_SERVICE_NAME_COLLISION";
          }
          return L"ERROR_CTX_MODEM_RESPONSE_ERROR";
        }
        if ( a1 > -2147016895 )
        {
          switch ( a1 )
          {
            case -2147016894:
              return L"FRS_ERR_STARTING_SERVICE";
            case -2147016893:
              return L"FRS_ERR_STOPPING_SERVICE";
            case -2147016892:
              return L"FRS_ERR_INTERNAL_API";
          }
          return L"FRS_ERR_INTERNAL";
        }
        if ( a1 != -2147016895 )
        {
          switch ( a1 )
          {
            case -2147017859:
              goto LABEL_3868;
            case -2147017858:
              goto LABEL_3869;
            case -2147017856:
              goto LABEL_3870;
            case -2147017855:
              goto LABEL_3871;
            case -2147017854:
              goto LABEL_3872;
            case -2147017852:
              goto LABEL_3873;
            case -2147017851:
              return L"ERROR_CTX_WINSTATION_ACCESS_DENIED";
            case -2147017847:
              goto LABEL_3878;
            case -2147017846:
              goto LABEL_3879;
            case -2147017845:
              goto LABEL_3880;
            case -2147017844:
              goto LABEL_3881;
            case -2147017843:
              goto LABEL_3882;
            case -2147017842:
              goto LABEL_3883;
            case -2147017841:
              goto LABEL_3884;
            case -2147017840:
              goto LABEL_3885;
            case -2147017839:
              goto LABEL_3886;
            case -2147017838:
              goto LABEL_3887;
            default:
              return L"Unknown";
          }
        }
        return L"FRS_ERR_INVALID_API_SEQUENCE";
      }
      if ( a1 > -2147016696 )
      {
        switch ( a1 )
        {
          case -2147016695:
            return L"ERROR_DS_MEMBERSHIP_EVALUATED_LOCALLY";
          case -2147016694:
            goto LABEL_3909;
          case -2147016693:
            goto LABEL_3910;
          case -2147016692:
            goto LABEL_3911;
          case -2147016691:
            goto LABEL_3912;
          case -2147016690:
            goto LABEL_3913;
          case -2147016689:
            goto LABEL_3914;
          case -2147016688:
            goto LABEL_3915;
          case -2147016687:
            goto LABEL_3916;
          case -2147016686:
            goto LABEL_3917;
          case -2147016685:
            goto LABEL_3918;
          case -2147016684:
            goto LABEL_3919;
          case -2147016683:
            goto LABEL_3920;
          case -2147016682:
            goto LABEL_3921;
          case -2147016681:
            goto LABEL_3922;
          case -2147016680:
            goto LABEL_3923;
          case -2147016679:
            goto LABEL_3924;
          case -2147016678:
            goto LABEL_3925;
          case -2147016677:
            goto LABEL_3926;
          case -2147016676:
            goto LABEL_3927;
          case -2147016675:
            goto LABEL_3928;
          case -2147016674:
            goto LABEL_3929;
          case -2147016672:
            goto LABEL_3930;
          case -2147016671:
            goto LABEL_3931;
          case -2147016670:
            goto LABEL_3932;
          case -2147016669:
            goto LABEL_3933;
          case -2147016668:
            goto LABEL_3934;
          case -2147016667:
            goto LABEL_3935;
          case -2147016666:
            goto LABEL_3936;
          case -2147016665:
            goto LABEL_3937;
          case -2147016664:
            goto LABEL_3938;
          case -2147016663:
            goto LABEL_3939;
          default:
            return L"Unknown";
        }
      }
      if ( a1 != -2147016696 )
      {
        switch ( a1 )
        {
          case -2147016889:
            goto LABEL_3895;
          case -2147016888:
            goto LABEL_3896;
          case -2147016887:
            goto LABEL_3897;
          case -2147016886:
            goto LABEL_3898;
          case -2147016885:
            goto LABEL_3899;
          case -2147016884:
            goto LABEL_3900;
          case -2147016883:
            goto LABEL_3901;
          case -2147016882:
            goto LABEL_3902;
          case -2147016881:
            goto LABEL_3903;
          case -2147016880:
            goto LABEL_3904;
          case -2147016879:
            goto LABEL_3905;
          default:
            return L"Unknown";
        }
      }
      return L"ERROR_DS_NOT_INSTALLED";
    }
    if ( a1 <= -2147015896 )
    {
      if ( a1 != -2147015896 )
      {
        switch ( a1 )
        {
          case -2147016323:
            goto LABEL_4244;
          case -2147016322:
            goto LABEL_4245;
          case -2147016321:
            goto LABEL_4246;
          case -2147016320:
            goto LABEL_4247;
          case -2147016319:
            goto LABEL_4248;
          case -2147016318:
            goto LABEL_4249;
          case -2147016317:
            goto LABEL_4250;
          case -2147016316:
            goto LABEL_4251;
          case -2147016315:
            goto LABEL_4252;
          case -2147016314:
            goto LABEL_4253;
          case -2147016313:
            goto LABEL_4254;
          case -2147016312:
            goto LABEL_4255;
          case -2147016311:
            goto LABEL_4256;
          case -2147016310:
            goto LABEL_4257;
          case -2147016309:
            goto LABEL_4258;
          case -2147016308:
            goto LABEL_4259;
          case -2147016307:
            goto LABEL_4260;
          case -2147016306:
            goto LABEL_4261;
          case -2147016305:
            goto LABEL_4262;
          case -2147016304:
            goto LABEL_4263;
          case -2147016303:
            goto LABEL_4264;
          case -2147016302:
            goto LABEL_4265;
          case -2147016301:
            goto LABEL_4266;
          case -2147016300:
            goto LABEL_4267;
          case -2147016299:
            goto LABEL_4268;
          case -2147016298:
            goto LABEL_4269;
          case -2147016297:
            goto LABEL_4270;
          case -2147016296:
            goto LABEL_4271;
          case -2147016295:
            goto LABEL_4272;
          default:
            return L"Unknown";
        }
      }
      return L"DNS_ERROR_RESPONSE_CODES_BASE";
    }
    if ( a1 <= -2147015396 )
    {
      if ( a1 != -2147015396 )
      {
        switch ( a1 )
        {
          case -2147015895:
            goto LABEL_4277;
          case -2147015894:
            goto LABEL_4278;
          case -2147015893:
            goto LABEL_4279;
          case -2147015892:
            goto LABEL_4280;
          case -2147015891:
            goto LABEL_4281;
          case -2147015890:
            goto LABEL_4282;
          case -2147015889:
            goto LABEL_4283;
          case -2147015888:
            goto LABEL_4284;
          case -2147015887:
            goto LABEL_4285;
          case -2147015886:
            goto LABEL_4286;
          case -2147015880:
            goto LABEL_4287;
          case -2147015879:
            goto LABEL_4288;
          case -2147015878:
            goto LABEL_4289;
          default:
            return L"Unknown";
        }
      }
      return L"DNS_ERROR_PACKET_FMT_BASE";
    }
    if ( a1 > -2147010885 )
    {
      if ( a1 > -2146959359 )
      {
        if ( a1 > -2146893823 )
        {
          if ( a1 > -2146893056 )
          {
            if ( a1 > -2146889727 )
            {
              if ( a1 > -2146885631 )
              {
                if ( a1 > -2146881536 )
                {
                  if ( a1 > -2146881280 )
                  {
                    return L"CRYPT_E_ASN1_INTERNAL";
                  }
                  else if ( a1 == -2146881280 )
                  {
                    return L"CRYPT_E_ASN1_ERROR";
                  }
                  else
                  {
                    switch ( a1 )
                    {
                      case -2146881535:
                        result = L"OSS_MORE_BUF";
                        break;
                      case -2146881534:
                        result = L"OSS_NEGATIVE_UINTEGER";
                        break;
                      case -2146881533:
                        result = L"OSS_PDU_RANGE";
                        break;
                      case -2146881532:
                        result = L"OSS_MORE_INPUT";
                        break;
                      case -2146881531:
                        result = L"OSS_DATA_ERROR";
                        break;
                      case -2146881530:
                        result = L"OSS_BAD_ARG";
                        break;
                      case -2146881529:
                        result = L"OSS_BAD_VERSION";
                        break;
                      case -2146881528:
                        result = L"OSS_OUT_MEMORY";
                        break;
                      case -2146881527:
                        result = L"OSS_PDU_MISMATCH";
                        break;
                      case -2146881526:
                        result = L"OSS_LIMITED";
                        break;
                      case -2146881525:
                        result = L"OSS_BAD_PTR";
                        break;
                      case -2146881524:
                        result = L"OSS_BAD_TIME";
                        break;
                      case -2146881523:
                        result = L"OSS_INDEFINITE_NOT_SUPPORTED";
                        break;
                      case -2146881522:
                        result = L"OSS_MEM_ERROR";
                        break;
                      case -2146881521:
                        result = L"OSS_BAD_TABLE";
                        break;
                      case -2146881520:
                        result = L"OSS_TOO_LONG";
                        break;
                      case -2146881519:
                        result = L"OSS_CONSTRAINT_VIOLATED";
                        break;
                      case -2146881518:
                        result = L"OSS_FATAL_ERROR";
                        break;
                      case -2146881517:
                        result = L"OSS_ACCESS_SERIALIZATION_ERROR";
                        break;
                      case -2146881516:
                        result = L"OSS_NULL_TBL";
                        break;
                      case -2146881515:
                        result = L"OSS_NULL_FCN";
                        break;
                      case -2146881514:
                        result = L"OSS_BAD_ENCRULES";
                        break;
                      case -2146881513:
                        result = L"OSS_UNAVAIL_ENCRULES";
                        break;
                      case -2146881512:
                        result = L"OSS_CANT_OPEN_TRACE_WINDOW";
                        break;
                      case -2146881511:
                        result = L"OSS_UNIMPLEMENTED";
                        break;
                      case -2146881510:
                        result = L"OSS_OID_DLL_NOT_LINKED";
                        break;
                      case -2146881509:
                        result = L"OSS_CANT_OPEN_TRACE_FILE";
                        break;
                      case -2146881508:
                        result = L"OSS_TRACE_FILE_ALREADY_OPEN";
                        break;
                      case -2146881507:
                        result = L"OSS_TABLE_MISMATCH";
                        break;
                      case -2146881506:
                        result = L"OSS_TYPE_NOT_SUPPORTED";
                        break;
                      case -2146881505:
                        result = L"OSS_REAL_DLL_NOT_LINKED";
                        break;
                      case -2146881504:
                        result = L"OSS_REAL_CODE_NOT_LINKED";
                        break;
                      case -2146881503:
                        result = L"OSS_OUT_OF_RANGE";
                        break;
                      case -2146881502:
                        result = L"OSS_COPIER_DLL_NOT_LINKED";
                        break;
                      case -2146881501:
                        result = L"OSS_CONSTRAINT_DLL_NOT_LINKED";
                        break;
                      case -2146881500:
                        result = L"OSS_COMPARATOR_DLL_NOT_LINKED";
                        break;
                      case -2146881499:
                        result = L"OSS_COMPARATOR_CODE_NOT_LINKED";
                        break;
                      case -2146881498:
                        result = L"OSS_MEM_MGR_DLL_NOT_LINKED";
                        break;
                      case -2146881497:
                        result = L"OSS_PDV_DLL_NOT_LINKED";
                        break;
                      case -2146881496:
                        result = L"OSS_PDV_CODE_NOT_LINKED";
                        break;
                      case -2146881495:
                        result = L"OSS_API_DLL_NOT_LINKED";
                        break;
                      case -2146881494:
                        result = L"OSS_BERDER_DLL_NOT_LINKED";
                        break;
                      case -2146881493:
                        result = L"OSS_PER_DLL_NOT_LINKED";
                        break;
                      case -2146881492:
                        result = L"OSS_OPEN_TYPE_ERROR";
                        break;
                      case -2146881491:
                        result = L"OSS_MUTEX_NOT_CREATED";
                        break;
                      case -2146881490:
                        result = L"OSS_CANT_CLOSE_TRACE_FILE";
                        break;
                      default:
                        return L"Unknown";
                    }
                  }
                }
                else if ( a1 == -2146881536 )
                {
                  return L"CRYPT_E_OSS_ERROR";
                }
                else
                {
                  switch ( a1 )
                  {
                    case -2146885630:
                      result = L"CRYPT_E_BAD_ENCODE";
                      break;
                    case -2146885629:
                      result = L"CRYPT_E_FILE_ERROR";
                      break;
                    case -2146885628:
                      result = L"CRYPT_E_NOT_FOUND";
                      break;
                    case -2146885627:
                      result = L"CRYPT_E_EXISTS";
                      break;
                    case -2146885626:
                      result = L"CRYPT_E_NO_PROVIDER";
                      break;
                    case -2146885625:
                      result = L"CRYPT_E_SELF_SIGNED";
                      break;
                    case -2146885624:
                      result = L"CRYPT_E_DELETED_PREV";
                      break;
                    case -2146885623:
                      result = L"CRYPT_E_NO_MATCH";
                      break;
                    case -2146885622:
                      result = L"CRYPT_E_UNEXPECTED_MSG_TYPE";
                      break;
                    case -2146885621:
                      result = L"CRYPT_E_NO_KEY_PROPERTY";
                      break;
                    case -2146885620:
                      result = L"CRYPT_E_NO_DECRYPT_CERT";
                      break;
                    case -2146885619:
                      result = L"CRYPT_E_BAD_MSG";
                      break;
                    case -2146885618:
                      result = L"CRYPT_E_NO_SIGNER";
                      break;
                    case -2146885617:
                      result = L"CRYPT_E_PENDING_CLOSE";
                      break;
                    case -2146885616:
                      result = L"CRYPT_E_REVOKED";
                      break;
                    case -2146885615:
                      result = L"CRYPT_E_NO_REVOCATION_DLL";
                      break;
                    case -2146885614:
                      result = L"CRYPT_E_NO_REVOCATION_CHECK";
                      break;
                    case -2146885613:
                      result = L"CRYPT_E_REVOCATION_OFFLINE";
                      break;
                    case -2146885612:
                      result = L"CRYPT_E_NOT_IN_REVOCATION_DATABASE";
                      break;
                    case -2146885600:
                      result = L"CRYPT_E_INVALID_NUMERIC_STRING";
                      break;
                    case -2146885599:
                      result = L"CRYPT_E_INVALID_PRINTABLE_STRING";
                      break;
                    case -2146885598:
                      result = L"CRYPT_E_INVALID_IA5_STRING";
                      break;
                    case -2146885597:
                      result = L"CRYPT_E_INVALID_X500_STRING";
                      break;
                    case -2146885596:
                      result = L"CRYPT_E_NOT_CHAR_STRING";
                      break;
                    case -2146885595:
                      result = L"CRYPT_E_FILERESIZED";
                      break;
                    case -2146885594:
                      result = L"CRYPT_E_SECURITY_SETTINGS";
                      break;
                    case -2146885593:
                      result = L"CRYPT_E_NO_VERIFY_USAGE_DLL";
                      break;
                    case -2146885592:
                      result = L"CRYPT_E_NO_VERIFY_USAGE_CHECK";
                      break;
                    case -2146885591:
                      result = L"CRYPT_E_VERIFY_USAGE_OFFLINE";
                      break;
                    case -2146885590:
                      result = L"CRYPT_E_NOT_IN_CTL";
                      break;
                    case -2146885589:
                      result = L"CRYPT_E_NO_TRUSTED_SIGNER";
                      break;
                    case -2146885588:
                      result = L"CRYPT_E_MISSING_PUBKEY_PARA";
                      break;
                    default:
                      return L"Unknown";
                  }
                }
              }
              else if ( a1 == -2146885631 )
              {
                return L"CRYPT_E_BAD_LEN";
              }
              else
              {
                switch ( a1 )
                {
                  case -2146889726:
                    result = L"CRYPT_E_UNKNOWN_ALGO";
                    break;
                  case -2146889725:
                    result = L"CRYPT_E_OID_FORMAT";
                    break;
                  case -2146889724:
                    result = L"CRYPT_E_INVALID_MSG_TYPE";
                    break;
                  case -2146889723:
                    result = L"CRYPT_E_UNEXPECTED_ENCODING";
                    break;
                  case -2146889722:
                    result = L"CRYPT_E_AUTH_ATTR_MISSING";
                    break;
                  case -2146889721:
                    result = L"CRYPT_E_HASH_VALUE";
                    break;
                  case -2146889720:
                    result = L"CRYPT_E_INVALID_INDEX";
                    break;
                  case -2146889719:
                    result = L"CRYPT_E_ALREADY_DECRYPTED";
                    break;
                  case -2146889718:
                    result = L"CRYPT_E_NOT_DECRYPTED";
                    break;
                  case -2146889717:
                    result = L"CRYPT_E_RECIPIENT_NOT_FOUND";
                    break;
                  case -2146889716:
                    result = L"CRYPT_E_CONTROL_TYPE";
                    break;
                  case -2146889715:
                    result = L"CRYPT_E_ISSUER_SERIALNUMBER";
                    break;
                  case -2146889714:
                    result = L"CRYPT_E_SIGNER_NOT_FOUND";
                    break;
                  case -2146889713:
                    result = L"CRYPT_E_ATTRIBUTES_MISSING";
                    break;
                  case -2146889712:
                    result = L"CRYPT_E_STREAM_MSG_NOT_READY";
                    break;
                  case -2146889711:
                    result = L"CRYPT_E_STREAM_INSUFFICIENT_DATA";
                    break;
                  default:
                    return L"Unknown";
                }
              }
            }
            else if ( a1 == -2146889727 )
            {
              return L"CRYPT_E_MSG_ERROR";
            }
            else
            {
              switch ( a1 )
              {
                case -2146893055:
                  result = L"SEC_E_INVALID_HANDLE";
                  break;
                case -2146893054:
                  result = L"SEC_E_UNSUPPORTED_FUNCTION";
                  break;
                case -2146893053:
                  result = L"SEC_E_TARGET_UNKNOWN";
                  break;
                case -2146893052:
                  result = L"SEC_E_INTERNAL_ERROR";
                  break;
                case -2146893051:
                  result = L"SEC_E_SECPKG_NOT_FOUND";
                  break;
                case -2146893050:
                  result = L"SEC_E_NOT_OWNER";
                  break;
                case -2146893049:
                  result = L"SEC_E_CANNOT_INSTALL";
                  break;
                case -2146893048:
                  result = L"SEC_E_INVALID_TOKEN";
                  break;
                case -2146893047:
                  result = L"SEC_E_CANNOT_PACK";
                  break;
                case -2146893046:
                  result = L"SEC_E_QOP_NOT_SUPPORTED";
                  break;
                case -2146893045:
                  result = L"SEC_E_NO_IMPERSONATION";
                  break;
                case -2146893044:
                  result = L"SEC_E_LOGON_DENIED";
                  break;
                case -2146893043:
                  result = L"SEC_E_UNKNOWN_CREDENTIALS";
                  break;
                case -2146893042:
                  result = L"SEC_E_NO_CREDENTIALS";
                  break;
                case -2146893041:
                  result = L"SEC_E_MESSAGE_ALTERED";
                  break;
                case -2146893040:
                  result = L"SEC_E_OUT_OF_SEQUENCE";
                  break;
                case -2146893039:
                  result = L"SEC_E_NO_AUTHENTICATING_AUTHORITY";
                  break;
                case -2146893034:
                  result = L"SEC_E_BAD_PKGID";
                  break;
                case -2146893033:
                  result = L"SEC_E_CONTEXT_EXPIRED";
                  break;
                case -2146893032:
                  result = L"SEC_E_INCOMPLETE_MESSAGE";
                  break;
                case -2146893024:
                  result = L"SEC_E_INCOMPLETE_CREDENTIALS";
                  break;
                case -2146893023:
                  result = L"SEC_E_BUFFER_TOO_SMALL";
                  break;
                case -2146893022:
                  result = L"SEC_E_WRONG_PRINCIPAL";
                  break;
                case -2146893020:
                  result = L"SEC_E_TIME_SKEW";
                  break;
                case -2146893019:
                  result = L"SEC_E_UNTRUSTED_ROOT";
                  break;
                case -2146893018:
                  result = L"SEC_E_ILLEGAL_MESSAGE";
                  break;
                case -2146893017:
                  result = L"SEC_E_CERT_UNKNOWN";
                  break;
                case -2146893016:
                  result = L"SEC_E_CERT_EXPIRED";
                  break;
                case -2146893015:
                  result = L"SEC_E_ENCRYPT_FAILURE";
                  break;
                case -2146893008:
                  result = L"SEC_E_DECRYPT_FAILURE";
                  break;
                case -2146893007:
                  result = L"SEC_E_ALGORITHM_MISMATCH";
                  break;
                case -2146893006:
                  result = L"SEC_E_SECURITY_QOS_FAILED";
                  break;
                case -2146893005:
                  result = L"SEC_E_UNFINISHED_CONTEXT_DELETED";
                  break;
                case -2146893004:
                  result = L"SEC_E_NO_TGT_REPLY";
                  break;
                case -2146893003:
                  result = L"SEC_E_NO_IP_ADDRESSES";
                  break;
                case -2146893002:
                  result = L"SEC_E_WRONG_CREDENTIAL_HANDLE";
                  break;
                case -2146893001:
                  result = L"SEC_E_CRYPTO_SYSTEM_INVALID";
                  break;
                case -2146893000:
                  result = L"SEC_E_MAX_REFERRALS_EXCEEDED";
                  break;
                case -2146892999:
                  result = L"SEC_E_MUST_BE_KDC";
                  break;
                case -2146892998:
                  result = L"SEC_E_STRONG_CRYPTO_NOT_SUPPORTED";
                  break;
                case -2146892997:
                  result = L"SEC_E_TOO_MANY_PRINCIPALS";
                  break;
                case -2146892996:
                  result = L"SEC_E_NO_PA_DATA";
                  break;
                case -2146892995:
                  result = L"SEC_E_PKINIT_NAME_MISMATCH";
                  break;
                case -2146892994:
                  result = L"SEC_E_SMARTCARD_LOGON_REQUIRED";
                  break;
                case -2146892993:
                  result = L"SEC_E_SHUTDOWN_IN_PROGRESS";
                  break;
                case -2146892992:
                  result = L"SEC_E_KDC_INVALID_REQUEST";
                  break;
                case -2146892991:
                  result = L"SEC_E_KDC_UNABLE_TO_REFER";
                  break;
                case -2146892990:
                  result = L"SEC_E_KDC_UNKNOWN_ETYPE";
                  break;
                case -2146892989:
                  result = L"SEC_E_UNSUPPORTED_PREAUTH";
                  break;
                case -2146892987:
                  result = L"SEC_E_DELEGATION_REQUIRED";
                  break;
                case -2146892986:
                  result = L"SEC_E_BAD_BINDINGS";
                  break;
                case -2146892985:
                  result = L"SEC_E_MULTIPLE_ACCOUNTS";
                  break;
                case -2146892984:
                  result = L"SEC_E_NO_KERB_KEY";
                  break;
                case -2146892975:
                  result = L"SEC_E_SMARTCARD_CERT_REVOKED";
                  break;
                case -2146892974:
                  result = L"SEC_E_ISSUING_CA_UNTRUSTED";
                  break;
                case -2146892973:
                  result = L"SEC_E_REVOCATION_OFFLINE_C";
                  break;
                case -2146892972:
                  result = L"SEC_E_PKINIT_CLIENT_FAILURE";
                  break;
                case -2146892971:
                  result = L"SEC_E_SMARTCARD_CERT_EXPIRED";
                  break;
                default:
                  return L"Unknown";
              }
            }
          }
          else if ( a1 == -2146893056 )
          {
            return L"SEC_E_INSUFFICIENT_MEMORY";
          }
          else
          {
            switch ( a1 )
            {
              case -2146893822:
                result = L"NTE_BAD_HASH";
                break;
              case -2146893821:
                result = L"NTE_BAD_KEY";
                break;
              case -2146893820:
                result = L"NTE_BAD_LEN";
                break;
              case -2146893819:
                result = L"NTE_BAD_DATA";
                break;
              case -2146893818:
                result = L"NTE_BAD_SIGNATURE";
                break;
              case -2146893817:
                result = L"NTE_BAD_VER";
                break;
              case -2146893816:
                result = L"NTE_BAD_ALGID";
                break;
              case -2146893815:
                result = L"NTE_BAD_FLAGS";
                break;
              case -2146893814:
                result = L"NTE_BAD_TYPE";
                break;
              case -2146893813:
                result = L"NTE_BAD_KEY_STATE";
                break;
              case -2146893812:
                result = L"NTE_BAD_HASH_STATE";
                break;
              case -2146893811:
                result = L"NTE_NO_KEY";
                break;
              case -2146893810:
                result = L"NTE_NO_MEMORY";
                break;
              case -2146893809:
                result = L"NTE_EXISTS";
                break;
              case -2146893808:
                result = L"NTE_PERM";
                break;
              case -2146893807:
                result = L"NTE_NOT_FOUND";
                break;
              case -2146893806:
                result = L"NTE_DOUBLE_ENCRYPT";
                break;
              case -2146893805:
                result = L"NTE_BAD_PROVIDER";
                break;
              case -2146893804:
                result = L"NTE_BAD_PROV_TYPE";
                break;
              case -2146893803:
                result = L"NTE_BAD_PUBLIC_KEY";
                break;
              case -2146893802:
                result = L"NTE_BAD_KEYSET";
                break;
              case -2146893801:
                result = L"NTE_PROV_TYPE_NOT_DEF";
                break;
              case -2146893800:
                result = L"NTE_PROV_TYPE_ENTRY_BAD";
                break;
              case -2146893799:
                result = L"NTE_KEYSET_NOT_DEF";
                break;
              case -2146893798:
                result = L"NTE_KEYSET_ENTRY_BAD";
                break;
              case -2146893797:
                result = L"NTE_PROV_TYPE_NO_MATCH";
                break;
              case -2146893796:
                result = L"NTE_SIGNATURE_FILE_BAD";
                break;
              case -2146893795:
                result = L"NTE_PROVIDER_DLL_FAIL";
                break;
              case -2146893794:
                result = L"NTE_PROV_DLL_NOT_FOUND";
                break;
              case -2146893793:
                result = L"NTE_BAD_KEYSET_PARAM";
                break;
              case -2146893792:
                result = L"NTE_FAIL";
                break;
              case -2146893791:
                result = L"NTE_SYS_ERR";
                break;
              case -2146893790:
                result = L"NTE_SILENT_CONTEXT";
                break;
              case -2146893789:
                result = L"NTE_TOKEN_KEYSET_STORAGE_FULL";
                break;
              case -2146893788:
                result = L"NTE_TEMPORARY_PROFILE";
                break;
              case -2146893787:
                result = L"NTE_FIXEDPARAMETER";
                break;
              default:
                return L"Unknown";
            }
          }
        }
        else if ( a1 == -2146893823 )
        {
          return L"NTE_BAD_UID";
        }
        else
        {
          switch ( a1 )
          {
            case -2146959358:
              result = L"CO_E_SCM_ERROR";
              break;
            case -2146959357:
              result = L"CO_E_SCM_RPC_FAILURE";
              break;
            case -2146959356:
              result = L"CO_E_BAD_PATH";
              break;
            case -2146959355:
              result = L"CO_E_SERVER_EXEC_FAILURE";
              break;
            case -2146959354:
              result = L"CO_E_OBJSRV_RPC_FAILURE";
              break;
            case -2146959353:
              result = L"MK_E_NO_NORMALIZED";
              break;
            case -2146959352:
              result = L"CO_E_SERVER_STOPPING";
              break;
            case -2146959351:
              result = L"MEM_E_INVALID_ROOT";
              break;
            case -2146959344:
              result = L"MEM_E_INVALID_LINK";
              break;
            case -2146959343:
              result = L"MEM_E_INVALID_SIZE";
              break;
            default:
              return L"Unknown";
          }
        }
      }
      else
      {
        if ( a1 != -2146959359 )
        {
          switch ( a1 )
          {
            case -2147010884:
              goto LABEL_4641;
            case -2147010883:
              goto LABEL_4642;
            case -2147010882:
              goto LABEL_4643;
            case -2147010881:
              goto LABEL_4644;
            case -2147010880:
              goto LABEL_4645;
            case -2147010879:
              goto LABEL_4646;
            case -2147010878:
              goto LABEL_4647;
            case -2147010877:
              goto LABEL_4648;
            case -2147010876:
              goto LABEL_4649;
            case -2147010875:
              goto LABEL_4650;
            case -2147010874:
              goto LABEL_4651;
            case -2147010873:
              goto LABEL_4652;
            case -2147010872:
              goto LABEL_4653;
            case -2147010871:
              goto LABEL_4654;
            case -2147010870:
              goto LABEL_4655;
            case -2147010869:
              goto LABEL_4656;
            case -2147010868:
              goto LABEL_4657;
            case -2147010867:
              goto LABEL_4658;
            case -2147010866:
              goto LABEL_4659;
            case -2147010865:
              goto LABEL_4660;
            case -2147010864:
              goto LABEL_4661;
            case -2147010863:
              goto LABEL_4662;
            case -2147010862:
              goto LABEL_4663;
            case -2147010861:
              goto LABEL_4664;
            case -2147010860:
              goto LABEL_4665;
            case -2147010859:
              goto LABEL_4666;
            case -2147010858:
              goto LABEL_4667;
            case -2147010857:
              goto LABEL_4668;
            case -2147010856:
              goto LABEL_4669;
            case -2147010855:
              goto LABEL_4670;
            case -2147010854:
              goto LABEL_4671;
            case -2147010853:
              goto LABEL_4672;
            case -2147010852:
              goto LABEL_4673;
            case -2147010851:
              goto LABEL_4674;
            case -2147010850:
              goto LABEL_4675;
            case -2147010849:
              goto LABEL_4676;
            case -2147010848:
              goto LABEL_4677;
            case -2147010847:
              goto LABEL_4678;
            case -2147010846:
              goto LABEL_4679;
            case -2147010845:
              goto LABEL_4680;
            case -2147010844:
              goto LABEL_4681;
            case -2147010843:
              goto LABEL_4682;
            case -2147010842:
              goto LABEL_4683;
            case -2147010841:
              goto LABEL_4684;
            case -2147010840:
              goto LABEL_4685;
            case -2147010839:
              goto LABEL_4686;
            case -2147010838:
              goto LABEL_4687;
            case -2147010837:
              goto LABEL_4688;
            case -2147010836:
              goto LABEL_4689;
            case -2147010835:
              goto LABEL_4690;
            case -2147010834:
              goto LABEL_4691;
            case -2147010833:
              goto LABEL_4692;
            case -2147010832:
              goto LABEL_4693;
            case -2147010831:
              goto LABEL_4694;
            case -2147010830:
              goto LABEL_4695;
            case -2147010829:
              goto LABEL_4696;
            case -2147010828:
              goto LABEL_4697;
            case -2147010827:
              goto LABEL_4698;
            case -2147010826:
              goto LABEL_4699;
            case -2147010825:
              goto LABEL_4700;
            case -2147010824:
              goto LABEL_4701;
            case -2147010823:
              goto LABEL_4702;
            case -2147010822:
              goto LABEL_4703;
            case -2147010821:
              goto LABEL_4704;
            case -2147010820:
              goto LABEL_4705;
            case -2147010819:
              goto LABEL_4706;
            case -2147010818:
              goto LABEL_4707;
            case -2147010817:
              goto LABEL_4708;
            case -2147010816:
              goto LABEL_4709;
            default:
              return L"Unknown";
          }
        }
        return L"CO_E_CLASS_CREATE_FAILED";
      }
      return result;
    }
    if ( a1 == -2147010885 )
      return L"ERROR_SXS_PROCESS_DEFAULT_ALREADY_SET";
    if ( a1 <= -2147013885 )
    {
      if ( a1 == -2147013885 )
        return L"WSA_QOS_POLICY_FAILURE";
      if ( a1 <= -2147014896 )
      {
        if ( a1 != -2147014896 )
        {
          if ( a1 <= -2147015246 )
          {
            if ( a1 != -2147015246 )
            {
              switch ( a1 )
              {
                case -2147015395:
                  goto LABEL_4298;
                case -2147015394:
                  goto LABEL_4299;
                case -2147015393:
                  goto LABEL_4300;
                case -2147015392:
                  goto LABEL_4301;
                case -2147015391:
                  goto LABEL_4302;
                case -2147015346:
                  goto LABEL_4303;
                case -2147015345:
                  goto LABEL_4304;
                case -2147015344:
                  goto LABEL_4305;
                case -2147015343:
                  goto LABEL_4306;
                case -2147015342:
                  goto LABEL_4307;
                case -2147015341:
                  goto LABEL_4308;
                case -2147015340:
                  goto LABEL_4309;
                case -2147015339:
                  goto LABEL_4310;
                case -2147015338:
                  goto LABEL_4311;
                case -2147015337:
                  goto LABEL_4312;
                case -2147015296:
                  goto LABEL_4313;
                case -2147015295:
                  goto LABEL_4314;
                case -2147015294:
                  goto LABEL_4315;
                case -2147015293:
                  goto LABEL_4316;
                case -2147015292:
                  goto LABEL_4317;
                case -2147015291:
                  goto LABEL_4318;
                case -2147015290:
                  goto LABEL_4319;
                case -2147015289:
                  goto LABEL_4320;
                case -2147015288:
                  goto LABEL_4321;
                case -2147015287:
                  goto LABEL_4322;
                case -2147015286:
                  goto LABEL_4323;
                case -2147015285:
                  goto LABEL_4324;
                case -2147015284:
                  goto LABEL_4325;
                case -2147015283:
                  goto LABEL_4326;
                case -2147015282:
                  goto LABEL_4327;
                case -2147015281:
                  goto LABEL_4328;
                case -2147015280:
                  goto LABEL_4329;
                case -2147015279:
                  goto LABEL_4330;
                case -2147015278:
                  goto LABEL_4331;
                default:
                  return L"Unknown";
              }
            }
            return L"DNS_ERROR_DATAFILE_BASE";
          }
          if ( a1 <= -2147015184 )
          {
            if ( a1 != -2147015184 )
            {
              switch ( a1 )
              {
                case -2147015245:
                  goto LABEL_4333;
                case -2147015244:
                  goto LABEL_4334;
                case -2147015243:
                  goto LABEL_4335;
                case -2147015242:
                  goto LABEL_4336;
                case -2147015241:
                  goto LABEL_4337;
                case -2147015196:
                  goto LABEL_4338;
                case -2147015195:
                  goto LABEL_4339;
                case -2147015194:
                  goto LABEL_4340;
                case -2147015193:
                  goto LABEL_4341;
                case -2147015192:
                  goto LABEL_4342;
                case -2147015191:
                  goto LABEL_4343;
                case -2147015190:
                  goto LABEL_4344;
                case -2147015189:
                  goto LABEL_4345;
                case -2147015188:
                  goto LABEL_4346;
                case -2147015187:
                  goto LABEL_4347;
                case -2147015186:
                  goto LABEL_4348;
                case -2147015185:
                  goto LABEL_4349;
                default:
                  return L"Unknown";
              }
            }
            return L"DNS_ERROR_SECONDARY_DATA";
          }
          if ( a1 <= -2147015145 )
          {
            if ( a1 != -2147015145 )
            {
              if ( a1 <= -2147015179 )
              {
                switch ( a1 )
                {
                  case -2147015179:
                    return L"DNS_ERROR_DS_UNAVAILABLE";
                  case -2147015183:
                    return L"DNS_ERROR_NO_CREATE_CACHE_DATA";
                  case -2147015182:
                    return L"DNS_ERROR_NAME_DOES_NOT_EXIST";
                  case -2147015181:
                    return L"DNS_WARNING_PTR_CREATE_FAILED";
                }
                return L"DNS_WARNING_DOMAIN_UNDELETED";
              }
              if ( a1 == -2147015178 )
                return L"DNS_ERROR_DS_ZONE_ALREADY_EXISTS";
              if ( a1 != -2147015177 )
              {
                if ( a1 != -2147015146 )
                  return L"Unknown";
                return L"DNS_ERROR_OPERATION_BASE";
              }
              return L"DNS_ERROR_NO_BOOTFILE_IF_DS_ZONE";
            }
            return L"DNS_INFO_AXFR_COMPLETE";
          }
          if ( a1 != -2147015144 )
          {
            if ( a1 != -2147015143 )
            {
              if ( a1 != -2147015096 )
              {
                if ( a1 != -2147015095 )
                {
                  if ( a1 != -2147015046 )
                  {
                    if ( a1 != -2147015045 )
                    {
                      if ( a1 != -2147015044 )
                        return L"Unknown";
                      return L"DNS_ERROR_NO_DNS_SERVERS";
                    }
                    return L"DNS_ERROR_NO_TCPIP";
                  }
                  return L"DNS_ERROR_SETUP_BASE";
                }
                return L"DNS_STATUS_CONTINUE_NEEDED";
              }
              return L"DNS_ERROR_SECURE_BASE";
            }
            return L"DNS_INFO_ADDED_LOCAL_WINS";
          }
          return L"DNS_ERROR_AXFR";
        }
        return L"WSABASEERR";
      }
      if ( a1 <= -2147014833 )
      {
        if ( a1 != -2147014833 )
        {
          switch ( a1 )
          {
            case -2147014892:
              return L"WSAEINTR";
            case -2147014887:
              return L"WSAEBADF";
            case -2147014883:
              return L"WSAEACCES";
            case -2147014882:
              return L"WSAEFAULT";
            case -2147014874:
              return L"WSAEINVAL";
            case -2147014872:
              goto LABEL_4390;
            case -2147014861:
              goto LABEL_4391;
            case -2147014860:
              goto LABEL_4392;
            case -2147014859:
              goto LABEL_4393;
            case -2147014858:
              goto LABEL_4394;
            case -2147014857:
              goto LABEL_4395;
            case -2147014856:
              goto LABEL_4396;
            case -2147014855:
              goto LABEL_4397;
            case -2147014854:
              goto LABEL_4398;
            case -2147014853:
              goto LABEL_4399;
            case -2147014852:
              goto LABEL_4400;
            case -2147014851:
              goto LABEL_4401;
            case -2147014850:
              goto LABEL_4402;
            case -2147014849:
              goto LABEL_4403;
            case -2147014848:
              return L"WSAEADDRINUSE";
            case -2147014847:
              goto LABEL_4406;
            case -2147014846:
              goto LABEL_4407;
            case -2147014845:
              goto LABEL_4408;
            case -2147014844:
              goto LABEL_4409;
            case -2147014843:
              goto LABEL_4410;
            case -2147014842:
              goto LABEL_4411;
            case -2147014841:
              goto LABEL_4412;
            case -2147014840:
              goto LABEL_4413;
            case -2147014839:
              goto LABEL_4414;
            case -2147014838:
              goto LABEL_4415;
            case -2147014837:
              goto LABEL_4416;
            case -2147014836:
              goto LABEL_4417;
            case -2147014835:
              goto LABEL_4418;
            case -2147014834:
              goto LABEL_4419;
            default:
              return L"Unknown";
          }
        }
        return L"WSAENAMETOOLONG";
      }
      if ( a1 <= -2147014790 )
      {
        if ( a1 != -2147014790 )
        {
          switch ( a1 )
          {
            case -2147014832:
              goto LABEL_4421;
            case -2147014831:
              goto LABEL_4422;
            case -2147014830:
              goto LABEL_4423;
            case -2147014829:
              goto LABEL_4424;
            case -2147014828:
              goto LABEL_4425;
            case -2147014827:
              goto LABEL_4426;
            case -2147014826:
              goto LABEL_4427;
            case -2147014825:
              goto LABEL_4428;
            case -2147014805:
              goto LABEL_4429;
            case -2147014804:
              goto LABEL_4430;
            case -2147014803:
              goto LABEL_4431;
            case -2147014795:
              goto LABEL_4432;
            case -2147014794:
              goto LABEL_4433;
            case -2147014793:
              goto LABEL_4434;
            case -2147014792:
              return L"WSAEINVALIDPROCTABLE";
            case -2147014791:
              return L"WSAEINVALIDPROVIDER";
            default:
              return L"Unknown";
          }
        }
        return L"WSAEPROVIDERFAILEDINIT";
      }
      if ( a1 <= -2147013893 )
      {
        if ( a1 != -2147013893 )
        {
          if ( a1 <= -2147014785 )
          {
            if ( a1 != -2147014785 )
            {
              if ( a1 != -2147014789 )
              {
                if ( a1 != -2147014788 )
                {
                  if ( a1 != -2147014787 )
                    return L"WSA_E_NO_MORE";
                  return L"WSATYPE_NOT_FOUND";
                }
                return L"WSASERVICE_NOT_FOUND";
              }
              return L"WSASYSCALLFAILURE";
            }
            return L"WSA_E_CANCELLED";
          }
          if ( a1 != -2147014784 )
          {
            if ( a1 != -2147013895 )
            {
              if ( a1 != -2147013894 )
                return L"Unknown";
              return L"WSATRY_AGAIN";
            }
            return L"WSAHOST_NOT_FOUND";
          }
          return L"WSAEREFUSED";
        }
        return L"WSANO_RECOVERY";
      }
      if ( a1 != -2147013892 )
      {
        if ( a1 != -2147013891 )
        {
          if ( a1 != -2147013890 )
          {
            if ( a1 != -2147013889 )
            {
              if ( a1 == -2147013888 )
                return L"WSA_QOS_NO_RECEIVERS";
              if ( a1 == -2147013887 )
                return L"WSA_QOS_REQUEST_CONFIRMED";
              return L"WSA_QOS_ADMISSION_FAILURE";
            }
            return L"WSA_QOS_NO_SENDERS";
          }
          return L"WSA_QOS_SENDERS";
        }
        return L"WSA_QOS_RECEIVERS";
      }
      return L"WSANO_DATA";
    }
    if ( a1 <= -2147011896 )
    {
      if ( a1 != -2147011896 )
      {
        switch ( a1 )
        {
          case -2147013884:
            goto LABEL_4473;
          case -2147013883:
            goto LABEL_4474;
          case -2147013882:
            goto LABEL_4475;
          case -2147013881:
            goto LABEL_4476;
          case -2147013880:
            goto LABEL_4477;
          case -2147013879:
            goto LABEL_4478;
          case -2147013878:
            goto LABEL_4479;
          case -2147013877:
            goto LABEL_4480;
          case -2147013876:
            goto LABEL_4481;
          case -2147013875:
            goto LABEL_4482;
          case -2147013874:
            return L"WSA_QOS_EOBJLENGTH";
          case -2147013873:
            goto LABEL_4487;
          case -2147013872:
            goto LABEL_4488;
          case -2147013871:
            goto LABEL_4489;
          case -2147013870:
            goto LABEL_4490;
          case -2147013869:
            goto LABEL_4491;
          case -2147013868:
            goto LABEL_4492;
          case -2147013867:
            goto LABEL_4493;
          case -2147013866:
            goto LABEL_4494;
          case -2147013865:
            goto LABEL_4495;
          default:
            return L"Unknown";
        }
      }
      return L"ERROR_IPSEC_QM_POLICY_EXISTS";
    }
    if ( a1 > -2147011096 )
    {
      switch ( a1 )
      {
        case -2147011095:
          return L"ERROR_IPSEC_IKE_AUTH_FAIL";
        case -2147011094:
          return L"ERROR_IPSEC_IKE_ATTRIB_FAIL";
        case -2147011093:
          return L"ERROR_IPSEC_IKE_NEGOTIATION_PENDING";
        case -2147011092:
          return L"ERROR_IPSEC_IKE_GENERAL_PROCESSING_ERROR";
        case -2147011091:
          return L"ERROR_IPSEC_IKE_TIMED_OUT";
        case -2147011090:
          return L"ERROR_IPSEC_IKE_NO_CERT";
        case -2147011089:
          return L"ERROR_IPSEC_IKE_SA_DELETED";
        case -2147011088:
          return L"ERROR_IPSEC_IKE_SA_REAPED";
        case -2147011087:
          return L"ERROR_IPSEC_IKE_MM_ACQUIRE_DROP";
        case -2147011086:
          return L"ERROR_IPSEC_IKE_QM_ACQUIRE_DROP";
        case -2147011085:
          return L"ERROR_IPSEC_IKE_QUEUE_DROP_MM";
        case -2147011084:
          goto LABEL_4552;
        case -2147011083:
          goto LABEL_4553;
        case -2147011082:
          goto LABEL_4554;
        case -2147011081:
          goto LABEL_4555;
        case -2147011080:
          goto LABEL_4556;
        case -2147011079:
          goto LABEL_4557;
        case -2147011078:
          goto LABEL_4558;
        case -2147011077:
          goto LABEL_4559;
        case -2147011076:
          goto LABEL_4560;
        case -2147011074:
          goto LABEL_4561;
        case -2147011072:
          goto LABEL_4562;
        case -2147011071:
          goto LABEL_4563;
        case -2147011070:
          goto LABEL_4564;
        case -2147011069:
          goto LABEL_4565;
        case -2147011068:
          return L"ERROR_IPSEC_IKE_NO_PUBLIC_KEY";
        case -2147011067:
          goto LABEL_4568;
        case -2147011066:
          goto LABEL_4569;
        case -2147011065:
          goto LABEL_4570;
        case -2147011064:
          goto LABEL_4571;
        case -2147011063:
          goto LABEL_4572;
        case -2147011062:
          goto LABEL_4573;
        case -2147011061:
          goto LABEL_4574;
        case -2147011060:
          goto LABEL_4575;
        case -2147011059:
          goto LABEL_4576;
        case -2147011058:
          goto LABEL_4577;
        case -2147011057:
          goto LABEL_4578;
        case -2147011056:
          goto LABEL_4579;
        case -2147011055:
          goto LABEL_4580;
        case -2147011054:
          goto LABEL_4581;
        case -2147011053:
          goto LABEL_4582;
        case -2147011052:
          goto LABEL_4583;
        case -2147011051:
          goto LABEL_4584;
        case -2147011050:
          goto LABEL_4585;
        case -2147011049:
          goto LABEL_4586;
        case -2147011048:
          goto LABEL_4587;
        case -2147011047:
          goto LABEL_4588;
        case -2147011046:
          goto LABEL_4589;
        case -2147011045:
          goto LABEL_4590;
        case -2147011044:
          goto LABEL_4591;
        case -2147011043:
          goto LABEL_4592;
        case -2147011042:
          goto LABEL_4593;
        case -2147011041:
          goto LABEL_4594;
        case -2147011040:
          goto LABEL_4595;
        case -2147011039:
          return L"ERROR_IPSEC_IKE_GETSPIFAIL";
        case -2147011038:
          goto LABEL_4600;
        case -2147011037:
          goto LABEL_4601;
        case -2147011036:
          goto LABEL_4602;
        case -2147011035:
          goto LABEL_4603;
        case -2147011034:
          goto LABEL_4604;
        case -2147011033:
          goto LABEL_4605;
        case -2147011032:
          goto LABEL_4606;
        case -2147011031:
          goto LABEL_4607;
        case -2147011030:
          goto LABEL_4608;
        case -2147011029:
          goto LABEL_4609;
        case -2147011028:
          goto LABEL_4610;
        case -2147011027:
          goto LABEL_4611;
        case -2147011026:
          goto LABEL_4612;
        case -2147011025:
          goto LABEL_4613;
        case -2147011024:
          goto LABEL_4614;
        case -2147011023:
          goto LABEL_4615;
        case -2147011022:
          goto LABEL_4616;
        case -2147011021:
          goto LABEL_4617;
        case -2147011020:
          goto LABEL_4618;
        case -2147011019:
          goto LABEL_4619;
        case -2147011018:
          goto LABEL_4620;
        case -2147011017:
          goto LABEL_4621;
        case -2147011015:
          goto LABEL_4622;
        case -2147011014:
          goto LABEL_4623;
        case -2147011013:
          goto LABEL_4624;
        case -2147011012:
          goto LABEL_4625;
        case -2147010896:
          return L"ERROR_SXS_SECTION_NOT_FOUND";
        case -2147010895:
          goto LABEL_4630;
        case -2147010894:
          goto LABEL_4631;
        case -2147010893:
          goto LABEL_4632;
        case -2147010892:
          goto LABEL_4633;
        case -2147010891:
          goto LABEL_4634;
        case -2147010890:
          goto LABEL_4635;
        case -2147010889:
          goto LABEL_4636;
        case -2147010888:
          goto LABEL_4637;
        case -2147010887:
          goto LABEL_4638;
        case -2147010886:
          goto LABEL_4639;
        default:
          return L"Unknown";
      }
    }
    if ( a1 != -2147011096 )
    {
      switch ( a1 )
      {
        case -2147011895:
          goto LABEL_4498;
        case -2147011894:
          goto LABEL_4499;
        case -2147011893:
          goto LABEL_4500;
        case -2147011892:
          goto LABEL_4501;
        case -2147011891:
          goto LABEL_4502;
        case -2147011890:
          goto LABEL_4503;
        case -2147011889:
          goto LABEL_4504;
        case -2147011888:
          goto LABEL_4505;
        case -2147011887:
          goto LABEL_4506;
        case -2147011886:
          goto LABEL_4507;
        case -2147011885:
          goto LABEL_4508;
        case -2147011884:
          goto LABEL_4509;
        case -2147011883:
          goto LABEL_4510;
        case -2147011882:
          goto LABEL_4511;
        case -2147011881:
          goto LABEL_4512;
        case -2147011880:
          goto LABEL_4513;
        case -2147011879:
          goto LABEL_4514;
        case -2147011878:
          goto LABEL_4515;
        case -2147011877:
          goto LABEL_4516;
        case -2147011876:
          return L"ERROR_IPSEC_TUNNEL_FILTER_PENDING_DELETION";
        case -2147011875:
          return L"ERROR_IPSEC_MM_POLICY_PENDING_DELETION";
        case -2147011874:
          return L"ERROR_IPSEC_MM_AUTH_PENDING_DELETION";
        case -2147011873:
          return L"ERROR_IPSEC_QM_POLICY_PENDING_DELETION";
        default:
          return L"Unknown";
      }
    }
    return L"ERROR_IPSEC_IKE_NEG_STATUS_BEGIN";
  }
  if ( a1 == -2147023178 )
    return L"RPC_S_NO_BINDINGS";
  if ( a1 > -2147168247 )
  {
    if ( a1 <= -2147168128 )
    {
      if ( a1 == -2147168128 )
        return L"XACT_E_CLERKNOTFOUND";
      switch ( a1 )
      {
        case -2147168246:
          result = L"XACT_E_NOENLIST";
          break;
        case -2147168245:
          result = L"XACT_E_NOISORETAIN";
          break;
        case -2147168244:
          result = L"XACT_E_NORESOURCE";
          break;
        case -2147168243:
          result = L"XACT_E_NOTCURRENT";
          break;
        case -2147168242:
          result = L"XACT_E_NOTRANSACTION";
          break;
        case -2147168241:
          result = L"XACT_E_NOTSUPPORTED";
          break;
        case -2147168240:
          result = L"XACT_E_UNKNOWNRMGRID";
          break;
        case -2147168239:
          result = L"XACT_E_WRONGSTATE";
          break;
        case -2147168238:
          result = L"XACT_E_WRONGUOW";
          break;
        case -2147168237:
          result = L"XACT_E_XTIONEXISTS";
          break;
        case -2147168236:
          result = L"XACT_E_NOIMPORTOBJECT";
          break;
        case -2147168235:
          result = L"XACT_E_INVALIDCOOKIE";
          break;
        case -2147168234:
          result = L"XACT_E_INDOUBT";
          break;
        case -2147168233:
          result = L"XACT_E_NOTIMEOUT";
          break;
        case -2147168232:
          result = L"XACT_E_ALREADYINPROGRESS";
          break;
        case -2147168231:
          result = L"XACT_E_ABORTED";
          break;
        case -2147168230:
          result = L"XACT_E_LOGFULL";
          break;
        case -2147168229:
          result = L"XACT_E_TMNOTAVAILABLE";
          break;
        case -2147168228:
          result = L"XACT_E_CONNECTION_DOWN";
          break;
        case -2147168227:
          result = L"XACT_E_CONNECTION_DENIED";
          break;
        case -2147168226:
          result = L"XACT_E_REENLISTTIMEOUT";
          break;
        case -2147168225:
          result = L"XACT_E_TIP_CONNECT_FAILED";
          break;
        case -2147168224:
          result = L"XACT_E_TIP_PROTOCOL_ERROR";
          break;
        case -2147168223:
          result = L"XACT_E_TIP_PULL_FAILED";
          break;
        case -2147168222:
          result = L"XACT_E_DEST_TMNOTAVAILABLE";
          break;
        case -2147168221:
          result = L"XACT_E_TIP_DISABLED";
          break;
        case -2147168220:
          result = L"XACT_E_NETWORK_TX_DISABLED";
          break;
        case -2147168219:
          result = L"XACT_E_PARTNER_NETWORK_TX_DISABLED";
          break;
        case -2147168218:
          result = L"XACT_E_XA_TX_DISABLED";
          break;
        case -2147168217:
          result = L"XACT_E_UNABLE_TO_READ_DTC_CONFIG";
          break;
        case -2147168216:
          result = L"XACT_E_UNABLE_TO_LOAD_DTC_PROXY";
          break;
        case -2147168215:
          result = L"XACT_E_LAST";
          break;
        default:
          return L"Unknown";
      }
      return result;
    }
    if ( a1 > -2147023741 )
    {
      switch ( a1 )
      {
        case -2147023740:
          goto LABEL_3044;
        case -2147023739:
          goto LABEL_3045;
        case -2147023738:
          goto LABEL_3046;
        case -2147023737:
          goto LABEL_3047;
        case -2147023736:
          goto LABEL_3048;
        case -2147023735:
          goto LABEL_3049;
        case -2147023734:
          goto LABEL_3050;
        case -2147023733:
          goto LABEL_3051;
        case -2147023732:
          goto LABEL_3052;
        case -2147023731:
          goto LABEL_3053;
        case -2147023730:
          goto LABEL_3054;
        case -2147023729:
          goto LABEL_3055;
        case -2147023728:
          goto LABEL_3056;
        case -2147023727:
          goto LABEL_3057;
        case -2147023726:
          goto LABEL_3058;
        case -2147023725:
          goto LABEL_3059;
        case -2147023724:
          goto LABEL_3060;
        case -2147023723:
          goto LABEL_3061;
        case -2147023721:
          goto LABEL_3062;
        case -2147023720:
          goto LABEL_3063;
        case -2147023719:
          goto LABEL_3064;
        case -2147023718:
          goto LABEL_3065;
        case -2147023717:
          goto LABEL_3066;
        case -2147023716:
          goto LABEL_3067;
        case -2147023715:
          goto LABEL_3276;
        case -2147023696:
          goto LABEL_3068;
        case -2147023695:
          goto LABEL_3069;
        case -2147023694:
          goto LABEL_3070;
        case -2147023693:
          goto LABEL_3071;
        case -2147023692:
          goto LABEL_3072;
        case -2147023691:
          goto LABEL_3073;
        case -2147023690:
          goto LABEL_3074;
        case -2147023689:
          goto LABEL_3075;
        case -2147023688:
          goto LABEL_3076;
        case -2147023687:
          goto LABEL_3077;
        case -2147023686:
          goto LABEL_3078;
        case -2147023685:
          goto LABEL_3079;
        case -2147023684:
          goto LABEL_3080;
        case -2147023683:
          goto LABEL_3081;
        case -2147023682:
          goto LABEL_3082;
        case -2147023681:
          goto LABEL_3083;
        case -2147023680:
          goto LABEL_3084;
        case -2147023679:
          goto LABEL_3085;
        case -2147023678:
          goto LABEL_3086;
        case -2147023677:
          goto LABEL_3087;
        case -2147023676:
          goto LABEL_3088;
        case -2147023675:
          goto LABEL_3089;
        case -2147023674:
          goto LABEL_3090;
        case -2147023673:
          goto LABEL_3091;
        case -2147023672:
          goto LABEL_3092;
        case -2147023671:
          goto LABEL_3093;
        case -2147023670:
          goto LABEL_3094;
        case -2147023669:
          goto LABEL_3095;
        case -2147023668:
          goto LABEL_3096;
        case -2147023667:
          goto LABEL_3097;
        case -2147023666:
          goto LABEL_3098;
        case -2147023665:
          goto LABEL_3099;
        case -2147023664:
          goto LABEL_3100;
        case -2147023663:
          goto LABEL_3101;
        case -2147023662:
          goto LABEL_3102;
        case -2147023661:
          goto LABEL_3103;
        case -2147023660:
          goto LABEL_3104;
        case -2147023659:
          goto LABEL_3105;
        case -2147023658:
          goto LABEL_3106;
        case -2147023657:
          goto LABEL_3107;
        case -2147023656:
          goto LABEL_3108;
        case -2147023655:
          goto LABEL_3109;
        case -2147023654:
          goto LABEL_3110;
        case -2147023653:
          goto LABEL_3111;
        case -2147023652:
          goto LABEL_3112;
        case -2147023651:
          goto LABEL_3113;
        case -2147023650:
          goto LABEL_3114;
        case -2147023649:
          goto LABEL_3115;
        case -2147023648:
          goto LABEL_3116;
        case -2147023647:
          goto LABEL_3117;
        case -2147023646:
          goto LABEL_3118;
        case -2147023645:
          goto LABEL_3277;
        case -2147023644:
          goto LABEL_3278;
        case -2147023643:
          goto LABEL_3279;
        case -2147023642:
          goto LABEL_3280;
        case -2147023641:
          goto LABEL_3281;
        case -2147023640:
          goto LABEL_3282;
        case -2147023639:
          goto LABEL_3283;
        case -2147023638:
          goto LABEL_3284;
        case -2147023637:
          goto LABEL_3285;
        case -2147023636:
          goto LABEL_3286;
        case -2147023635:
          goto LABEL_3287;
        case -2147023634:
          goto LABEL_3288;
        case -2147023633:
          goto LABEL_3289;
        case -2147023632:
          goto LABEL_3290;
        case -2147023631:
          goto LABEL_3291;
        case -2147023625:
          goto LABEL_3292;
        case -2147023623:
          goto LABEL_3293;
        case -2147023622:
          goto LABEL_3294;
        case -2147023621:
          goto LABEL_3295;
        case -2147023620:
          goto LABEL_3296;
        case -2147023596:
          goto LABEL_3119;
        case -2147023595:
          goto LABEL_3120;
        case -2147023594:
          goto LABEL_3121;
        case -2147023593:
          goto LABEL_3122;
        case -2147023592:
          goto LABEL_3123;
        case -2147023591:
          goto LABEL_3124;
        case -2147023590:
          goto LABEL_3125;
        case -2147023589:
          goto LABEL_3126;
        case -2147023588:
          goto LABEL_3127;
        case -2147023587:
          goto LABEL_3128;
        case -2147023586:
          goto LABEL_3129;
        case -2147023585:
          goto LABEL_3130;
        case -2147023584:
          goto LABEL_3131;
        case -2147023583:
          goto LABEL_3132;
        case -2147023582:
          goto LABEL_3133;
        case -2147023581:
          goto LABEL_3134;
        case -2147023580:
          goto LABEL_3135;
        case -2147023579:
          goto LABEL_3136;
        case -2147023578:
          goto LABEL_3137;
        case -2147023577:
          goto LABEL_3138;
        case -2147023576:
          goto LABEL_3139;
        case -2147023575:
          goto LABEL_3140;
        case -2147023574:
          goto LABEL_3141;
        case -2147023573:
          goto LABEL_3142;
        case -2147023572:
          goto LABEL_3143;
        case -2147023571:
          goto LABEL_3144;
        case -2147023570:
          goto LABEL_3145;
        case -2147023569:
          goto LABEL_3146;
        case -2147023568:
          goto LABEL_3147;
        case -2147023567:
          goto LABEL_3148;
        case -2147023566:
          goto LABEL_3149;
        case -2147023565:
          goto LABEL_3150;
        case -2147023564:
          goto LABEL_3151;
        case -2147023563:
          goto LABEL_3152;
        case -2147023562:
          goto LABEL_3153;
        case -2147023561:
          goto LABEL_3154;
        case -2147023560:
          goto LABEL_3155;
        case -2147023559:
          goto LABEL_3156;
        case -2147023558:
          goto LABEL_3157;
        case -2147023556:
          goto LABEL_3158;
        case -2147023555:
          goto LABEL_3159;
        case -2147023554:
          goto LABEL_3160;
        case -2147023553:
          goto LABEL_3161;
        case -2147023552:
          goto LABEL_3162;
        case -2147023551:
          goto LABEL_3163;
        case -2147023550:
          goto LABEL_3164;
        case -2147023549:
          goto LABEL_3165;
        case -2147023548:
          goto LABEL_3166;
        case -2147023547:
          goto LABEL_3167;
        case -2147023546:
          goto LABEL_3168;
        case -2147023545:
          goto LABEL_3169;
        case -2147023544:
          goto LABEL_3170;
        case -2147023543:
          goto LABEL_3171;
        case -2147023542:
          goto LABEL_3172;
        case -2147023541:
          goto LABEL_3173;
        case -2147023540:
          goto LABEL_3174;
        case -2147023539:
          goto LABEL_3175;
        case -2147023538:
          goto LABEL_3176;
        case -2147023537:
          goto LABEL_3177;
        case -2147023536:
          goto LABEL_3178;
        case -2147023535:
          goto LABEL_3179;
        case -2147023534:
          goto LABEL_3180;
        case -2147023533:
          goto LABEL_3181;
        case -2147023532:
          goto LABEL_3182;
        case -2147023531:
          goto LABEL_3183;
        case -2147023530:
          goto LABEL_3184;
        case -2147023529:
          goto LABEL_3185;
        case -2147023528:
          goto LABEL_3186;
        case -2147023527:
          goto LABEL_3187;
        case -2147023526:
          goto LABEL_3188;
        case -2147023525:
          goto LABEL_3189;
        case -2147023524:
          goto LABEL_3190;
        case -2147023523:
          goto LABEL_3191;
        case -2147023522:
          goto LABEL_3192;
        case -2147023521:
          goto LABEL_3193;
        case -2147023520:
          goto LABEL_3194;
        case -2147023519:
          goto LABEL_3195;
        case -2147023518:
          goto LABEL_3196;
        case -2147023517:
          goto LABEL_3197;
        case -2147023516:
          goto LABEL_3198;
        case -2147023515:
          goto LABEL_3199;
        case -2147023514:
          goto LABEL_3200;
        case -2147023513:
          goto LABEL_3201;
        case -2147023512:
          goto LABEL_3202;
        case -2147023511:
          goto LABEL_3203;
        case -2147023510:
          goto LABEL_3204;
        case -2147023509:
          goto LABEL_3205;
        case -2147023508:
          goto LABEL_3206;
        case -2147023507:
          goto LABEL_3207;
        case -2147023506:
          goto LABEL_3208;
        case -2147023505:
          goto LABEL_3209;
        case -2147023504:
          goto LABEL_3210;
        case -2147023503:
          goto LABEL_3211;
        case -2147023502:
          goto LABEL_3212;
        case -2147023501:
          goto LABEL_3213;
        case -2147023500:
          goto LABEL_3214;
        case -2147023499:
          goto LABEL_3215;
        case -2147023498:
          goto LABEL_3216;
        case -2147023497:
          goto LABEL_3297;
        case -2147023496:
          goto LABEL_3217;
        case -2147023495:
          goto LABEL_3218;
        case -2147023494:
          goto LABEL_3219;
        case -2147023493:
          goto LABEL_3220;
        case -2147023492:
          goto LABEL_3221;
        case -2147023491:
          goto LABEL_3222;
        case -2147023490:
          goto LABEL_3223;
        case -2147023489:
          goto LABEL_3224;
        case -2147023488:
          goto LABEL_3225;
        case -2147023487:
          goto LABEL_3226;
        case -2147023486:
          goto LABEL_3227;
        case -2147023485:
          goto LABEL_3228;
        case -2147023484:
          goto LABEL_3229;
        case -2147023483:
          goto LABEL_3230;
        case -2147023482:
          goto LABEL_3231;
        case -2147023481:
          goto LABEL_3232;
        case -2147023480:
          goto LABEL_3233;
        case -2147023479:
          goto LABEL_3234;
        case -2147023478:
          goto LABEL_3235;
        case -2147023477:
          goto LABEL_3236;
        case -2147023476:
          goto LABEL_3237;
        case -2147023475:
          goto LABEL_3238;
        case -2147023474:
          goto LABEL_3239;
        case -2147023473:
          goto LABEL_3240;
        case -2147023472:
          goto LABEL_3241;
        case -2147023471:
          goto LABEL_3242;
        case -2147023470:
          goto LABEL_3243;
        case -2147023469:
          goto LABEL_3244;
        case -2147023468:
          goto LABEL_3245;
        case -2147023467:
          goto LABEL_3246;
        case -2147023466:
          goto LABEL_3247;
        case -2147023465:
          goto LABEL_3248;
        case -2147023464:
          goto LABEL_3249;
        case -2147023463:
          goto LABEL_3250;
        case -2147023462:
          goto LABEL_3251;
        case -2147023461:
          goto LABEL_3252;
        case -2147023460:
          goto LABEL_3253;
        case -2147023459:
          goto LABEL_3254;
        case -2147023458:
          goto LABEL_3255;
        case -2147023457:
          goto LABEL_3256;
        case -2147023456:
          goto LABEL_3257;
        case -2147023455:
          goto LABEL_3258;
        case -2147023454:
          goto LABEL_3259;
        case -2147023453:
          goto LABEL_3260;
        case -2147023452:
          goto LABEL_3261;
        case -2147023451:
          goto LABEL_3262;
        case -2147023450:
          goto LABEL_3263;
        case -2147023449:
          goto LABEL_3264;
        case -2147023448:
          goto LABEL_3265;
        case -2147023447:
          goto LABEL_3266;
        case -2147023446:
          goto LABEL_3267;
        case -2147023445:
          goto LABEL_3268;
        case -2147023444:
          goto LABEL_3269;
        case -2147023443:
          goto LABEL_3270;
        case -2147023442:
          goto LABEL_3271;
        case -2147023441:
          goto LABEL_3272;
        case -2147023440:
          goto LABEL_3273;
        case -2147023439:
          goto LABEL_3274;
        case -2147023438:
          goto LABEL_3275;
        case -2147023437:
          return L"ERROR_REQUIRES_INTERACTIVE_WINDOWSTATION";
        case -2147023436:
          goto LABEL_3306;
        case -2147023435:
          goto LABEL_3307;
        case -2147023396:
          goto LABEL_3308;
        case -2147023395:
          goto LABEL_3309;
        case -2147023394:
          goto LABEL_3310;
        case -2147023393:
          goto LABEL_3311;
        case -2147023295:
          goto LABEL_3446;
        case -2147023294:
          goto LABEL_3312;
        case -2147023293:
          goto LABEL_3313;
        case -2147023292:
          goto LABEL_3314;
        case -2147023291:
          goto LABEL_3315;
        case -2147023290:
          goto LABEL_3316;
        case -2147023289:
          goto LABEL_3317;
        case -2147023288:
          goto LABEL_3318;
        case -2147023287:
          goto LABEL_3319;
        case -2147023286:
          goto LABEL_3320;
        case -2147023285:
          goto LABEL_3321;
        case -2147023284:
          goto LABEL_3322;
        case -2147023283:
          goto LABEL_3447;
        case -2147023282:
          goto LABEL_3323;
        case -2147023281:
          goto LABEL_3324;
        case -2147023280:
          goto LABEL_3325;
        case -2147023279:
          goto LABEL_3326;
        case -2147023278:
          goto LABEL_3448;
        case -2147023277:
          goto LABEL_3449;
        case -2147023276:
          goto LABEL_3450;
        case -2147023275:
          goto LABEL_3451;
        case -2147023274:
          goto LABEL_3452;
        case -2147023273:
          goto LABEL_3453;
        case -2147023272:
          goto LABEL_3454;
        case -2147023271:
          goto LABEL_3455;
        case -2147023270:
          goto LABEL_3456;
        case -2147023269:
          goto LABEL_3457;
        case -2147023268:
          goto LABEL_3458;
        case -2147023267:
          goto LABEL_3459;
        case -2147023266:
          goto LABEL_3460;
        case -2147023265:
          goto LABEL_3461;
        case -2147023264:
          goto LABEL_3462;
        case -2147023263:
          goto LABEL_3463;
        case -2147023262:
          goto LABEL_3464;
        case -2147023261:
          goto LABEL_3465;
        case -2147023260:
          goto LABEL_3466;
        case -2147023259:
          goto LABEL_3467;
        case -2147023258:
          goto LABEL_3468;
        case -2147023257:
          goto LABEL_3469;
        case -2147023256:
          goto LABEL_3470;
        case -2147023255:
          goto LABEL_3471;
        case -2147023254:
          goto LABEL_3472;
        case -2147023253:
          goto LABEL_3473;
        case -2147023252:
          goto LABEL_3474;
        case -2147023196:
          goto LABEL_3327;
        case -2147023195:
          goto LABEL_3328;
        case -2147023194:
          goto LABEL_3329;
        case -2147023193:
          goto LABEL_3330;
        case -2147023192:
          goto LABEL_3331;
        case -2147023191:
          goto LABEL_3332;
        case -2147023190:
          goto LABEL_3333;
        case -2147023189:
          goto LABEL_3334;
        case -2147023188:
          goto LABEL_3335;
        case -2147023187:
          goto LABEL_3336;
        case -2147023186:
          goto LABEL_3337;
        case -2147023185:
          goto LABEL_3338;
        case -2147023184:
          goto LABEL_3339;
        case -2147023183:
          goto LABEL_3340;
        case -2147023182:
          goto LABEL_3341;
        case -2147023181:
          goto LABEL_3342;
        case -2147023180:
          goto LABEL_3343;
        case -2147023179:
          goto LABEL_3344;
        default:
          return L"Unknown";
      }
    }
    if ( a1 == -2147023741 )
      return L"ERROR_NO_ASSOCIATION";
    if ( a1 <= -2147024723 )
    {
      if ( a1 == -2147024723 )
        return L"ERROR_CANCEL_VIOLATION";
      if ( a1 > -2147024831 )
      {
        switch ( a1 )
        {
          case -2147024830:
            goto LABEL_2756;
          case -2147024829:
            goto LABEL_2757;
          case -2147024828:
            return L"ERROR_TOO_MANY_NAMES";
          case -2147024827:
            return L"ERROR_TOO_MANY_SESS";
          case -2147024826:
            return L"ERROR_SHARING_PAUSED";
          case -2147024825:
            return L"ERROR_REQ_NOT_ACCEP";
          case -2147024824:
            return L"ERROR_REDIR_PAUSED";
          case -2147024816:
            return L"ERROR_FILE_EXISTS";
          case -2147024814:
            return L"ERROR_CANNOT_MAKE";
          case -2147024813:
            return L"ERROR_FAIL_I24";
          case -2147024812:
            return L"ERROR_OUT_OF_STRUCTURES";
          case -2147024811:
            return L"ERROR_ALREADY_ASSIGNED";
          case -2147024810:
            return L"ERROR_INVALID_PASSWORD";
          case -2147024809:
            result = L"E_INVALIDARG";
            break;
          case -2147024808:
            return L"ERROR_NET_WRITE_FAULT";
          case -2147024807:
            return L"ERROR_NO_PROC_SLOTS";
          case -2147024796:
            return L"ERROR_TOO_MANY_SEMAPHORES";
          case -2147024795:
            return L"ERROR_EXCL_SEM_ALREADY_OWNED";
          case -2147024794:
            return L"ERROR_SEM_IS_SET";
          case -2147024793:
            return L"ERROR_TOO_MANY_SEM_REQUESTS";
          case -2147024792:
            return L"ERROR_INVALID_AT_INTERRUPT_TIME";
          case -2147024791:
            return L"ERROR_SEM_OWNER_DIED";
          case -2147024790:
            return L"ERROR_SEM_USER_LIMIT";
          case -2147024789:
            goto LABEL_2803;
          case -2147024788:
            goto LABEL_2804;
          case -2147024787:
            goto LABEL_2805;
          case -2147024786:
            goto LABEL_2806;
          case -2147024785:
            goto LABEL_2807;
          case -2147024784:
            goto LABEL_2808;
          case -2147024783:
            goto LABEL_2809;
          case -2147024782:
            goto LABEL_2810;
          case -2147024779:
            goto LABEL_2811;
          case -2147024778:
            goto LABEL_2812;
          case -2147024777:
            goto LABEL_2813;
          case -2147024776:
            goto LABEL_2814;
          case -2147024775:
            goto LABEL_2815;
          case -2147024774:
            goto LABEL_2816;
          case -2147024773:
            goto LABEL_2817;
          case -2147024772:
            goto LABEL_2818;
          case -2147024771:
            goto LABEL_2819;
          case -2147024770:
            goto LABEL_2820;
          case -2147024769:
            goto LABEL_2821;
          case -2147024768:
            goto LABEL_2822;
          case -2147024767:
            goto LABEL_2823;
          case -2147024766:
            goto LABEL_2824;
          case -2147024765:
            goto LABEL_2825;
          case -2147024764:
            goto LABEL_2826;
          case -2147024763:
            goto LABEL_2827;
          case -2147024762:
            goto LABEL_2828;
          case -2147024761:
            goto LABEL_2829;
          case -2147024760:
            goto LABEL_2830;
          case -2147024759:
            goto LABEL_2831;
          case -2147024758:
            goto LABEL_2832;
          case -2147024757:
            goto LABEL_2833;
          case -2147024756:
            goto LABEL_2834;
          case -2147024755:
            goto LABEL_2835;
          case -2147024754:
            goto LABEL_2836;
          case -2147024753:
            goto LABEL_2837;
          case -2147024752:
            goto LABEL_2838;
          case -2147024751:
            goto LABEL_2839;
          case -2147024750:
            goto LABEL_2840;
          case -2147024749:
            goto LABEL_2841;
          case -2147024748:
            goto LABEL_2842;
          case -2147024747:
            goto LABEL_2843;
          case -2147024746:
            goto LABEL_2844;
          case -2147024745:
            goto LABEL_2845;
          case -2147024744:
            goto LABEL_2846;
          case -2147024743:
            goto LABEL_2847;
          case -2147024742:
            goto LABEL_2848;
          case -2147024741:
            goto LABEL_2849;
          case -2147024740:
            goto LABEL_2850;
          case -2147024739:
            goto LABEL_2851;
          case -2147024738:
            goto LABEL_2852;
          case -2147024737:
            goto LABEL_2853;
          case -2147024736:
            goto LABEL_2854;
          case -2147024735:
            goto LABEL_2855;
          case -2147024734:
            goto LABEL_2856;
          case -2147024732:
            goto LABEL_2857;
          case -2147024729:
            goto LABEL_2858;
          case -2147024726:
            goto LABEL_2859;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 == -2147024831 )
        return L"ERROR_NETWORK_ACCESS_DENIED";
      if ( a1 > -2147024883 )
      {
        switch ( a1 )
        {
          case -2147024882:
            result = L"E_OUTOFMEMORY";
            break;
          case -2147024881:
            goto LABEL_2702;
          case -2147024880:
            return L"ERROR_CURRENT_DIRECTORY";
          case -2147024879:
            goto LABEL_2705;
          case -2147024878:
            goto LABEL_2706;
          case -2147024877:
            goto LABEL_2707;
          case -2147024876:
            goto LABEL_2708;
          case -2147024875:
            goto LABEL_2709;
          case -2147024874:
            goto LABEL_2710;
          case -2147024873:
            goto LABEL_2711;
          case -2147024872:
            goto LABEL_2712;
          case -2147024871:
            goto LABEL_2713;
          case -2147024870:
            goto LABEL_2714;
          case -2147024869:
            goto LABEL_2715;
          case -2147024868:
            goto LABEL_2716;
          case -2147024867:
            goto LABEL_2717;
          case -2147024866:
            goto LABEL_2718;
          case -2147024865:
            goto LABEL_2719;
          case -2147024864:
            goto LABEL_2720;
          case -2147024863:
            goto LABEL_2721;
          case -2147024862:
            goto LABEL_2722;
          case -2147024860:
            goto LABEL_2723;
          case -2147024858:
            return L"ERROR_HANDLE_EOF";
          case -2147024857:
            return L"ERROR_HANDLE_DISK_FULL";
          case -2147024846:
            return L"ERROR_NOT_SUPPORTED";
          case -2147024845:
            return L"ERROR_REM_NOT_LIST";
          case -2147024844:
            return L"ERROR_DUP_NAME";
          case -2147024843:
            return L"ERROR_BAD_NETPATH";
          case -2147024842:
            return L"ERROR_NETWORK_BUSY";
          case -2147024841:
            return L"ERROR_DEV_NOT_EXIST";
          case -2147024840:
            return L"ERROR_TOO_MANY_CMDS";
          case -2147024839:
            return L"ERROR_ADAP_HDW_ERR";
          case -2147024838:
            return L"ERROR_BAD_NET_RESP";
          case -2147024837:
            goto LABEL_2749;
          case -2147024836:
            goto LABEL_2750;
          case -2147024835:
            goto LABEL_2751;
          case -2147024834:
            goto LABEL_2752;
          case -2147024833:
            goto LABEL_2753;
          case -2147024832:
            goto LABEL_2754;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 == -2147024883 )
        return L"ERROR_INVALID_DATA";
      if ( a1 <= -2147164120 )
      {
        if ( a1 == -2147164120 )
          return L"CO_E_THREADINGMODEL_CHANGED";
        if ( a1 <= -2147164153 )
        {
          if ( a1 == -2147164153 )
            return L"CONTEXT_E_OLDREF";
          if ( a1 > -2147164160 )
          {
            switch ( a1 )
            {
              case -2147164158:
                return L"CONTEXT_E_ABORTED";
              case -2147164157:
                return L"CONTEXT_E_ABORTING";
              case -2147164156:
                return L"CONTEXT_E_NOCONTEXT";
              case -2147164154:
                return L"CONTEXT_E_SYNCH_TIMEOUT";
            }
          }
          else
          {
            switch ( a1 )
            {
              case -2147164160:
                return L"CONTEXT_E_FIRST";
              case -2147168127:
                return L"XACT_E_CLERKEXISTS";
              case -2147168126:
                return L"XACT_E_RECOVERYINPROGRESS";
              case -2147168125:
                return L"XACT_E_TRANSACTIONCLOSED";
              case -2147168124:
                return L"XACT_E_INVALIDLSN";
              case -2147168123:
                return L"XACT_E_REPLAYREQUEST";
            }
          }
          return L"Unknown";
        }
        if ( a1 <= -2147164125 )
        {
          switch ( a1 )
          {
            case -2147164125:
              return L"CO_E_ACTIVATIONFAILED_CATALOGERROR";
            case -2147164148:
              return L"CONTEXT_E_ROLENOTFOUND";
            case -2147164145:
              return L"CONTEXT_E_TMNOTAVAILABLE";
            case -2147164127:
              return L"CO_E_ACTIVATIONFAILED";
            case -2147164126:
              return L"CO_E_ACTIVATIONFAILED_EVENTLOGGED";
          }
          return L"Unknown";
        }
        switch ( a1 )
        {
          case -2147164124:
            return L"CO_E_ACTIVATIONFAILED_TIMEOUT";
          case -2147164123:
            return L"CO_E_INITIALIZATIONFAILED";
          case -2147164122:
            return L"CONTEXT_E_NOJIT";
        }
        return L"CONTEXT_E_NOTRANSACTION";
      }
      if ( a1 > -2147024893 )
      {
        switch ( a1 )
        {
          case -2147024892:
            return L"ERROR_TOO_MANY_OPEN_FILES";
          case -2147024891:
            result = L"E_ACCESSDENIED";
            break;
          case -2147024890:
            result = L"E_HANDLE";
            break;
          case -2147024889:
            goto LABEL_2694;
          case -2147024888:
            goto LABEL_2695;
          case -2147024887:
            goto LABEL_2696;
          case -2147024886:
            goto LABEL_2697;
          case -2147024885:
            goto LABEL_2698;
          case -2147024884:
            goto LABEL_2699;
          default:
            return L"Unknown";
        }
        return result;
      }
      if ( a1 != -2147024893 )
      {
        if ( a1 <= -2147164115 )
        {
          switch ( a1 )
          {
            case -2147164115:
              return L"CO_E_NOTCONSTRUCTED";
            case -2147164119:
              return L"CO_E_NOIISINTRINSICS";
            case -2147164118:
              return L"CO_E_NOCOOKIES";
            case -2147164117:
              return L"CO_E_DBERROR";
          }
          return L"CO_E_NOTPOOLED";
        }
        switch ( a1 )
        {
          case -2147164114:
            return L"CO_E_NOSYNCHRONIZATION";
          case -2147164113:
            return L"CONTEXT_E_LAST";
          case -2147024895:
            return L"ERROR_INVALID_FUNCTION";
        }
        if ( a1 != -2147024894 )
          return L"Unknown";
        return L"ERROR_FILE_NOT_FOUND";
      }
      return L"ERROR_PATH_NOT_FOUND";
    }
    if ( a1 > -2147023880 )
    {
      switch ( a1 )
      {
        case -2147023879:
          goto LABEL_2962;
        case -2147023878:
          goto LABEL_2963;
        case -2147023877:
          goto LABEL_2964;
        case -2147023876:
          goto LABEL_2965;
        case -2147023875:
          goto LABEL_2966;
        case -2147023874:
          goto LABEL_2967;
        case -2147023845:
          goto LABEL_2968;
        case -2147023844:
          goto LABEL_2969;
        case -2147023843:
          goto LABEL_2970;
        case -2147023842:
          goto LABEL_2971;
        case -2147023841:
          goto LABEL_2972;
        case -2147023840:
          goto LABEL_2973;
        case -2147023839:
          goto LABEL_2974;
        case -2147023838:
          goto LABEL_2975;
        case -2147023837:
          goto LABEL_2976;
        case -2147023836:
          goto LABEL_2977;
        case -2147023835:
          goto LABEL_2978;
        case -2147023834:
          return L"ERROR_SERVICE_NOT_ACTIVE";
        case -2147023833:
          goto LABEL_2981;
        case -2147023832:
          goto LABEL_2982;
        case -2147023831:
          goto LABEL_2983;
        case -2147023830:
          goto LABEL_2984;
        case -2147023829:
          goto LABEL_2985;
        case -2147023828:
          goto LABEL_2986;
        case -2147023827:
          goto LABEL_2987;
        case -2147023826:
          goto LABEL_2988;
        case -2147023825:
          goto LABEL_2989;
        case -2147023824:
          goto LABEL_2990;
        case -2147023823:
          goto LABEL_2991;
        case -2147023822:
          goto LABEL_2992;
        case -2147023821:
          goto LABEL_2993;
        case -2147023820:
          goto LABEL_2994;
        case -2147023819:
          goto LABEL_2995;
        case -2147023818:
          goto LABEL_2996;
        case -2147023817:
          goto LABEL_2997;
        case -2147023816:
          goto LABEL_2998;
        case -2147023815:
          goto LABEL_2999;
        case -2147023814:
          goto LABEL_3000;
        case -2147023813:
          goto LABEL_3001;
        case -2147023796:
          goto LABEL_3002;
        case -2147023795:
          goto LABEL_3003;
        case -2147023794:
          goto LABEL_3004;
        case -2147023793:
          goto LABEL_3005;
        case -2147023792:
          goto LABEL_3006;
        case -2147023791:
          goto LABEL_3007;
        case -2147023790:
          goto LABEL_3008;
        case -2147023789:
          goto LABEL_3009;
        case -2147023788:
          goto LABEL_3010;
        case -2147023787:
          goto LABEL_3011;
        case -2147023786:
          goto LABEL_3012;
        case -2147023785:
          goto LABEL_3013;
        case -2147023784:
          goto LABEL_3014;
        case -2147023783:
          goto LABEL_3015;
        case -2147023782:
          goto LABEL_3016;
        case -2147023781:
          goto LABEL_3017;
        case -2147023780:
          goto LABEL_3018;
        case -2147023779:
          goto LABEL_3019;
        case -2147023778:
          goto LABEL_3020;
        case -2147023777:
          goto LABEL_3021;
        case -2147023776:
          goto LABEL_3022;
        case -2147023775:
          goto LABEL_3023;
        case -2147023774:
          goto LABEL_3024;
        case -2147023773:
          goto LABEL_3025;
        case -2147023772:
          goto LABEL_3026;
        case -2147023771:
          goto LABEL_3027;
        case -2147023770:
          goto LABEL_3028;
        case -2147023769:
          goto LABEL_3029;
        case -2147023768:
          goto LABEL_3030;
        case -2147023767:
          goto LABEL_3031;
        case -2147023766:
          goto LABEL_3032;
        case -2147023765:
          goto LABEL_3033;
        case -2147023764:
          goto LABEL_3034;
        case -2147023756:
          goto LABEL_3035;
        case -2147023755:
          goto LABEL_3036;
        case -2147023754:
          goto LABEL_3037;
        case -2147023746:
          goto LABEL_3038;
        case -2147023745:
          goto LABEL_3039;
        case -2147023744:
          goto LABEL_3040;
        case -2147023743:
          goto LABEL_3041;
        case -2147023742:
          goto LABEL_3042;
        default:
          return L"Unknown";
      }
    }
    if ( a1 == -2147023880 )
      return L"ERROR_REGISTRY_IO_FAILED";
    if ( a1 <= -2147024630 )
    {
      if ( a1 != -2147024630 )
      {
        switch ( a1 )
        {
          case -2147024722:
            goto LABEL_2861;
          case -2147024716:
            goto LABEL_2862;
          case -2147024714:
            goto LABEL_2863;
          case -2147024713:
            goto LABEL_2864;
          case -2147024710:
            goto LABEL_2865;
          case -2147024709:
            goto LABEL_2866;
          case -2147024708:
            goto LABEL_2867;
          case -2147024707:
            goto LABEL_2868;
          case -2147024706:
            goto LABEL_2869;
          case -2147024705:
            goto LABEL_2870;
          case -2147024704:
            goto LABEL_2871;
          case -2147024703:
            goto LABEL_2872;
          case -2147024702:
            goto LABEL_2873;
          case -2147024701:
            goto LABEL_2874;
          case -2147024700:
            goto LABEL_2875;
          case -2147024699:
            goto LABEL_2876;
          case -2147024698:
            goto LABEL_2877;
          case -2147024697:
            goto LABEL_2878;
          case -2147024694:
            goto LABEL_2881;
          case -2147024693:
            goto LABEL_2882;
          case -2147024691:
            goto LABEL_2883;
          case -2147024690:
            goto LABEL_2884;
          case -2147024689:
            goto LABEL_2885;
          case -2147024688:
            goto LABEL_2886;
          case -2147024687:
            goto LABEL_2887;
          case -2147024686:
            goto LABEL_2888;
          case -2147024684:
            goto LABEL_2889;
          case -2147024682:
            goto LABEL_2890;
          case -2147024681:
            goto LABEL_2891;
          case -2147024680:
            goto LABEL_2892;
          case -2147024666:
            goto LABEL_2893;
          case -2147024665:
            goto LABEL_2894;
          case -2147024664:
            goto LABEL_2895;
          case -2147024663:
            goto LABEL_2896;
          case -2147024662:
            goto LABEL_2897;
          case -2147024656:
            return L"ERROR_VC_DISCONNECTED";
          case -2147024642:
            goto LABEL_2904;
          case -2147024641:
            goto LABEL_2905;
          case -2147024638:
            goto LABEL_2906;
          case -2147024637:
            goto LABEL_2907;
          default:
            return L"Unknown";
        }
      }
      return L"ERROR_CANNOT_COPY";
    }
    if ( a1 > -2147023901 )
    {
      switch ( a1 )
      {
        case -2147023900:
          return L"ERROR_IO_INCOMPLETE";
        case -2147023899:
          return L"ERROR_IO_PENDING";
        case -2147023898:
          return L"ERROR_NOACCESS";
        case -2147023897:
          return L"ERROR_SWAPERROR";
        case -2147023895:
          return L"ERROR_STACK_OVERFLOW";
        case -2147023894:
          return L"ERROR_INVALID_MESSAGE";
        case -2147023893:
          return L"ERROR_CAN_NOT_COMPLETE";
        case -2147023892:
          goto LABEL_2949;
        case -2147023891:
          goto LABEL_2950;
        case -2147023890:
          goto LABEL_2951;
        case -2147023889:
          goto LABEL_2952;
        case -2147023888:
          goto LABEL_2953;
        case -2147023887:
          goto LABEL_2954;
        case -2147023886:
          goto LABEL_2955;
        case -2147023885:
          goto LABEL_2956;
        case -2147023884:
          goto LABEL_2957;
        case -2147023883:
          goto LABEL_2958;
        case -2147023882:
          goto LABEL_2959;
        case -2147023881:
          goto LABEL_2960;
        default:
          return L"Unknown";
      }
    }
    if ( a1 != -2147023901 )
    {
      if ( a1 <= -2147024596 )
      {
        if ( a1 == -2147024596 )
          return L"ERROR_OPLOCK_NOT_GRANTED";
        if ( a1 > -2147024618 )
        {
          switch ( a1 )
          {
            case -2147024614:
              return L"ERROR_EAS_NOT_SUPPORTED";
            case -2147024608:
              return L"ERROR_NOT_OWNER";
            case -2147024598:
              return L"ERROR_TOO_MANY_POSTS";
            case -2147024597:
              return L"ERROR_PARTIAL_COPY";
          }
        }
        else
        {
          switch ( a1 )
          {
            case -2147024618:
              return L"ERROR_INVALID_EA_HANDLE";
            case -2147024629:
              return L"ERROR_DIRECTORY";
            case -2147024621:
              return L"ERROR_EAS_DIDNT_FIT";
            case -2147024620:
              return L"ERROR_EA_FILE_CORRUPT";
            case -2147024619:
              return L"ERROR_EA_TABLE_FULL";
          }
        }
        return L"Unknown";
      }
      if ( a1 <= -2147024409 )
      {
        if ( a1 != -2147024409 )
        {
          if ( a1 != -2147024595 )
          {
            if ( a1 != -2147024594 )
            {
              if ( a1 != -2147024593 )
              {
                if ( a1 == -2147024579 )
                  return L"ERROR_MR_MID_NOT_FOUND";
                return L"Unknown";
              }
              return L"ERROR_DELETE_PENDING";
            }
            return L"ERROR_DISK_TOO_FRAGMENTED";
          }
          return L"ERROR_INVALID_OPLOCK_PROTOCOL";
        }
        return L"ERROR_INVALID_ADDRESS";
      }
      if ( a1 != -2147024362 )
      {
        if ( a1 != -2147024361 )
        {
          if ( a1 != -2147024360 )
          {
            if ( a1 != -2147023902 )
              return L"Unknown";
            return L"ERROR_EA_ACCESS_DENIED";
          }
          return L"ERROR_PIPE_LISTENING";
        }
        return L"ERROR_PIPE_CONNECTED";
      }
      return L"ERROR_ARITHMETIC_OVERFLOW";
    }
    return L"ERROR_OPERATION_ABORTED";
  }
  if ( a1 == -2147168247 )
    return L"XACT_E_NOASYNC";
  if ( a1 > -2147220999 )
  {
    if ( a1 > -2147220494 )
    {
      if ( a1 > -2147217407 )
      {
        if ( a1 > -2147216631 )
        {
          if ( a1 > -2147213311 )
          {
            if ( a1 > -2147205091 )
            {
              if ( a1 > -2147168256 )
              {
                switch ( a1 )
                {
                  case -2147168255:
                    result = L"XACT_E_CANTRETAIN";
                    break;
                  case -2147168254:
                    result = L"XACT_E_COMMITFAILED";
                    break;
                  case -2147168253:
                    result = L"XACT_E_COMMITPREVENTED";
                    break;
                  case -2147168252:
                    result = L"XACT_E_HEURISTICABORT";
                    break;
                  case -2147168251:
                    result = L"XACT_E_HEURISTICCOMMIT";
                    break;
                  case -2147168250:
                    result = L"XACT_E_HEURISTICDAMAGE";
                    break;
                  case -2147168249:
                    result = L"XACT_E_HEURISTICDANGER";
                    break;
                  case -2147168248:
                    result = L"XACT_E_ISOLATIONLEVEL";
                    break;
                  default:
                    return L"Unknown";
                }
              }
              else if ( a1 == -2147168256 )
              {
                return L"XACT_E_FIRST";
              }
              else
              {
                switch ( a1 )
                {
                  case -2147205090:
                    result = L"WBEMMOF_E_INVALID_FILE";
                    break;
                  case -2147205089:
                    result = L"WBEMMOF_E_ALIASES_IN_EMBEDDED";
                    break;
                  case -2147205088:
                    result = L"WBEMMOF_E_NULL_ARRAY_ELEM";
                    break;
                  case -2147205087:
                    result = L"WBEMMOF_E_DUPLICATE_QUALIFIER";
                    break;
                  case -2147205086:
                    result = L"WBEMMOF_E_EXPECTED_FLAVOR_TYPE";
                    break;
                  case -2147205085:
                    result = L"WBEMMOF_E_INCOMPATIBLE_FLAVOR_TYPES";
                    break;
                  case -2147205084:
                    result = L"WBEMMOF_E_MULTIPLE_ALIASES";
                    break;
                  case -2147205083:
                    result = L"WBEMMOF_E_INCOMPATIBLE_FLAVOR_TYPES2";
                    break;
                  case -2147205082:
                    result = L"WBEMMOF_E_NO_ARRAYS_RETURNED";
                    break;
                  case -2147205081:
                    result = L"WBEMMOF_E_MUST_BE_IN_OR_OUT";
                    break;
                  case -2147205080:
                    result = L"WBEMMOF_E_INVALID_FLAGS_SYNTAX";
                    break;
                  case -2147205079:
                    result = L"WBEMMOF_E_EXPECTED_BRACE_OR_BAD_TYPE";
                    break;
                  case -2147205078:
                    result = L"WBEMMOF_E_UNSUPPORTED_CIMV22_QUAL_VALUE";
                    break;
                  case -2147205077:
                    result = L"WBEMMOF_E_UNSUPPORTED_CIMV22_DATA_TYPE";
                    break;
                  case -2147205076:
                    result = L"WBEMMOF_E_INVALID_DELETEINSTANCE_SYNTAX";
                    break;
                  case -2147205075:
                    result = L"WBEMMOF_E_INVALID_QUALIFIER_SYNTAX";
                    break;
                  case -2147205074:
                    result = L"WBEMMOF_E_QUALIFIER_USED_OUTSIDE_SCOPE";
                    break;
                  case -2147205073:
                    result = L"WBEMMOF_E_ERROR_CREATING_TEMP_FILE";
                    break;
                  case -2147205072:
                    result = L"WBEMMOF_E_ERROR_INVALID_INCLUDE_FILE";
                    break;
                  case -2147205071:
                    result = L"WBEMMOF_E_INVALID_DELETECLASS_SYNTAX";
                    break;
                  default:
                    return L"Unknown";
                }
              }
            }
            else
            {
              if ( a1 == -2147205091 )
                return L"WBEMMOF_E_OUT_OF_RANGE";
              if ( a1 > -2147205106 )
              {
                switch ( a1 )
                {
                  case -2147205105:
                    result = L"WBEMMOF_E_UNEXPECTED_ARRAY_INIT";
                    break;
                  case -2147205104:
                    result = L"WBEMMOF_E_INVALID_AMENDMENT_SYNTAX";
                    break;
                  case -2147205103:
                    result = L"WBEMMOF_E_INVALID_DUPLICATE_AMENDMENT";
                    break;
                  case -2147205102:
                    result = L"WBEMMOF_E_INVALID_PRAGMA";
                    break;
                  case -2147205101:
                    result = L"WBEMMOF_E_INVALID_NAMESPACE_SYNTAX";
                    break;
                  case -2147205100:
                    result = L"WBEMMOF_E_EXPECTED_CLASS_NAME";
                    break;
                  case -2147205099:
                    result = L"WBEMMOF_E_TYPE_MISMATCH";
                    break;
                  case -2147205098:
                    result = L"WBEMMOF_E_EXPECTED_ALIAS_NAME";
                    break;
                  case -2147205097:
                    result = L"WBEMMOF_E_INVALID_CLASS_DECLARATION";
                    break;
                  case -2147205096:
                    result = L"WBEMMOF_E_INVALID_INSTANCE_DECLARATION";
                    break;
                  case -2147205095:
                    result = L"WBEMMOF_E_EXPECTED_DOLLAR";
                    break;
                  case -2147205094:
                    result = L"WBEMMOF_E_CIMTYPE_QUALIFIER";
                    break;
                  case -2147205093:
                    result = L"WBEMMOF_E_DUPLICATE_PROPERTY";
                    break;
                  case -2147205092:
                    result = L"WBEMMOF_E_INVALID_NAMESPACE_SPECIFICATION";
                    break;
                  default:
                    return L"Unknown";
                }
              }
              else
              {
                if ( a1 == -2147205106 )
                  return L"WBEMMOF_E_UNEXPECTED_ALIAS";
                if ( a1 <= -2147205113 )
                {
                  switch ( a1 )
                  {
                    case -2147205113:
                      return L"WBEMMOF_E_ILLEGAL_CONSTANT_VALUE";
                    case -2147213310:
                      return L"WBEMESS_E_REGISTRATION_TOO_PRECISE";
                    case -2147205119:
                      return L"WBEMMOF_E_EXPECTED_QUALIFIER_NAME";
                    case -2147205118:
                      return L"WBEMMOF_E_EXPECTED_SEMI";
                    case -2147205117:
                      return L"WBEMMOF_E_EXPECTED_OPEN_BRACE";
                    case -2147205116:
                      return L"WBEMMOF_E_EXPECTED_CLOSE_BRACE";
                    case -2147205115:
                      return L"WBEMMOF_E_EXPECTED_CLOSE_BRACKET";
                    case -2147205114:
                      return L"WBEMMOF_E_EXPECTED_CLOSE_PAREN";
                  }
                  return L"Unknown";
                }
                switch ( a1 )
                {
                  case -2147205112:
                    return L"WBEMMOF_E_EXPECTED_TYPE_IDENTIFIER";
                  case -2147205111:
                    return L"WBEMMOF_E_EXPECTED_OPEN_PAREN";
                  case -2147205110:
                    return L"WBEMMOF_E_UNRECOGNIZED_TOKEN";
                  case -2147205109:
                    return L"WBEMMOF_E_UNRECOGNIZED_TYPE";
                  case -2147205108:
                    return L"WBEMMOF_E_EXPECTED_PROPERTY_NAME";
                  default:
                    return L"WBEMMOF_E_TYPEDEF_NOT_SUPPORTED";
                }
              }
            }
          }
          else if ( a1 == -2147213311 )
          {
            return L"WBEMESS_E_REGISTRATION_TOO_BROAD";
          }
          else
          {
            switch ( a1 )
            {
              case -2147216630:
                result = L"SCHED_E_TASK_NOT_READY";
                break;
              case -2147216629:
                result = L"SCHED_E_TASK_NOT_RUNNING";
                break;
              case -2147216628:
                result = L"SCHED_E_SERVICE_NOT_INSTALLED";
                break;
              case -2147216627:
                result = L"SCHED_E_CANNOT_OPEN_TASK";
                break;
              case -2147216626:
                result = L"SCHED_E_INVALID_TASK";
                break;
              case -2147216625:
                result = L"SCHED_E_ACCOUNT_INFORMATION_NOT_SET";
                break;
              case -2147216624:
                result = L"SCHED_E_ACCOUNT_NAME_NOT_FOUND";
                break;
              case -2147216623:
                result = L"SCHED_E_ACCOUNT_DBASE_CORRUPT";
                break;
              case -2147216622:
                result = L"SCHED_E_NO_SECURITY_SERVICES";
                break;
              case -2147216621:
                result = L"SCHED_E_UNKNOWN_OBJECT_VERSION";
                break;
              case -2147216620:
                result = L"SCHED_E_UNSUPPORTED_ACCOUNT_OPTION";
                break;
              case -2147216619:
                result = L"SCHED_E_SERVICE_NOT_RUNNING";
                break;
              default:
                return L"Unknown";
            }
          }
        }
        else if ( a1 == -2147216631 )
        {
          return L"SCHED_E_TRIGGER_NOT_FOUND";
        }
        else
        {
          switch ( a1 )
          {
            case -2147217406:
              result = L"WBEM_E_NOT_FOUND";
              break;
            case -2147217405:
              result = L"WBEM_E_ACCESS_DENIED";
              break;
            case -2147217404:
              result = L"WBEM_E_PROVIDER_FAILURE";
              break;
            case -2147217403:
              result = L"WBEM_E_TYPE_MISMATCH";
              break;
            case -2147217402:
              result = L"WBEM_E_OUT_OF_MEMORY";
              break;
            case -2147217401:
              result = L"WBEM_E_INVALID_CONTEXT";
              break;
            case -2147217400:
              result = L"WBEM_E_INVALID_PARAMETER";
              break;
            case -2147217399:
              result = L"WBEM_E_NOT_AVAILABLE";
              break;
            case -2147217398:
              result = L"WBEM_E_CRITICAL_ERROR";
              break;
            case -2147217397:
              result = L"WBEM_E_INVALID_STREAM";
              break;
            case -2147217396:
              result = L"WBEM_E_NOT_SUPPORTED";
              break;
            case -2147217395:
              result = L"WBEM_E_INVALID_SUPERCLASS";
              break;
            case -2147217394:
              result = L"WBEM_E_INVALID_NAMESPACE";
              break;
            case -2147217393:
              result = L"WBEM_E_INVALID_OBJECT";
              break;
            case -2147217392:
              result = L"WBEM_E_INVALID_CLASS";
              break;
            case -2147217391:
              result = L"WBEM_E_PROVIDER_NOT_FOUND";
              break;
            case -2147217390:
              result = L"WBEM_E_INVALID_PROVIDER_REGISTRATION";
              break;
            case -2147217389:
              result = L"WBEM_E_PROVIDER_LOAD_FAILURE";
              break;
            case -2147217388:
              result = L"WBEM_E_INITIALIZATION_FAILURE";
              break;
            case -2147217387:
              result = L"WBEM_E_TRANSPORT_FAILURE";
              break;
            case -2147217386:
              result = L"WBEM_E_INVALID_OPERATION";
              break;
            case -2147217385:
              result = L"WBEM_E_INVALID_QUERY";
              break;
            case -2147217384:
              result = L"WBEM_E_INVALID_QUERY_TYPE";
              break;
            case -2147217383:
              result = L"WBEM_E_ALREADY_EXISTS";
              break;
            case -2147217382:
              result = L"WBEM_E_OVERRIDE_NOT_ALLOWED";
              break;
            case -2147217381:
              result = L"WBEM_E_PROPAGATED_QUALIFIER";
              break;
            case -2147217380:
              result = L"WBEM_E_PROPAGATED_PROPERTY";
              break;
            case -2147217379:
              result = L"WBEM_E_UNEXPECTED";
              break;
            case -2147217378:
              result = L"WBEM_E_ILLEGAL_OPERATION";
              break;
            case -2147217377:
              result = L"WBEM_E_CANNOT_BE_KEY";
              break;
            case -2147217376:
              result = L"WBEM_E_INCOMPLETE_CLASS";
              break;
            case -2147217375:
              result = L"WBEM_E_INVALID_SYNTAX";
              break;
            case -2147217374:
              result = L"WBEM_E_NONDECORATED_OBJECT";
              break;
            case -2147217373:
              result = L"WBEM_E_READ_ONLY";
              break;
            case -2147217372:
              result = L"WBEM_E_PROVIDER_NOT_CAPABLE";
              break;
            case -2147217371:
              result = L"WBEM_E_CLASS_HAS_CHILDREN";
              break;
            case -2147217370:
              result = L"WBEM_E_CLASS_HAS_INSTANCES";
              break;
            case -2147217369:
              result = L"WBEM_E_QUERY_NOT_IMPLEMENTED";
              break;
            case -2147217368:
              result = L"WBEM_E_ILLEGAL_NULL";
              break;
            case -2147217367:
              result = L"WBEM_E_INVALID_QUALIFIER_TYPE";
              break;
            case -2147217366:
              result = L"WBEM_E_INVALID_PROPERTY_TYPE";
              break;
            case -2147217365:
              result = L"WBEM_E_VALUE_OUT_OF_RANGE";
              break;
            case -2147217364:
              result = L"WBEM_E_CANNOT_BE_SINGLETON";
              break;
            case -2147217363:
              result = L"WBEM_E_INVALID_CIM_TYPE";
              break;
            case -2147217362:
              result = L"WBEM_E_INVALID_METHOD";
              break;
            case -2147217361:
              result = L"WBEM_E_INVALID_METHOD_PARAMETERS";
              break;
            case -2147217360:
              result = L"WBEM_E_SYSTEM_PROPERTY";
              break;
            case -2147217359:
              result = L"WBEM_E_INVALID_PROPERTY";
              break;
            case -2147217358:
              result = L"WBEM_E_CALL_CANCELLED";
              break;
            case -2147217357:
              result = L"WBEM_E_SHUTTING_DOWN";
              break;
            case -2147217356:
              result = L"WBEM_E_PROPAGATED_METHOD";
              break;
            case -2147217355:
              result = L"WBEM_E_UNSUPPORTED_PARAMETER";
              break;
            case -2147217354:
              result = L"WBEM_E_MISSING_PARAMETER_ID";
              break;
            case -2147217353:
              result = L"WBEM_E_INVALID_PARAMETER_ID";
              break;
            case -2147217352:
              result = L"WBEM_E_NONCONSECUTIVE_PARAMETER_IDS";
              break;
            case -2147217351:
              result = L"WBEM_E_PARAMETER_ID_ON_RETVAL";
              break;
            case -2147217350:
              result = L"WBEM_E_INVALID_OBJECT_PATH";
              break;
            case -2147217349:
              result = L"WBEM_E_OUT_OF_DISK_SPACE";
              break;
            case -2147217348:
              result = L"WBEM_E_BUFFER_TOO_SMALL";
              break;
            case -2147217347:
              result = L"WBEM_E_UNSUPPORTED_PUT_EXTENSION";
              break;
            case -2147217346:
              result = L"WBEM_E_UNKNOWN_OBJECT_TYPE";
              break;
            case -2147217345:
              result = L"WBEM_E_UNKNOWN_PACKET_TYPE";
              break;
            case -2147217344:
              result = L"WBEM_E_MARSHAL_VERSION_MISMATCH";
              break;
            case -2147217343:
              result = L"WBEM_E_MARSHAL_INVALID_SIGNATURE";
              break;
            case -2147217342:
              result = L"WBEM_E_INVALID_QUALIFIER";
              break;
            case -2147217341:
              result = L"WBEM_E_INVALID_DUPLICATE_PARAMETER";
              break;
            case -2147217340:
              result = L"WBEM_E_TOO_MUCH_DATA";
              break;
            case -2147217339:
              result = L"WBEM_E_SERVER_TOO_BUSY";
              break;
            case -2147217338:
              result = L"WBEM_E_INVALID_FLAVOR";
              break;
            case -2147217337:
              result = L"WBEM_E_CIRCULAR_REFERENCE";
              break;
            case -2147217336:
              result = L"WBEM_E_UNSUPPORTED_CLASS_UPDATE";
              break;
            case -2147217335:
              result = L"WBEM_E_CANNOT_CHANGE_KEY_INHERITANCE";
              break;
            case -2147217328:
              result = L"WBEM_E_CANNOT_CHANGE_INDEX_INHERITANCE";
              break;
            case -2147217327:
              result = L"WBEM_E_TOO_MANY_PROPERTIES";
              break;
            case -2147217326:
              result = L"WBEM_E_UPDATE_TYPE_MISMATCH";
              break;
            case -2147217325:
              result = L"WBEM_E_UPDATE_OVERRIDE_NOT_ALLOWED";
              break;
            case -2147217324:
              result = L"WBEM_E_UPDATE_PROPAGATED_METHOD";
              break;
            case -2147217323:
              result = L"WBEM_E_METHOD_NOT_IMPLEMENTED";
              break;
            case -2147217322:
              result = L"WBEM_E_METHOD_DISABLED";
              break;
            case -2147217321:
              result = L"WBEM_E_REFRESHER_BUSY";
              break;
            case -2147217320:
              result = L"WBEM_E_UNPARSABLE_QUERY";
              break;
            case -2147217319:
              result = L"WBEM_E_NOT_EVENT_CLASS";
              break;
            case -2147217318:
              result = L"WBEM_E_MISSING_GROUP_WITHIN";
              break;
            case -2147217317:
              result = L"WBEM_E_MISSING_AGGREGATION_LIST";
              break;
            case -2147217316:
              result = L"WBEM_E_PROPERTY_NOT_AN_OBJECT";
              break;
            case -2147217315:
              result = L"WBEM_E_AGGREGATING_BY_OBJECT";
              break;
            case -2147217313:
              result = L"WBEM_E_UNINTERPRETABLE_PROVIDER_QUERY";
              break;
            case -2147217312:
              result = L"WBEM_E_BACKUP_RESTORE_WINMGMT_RUNNING";
              break;
            case -2147217311:
              result = L"WBEM_E_QUEUE_OVERFLOW";
              break;
            case -2147217310:
              result = L"WBEM_E_PRIVILEGE_NOT_HELD";
              break;
            case -2147217309:
              result = L"WBEM_E_INVALID_OPERATOR";
              break;
            case -2147217308:
              result = L"WBEM_E_LOCAL_CREDENTIALS";
              break;
            case -2147217307:
              result = L"WBEM_E_CANNOT_BE_ABSTRACT";
              break;
            case -2147217306:
              result = L"WBEM_E_AMENDED_OBJECT";
              break;
            case -2147217305:
              result = L"WBEM_E_CLIENT_TOO_SLOW";
              break;
            case -2147217304:
              result = L"WBEM_E_NULL_SECURITY_DESCRIPTOR";
              break;
            case -2147217303:
              result = L"WBEM_E_TIMED_OUT";
              break;
            case -2147217302:
              result = L"WBEM_E_INVALID_ASSOCIATION";
              break;
            case -2147217301:
              result = L"WBEM_E_AMBIGUOUS_OPERATION";
              break;
            case -2147217300:
              result = L"WBEM_E_QUOTA_VIOLATION";
              break;
            case -2147217299:
              result = L"WBEM_E_RESERVED_001";
              break;
            case -2147217298:
              result = L"WBEM_E_RESERVED_002";
              break;
            case -2147217297:
              result = L"WBEM_E_UNSUPPORTED_LOCALE";
              break;
            case -2147217296:
              result = L"WBEM_E_HANDLE_OUT_OF_DATE";
              break;
            case -2147217295:
              result = L"WBEM_E_CONNECTION_FAILED";
              break;
            case -2147217294:
              result = L"WBEM_E_INVALID_HANDLE_REQUEST";
              break;
            case -2147217293:
              result = L"WBEM_E_PROPERTY_NAME_TOO_WIDE";
              break;
            case -2147217292:
              result = L"WBEM_E_CLASS_NAME_TOO_WIDE";
              break;
            case -2147217291:
              result = L"WBEM_E_METHOD_NAME_TOO_WIDE";
              break;
            case -2147217290:
              result = L"WBEM_E_QUALIFIER_NAME_TOO_WIDE";
              break;
            case -2147217289:
              result = L"WBEM_E_RERUN_COMMAND";
              break;
            case -2147217288:
              result = L"WBEM_E_DATABASE_VER_MISMATCH";
              break;
            case -2147217287:
              result = L"WBEM_E_VETO_DELETE";
              break;
            case -2147217286:
              result = L"WBEM_E_VETO_PUT";
              break;
            case -2147217280:
              result = L"WBEM_E_INVALID_LOCALE";
              break;
            case -2147217279:
              result = L"WBEM_E_PROVIDER_SUSPENDED";
              break;
            case -2147217278:
              result = L"WBEM_E_SYNCHRONIZATION_REQUIRED";
              break;
            case -2147217277:
              result = L"WBEM_E_NO_SCHEMA";
              break;
            case -2147217276:
              result = L"WBEM_E_PROVIDER_ALREADY_REGISTERED";
              break;
            case -2147217275:
              result = L"WBEM_E_PROVIDER_NOT_REGISTERED";
              break;
            case -2147217274:
              result = L"WBEM_E_FATAL_TRANSPORT_ERROR";
              break;
            case -2147217273:
              result = L"WBEM_E_ENCRYPTED_CONNECTION_REQUIRED";
              break;
            case -2147217272:
              result = L"WBEM_E_PROVIDER_TIMED_OUT";
              break;
            case -2147217271:
              result = L"WBEM_E_NO_KEY";
              break;
            case -2147217270:
              result = L"WBEM_E_PROVIDER_DISABLED";
              break;
            default:
              return L"Unknown";
          }
        }
      }
      else if ( a1 == -2147217407 )
      {
        return L"WBEM_E_FAILED";
      }
      else
      {
        switch ( a1 )
        {
          case -2147220481:
            result = L"DIERR_DRIVERLAST";
            break;
          case -2147220480:
            result = L"DIERR_INVALIDCLASSINSTALLER";
            break;
          case -2147220479:
            result = L"DIERR_CANCELLED & MS_E_SAMPLEALLOC";
            break;
          case -2147220478:
            result = L"DIERR_BADINF & MS_E_PURPOSEID";
            break;
          case -2147220477:
            result = L"MS_E_NOSTREAM";
            break;
          case -2147220476:
            result = L"MS_E_NOSEEKING";
            break;
          case -2147220475:
            result = L"MS_E_INCOMPATIBLE";
            break;
          case -2147220474:
            result = L"MS_E_BUSY";
            break;
          case -2147220473:
            result = L"MS_E_NOTINIT";
            break;
          case -2147220472:
            result = L"MS_E_SOURCEALREADYDEFINED";
            break;
          case -2147220471:
            result = L"MS_E_INVALIDSTREAMTYPE";
            break;
          case -2147220470:
            result = L"MS_E_NOTRUNNING";
            break;
          default:
            return L"Unknown";
        }
      }
    }
    else if ( a1 == -2147220494 )
    {
      return L"VFW_E_BAD_KEY";
    }
    else
    {
      switch ( a1 )
      {
        case -2147220998:
          result = L"CO_E_WRONGOSFORAPP";
          break;
        case -2147220997:
          result = L"CO_E_OBJNOTREG";
          break;
        case -2147220996:
          result = L"CO_E_OBJISREG";
          break;
        case -2147220995:
          result = L"CO_E_OBJNOTCONNECTED";
          break;
        case -2147220994:
          result = L"CO_E_APPDIDNTREG";
          break;
        case -2147220993:
          result = L"CO_E_RELEASED";
          break;
        case -2147220992:
          result = L"DIERR_INSUFFICIENTPRIVS & VFW_E_INVALIDMEDIATYPE";
          break;
        case -2147220991:
          result = L"DIERR_DEVICEFULL & VFW_E_INVALIDSUBTYPE & DMO_E_INVALIDSTREAMINDEX";
          break;
        case -2147220990:
          result = L"DIERR_MOREDATA & VFW_E_NEED_OWNER & DMO_E_INVALIDTYPE";
          break;
        case -2147220989:
          result = L"DIERR_NOTDOWNLOADED & VFW_E_ENUM_OUT_OF_SYNC & DMO_E_TYPE_NOT_SET";
          break;
        case -2147220988:
          result = L"DIERR_HASEFFECTS & VFW_E_ALREADY_CONNECTED & DMO_E_NOTACCEPTING";
          break;
        case -2147220987:
          result = L"DIERR_NOTEXCLUSIVEACQUIRED & VFW_E_FILTER_ACTIVE & DMO_E_TYPE_NOT_ACCEPTED";
          break;
        case -2147220986:
          result = L"DIERR_INCOMPLETEEFFECT & VFW_E_NO_TYPES & DMO_E_NO_MORE_ITEMS";
          break;
        case -2147220985:
          result = L"DIERR_NOTBUFFERED & VFW_E_NO_ACCEPTABLE_TYPES";
          break;
        case -2147220984:
          result = L"DIERR_EFFECTPLAYING & VFW_E_INVALID_DIRECTION";
          break;
        case -2147220983:
          result = L"DIERR_UNPLUGGED & VFW_E_NOT_CONNECTED";
          break;
        case -2147220982:
          result = L"DIERR_REPORTFULL & VFW_E_NO_ALLOCATOR";
          break;
        case -2147220981:
          result = L"DIERR_MAPFILEFAIL & VFW_E_RUNTIME_ERROR";
          break;
        case -2147220980:
          result = L"VFW_E_BUFFER_NOTSET";
          break;
        case -2147220979:
          result = L"VFW_E_BUFFER_OVERFLOW";
          break;
        case -2147220978:
          result = L"VFW_E_BADALIGN";
          break;
        case -2147220977:
          result = L"VFW_E_ALREADY_COMMITTED";
          break;
        case -2147220976:
          result = L"VFW_E_BUFFERS_OUTSTANDING";
          break;
        case -2147220975:
          result = L"VFW_E_NOT_COMMITTED";
          break;
        case -2147220974:
          result = L"VFW_E_SIZENOTSET";
          break;
        case -2147220973:
          result = L"VFW_E_NO_CLOCK";
          break;
        case -2147220972:
          result = L"VFW_E_NO_SINK";
          break;
        case -2147220971:
          result = L"VFW_E_NO_INTERFACE";
          break;
        case -2147220970:
          result = L"VFW_E_NOT_FOUND";
          break;
        case -2147220969:
          result = L"VFW_E_CANNOT_CONNECT";
          break;
        case -2147220968:
          result = L"VFW_E_CANNOT_RENDER";
          break;
        case -2147220967:
          result = L"VFW_E_CHANGING_FORMAT";
          break;
        case -2147220966:
          result = L"VFW_E_NO_COLOR_KEY_SET";
          break;
        case -2147220965:
          result = L"VFW_E_NOT_OVERLAY_CONNECTION";
          break;
        case -2147220964:
          result = L"VFW_E_NOT_SAMPLE_CONNECTION";
          break;
        case -2147220963:
          result = L"VFW_E_PALETTE_SET";
          break;
        case -2147220962:
          result = L"VFW_E_COLOR_KEY_SET";
          break;
        case -2147220961:
          result = L"VFW_E_NO_COLOR_KEY_FOUND";
          break;
        case -2147220960:
          result = L"VFW_E_NO_PALETTE_AVAILABLE";
          break;
        case -2147220959:
          result = L"VFW_E_NO_DISPLAY_PALETTE";
          break;
        case -2147220958:
          result = L"VFW_E_TOO_MANY_COLORS";
          break;
        case -2147220957:
          result = L"VFW_E_STATE_CHANGED";
          break;
        case -2147220956:
          result = L"VFW_E_NOT_STOPPED";
          break;
        case -2147220955:
          result = L"VFW_E_NOT_PAUSED";
          break;
        case -2147220954:
          result = L"VFW_E_NOT_RUNNING";
          break;
        case -2147220953:
          result = L"VFW_E_WRONG_STATE";
          break;
        case -2147220952:
          result = L"VFW_E_START_TIME_AFTER_END";
          break;
        case -2147220951:
          result = L"VFW_E_INVALID_RECT";
          break;
        case -2147220950:
          result = L"VFW_E_TYPE_NOT_ACCEPTED";
          break;
        case -2147220949:
          result = L"VFW_E_SAMPLE_REJECTED";
          break;
        case -2147220948:
          result = L"VFW_E_SAMPLE_REJECTED_EOS";
          break;
        case -2147220947:
          result = L"VFW_E_DUPLICATE_NAME";
          break;
        case -2147220946:
          result = L"VFW_E_TIMEOUT";
          break;
        case -2147220945:
          result = L"VFW_E_INVALID_FILE_FORMAT";
          break;
        case -2147220944:
          result = L"VFW_E_ENUM_OUT_OF_RANGE";
          break;
        case -2147220943:
          result = L"VFW_E_CIRCULAR_GRAPH";
          break;
        case -2147220942:
          result = L"VFW_E_NOT_ALLOWED_TO_SAVE";
          break;
        case -2147220941:
          result = L"VFW_E_TIME_ALREADY_PASSED";
          break;
        case -2147220940:
          result = L"VFW_E_ALREADY_CANCELLED";
          break;
        case -2147220939:
          result = L"VFW_E_CORRUPT_GRAPH_FILE";
          break;
        case -2147220938:
          result = L"VFW_E_ADVISE_ALREADY_SET";
          break;
        case -2147220936:
          result = L"VFW_E_NO_MODEX_AVAILABLE";
          break;
        case -2147220935:
          result = L"VFW_E_NO_ADVISE_SET";
          break;
        case -2147220934:
          result = L"VFW_E_NO_FULLSCREEN";
          break;
        case -2147220933:
          result = L"VFW_E_IN_FULLSCREEN_MODE";
          break;
        case -2147220928:
          result = L"VFW_E_UNKNOWN_FILE_TYPE";
          break;
        case -2147220927:
          result = L"VFW_E_CANNOT_LOAD_SOURCE_FILTER";
          break;
        case -2147220925:
          result = L"VFW_E_FILE_TOO_SHORT";
          break;
        case -2147220924:
          result = L"VFW_E_INVALID_FILE_VERSION";
          break;
        case -2147220921:
          result = L"VFW_E_INVALID_CLSID";
          break;
        case -2147220920:
          result = L"VFW_E_INVALID_MEDIA_TYPE";
          break;
        case -2147220919:
          result = L"VFW_E_SAMPLE_TIME_NOT_SET";
          break;
        case -2147220911:
          result = L"VFW_E_MEDIA_TIME_NOT_SET";
          break;
        case -2147220910:
          result = L"VFW_E_NO_TIME_FORMAT_SET";
          break;
        case -2147220909:
          result = L"VFW_E_MONO_AUDIO_HW";
          break;
        case -2147220907:
          result = L"VFW_E_NO_DECOMPRESSOR";
          break;
        case -2147220906:
          result = L"VFW_E_NO_AUDIO_HARDWARE";
          break;
        case -2147220903:
          result = L"VFW_E_RPZA";
          break;
        case -2147220901:
          result = L"VFW_E_PROCESSOR_NOT_SUITABLE";
          break;
        case -2147220900:
          result = L"VFW_E_UNSUPPORTED_AUDIO";
          break;
        case -2147220899:
          result = L"VFW_E_UNSUPPORTED_VIDEO";
          break;
        case -2147220898:
          result = L"VFW_E_MPEG_NOT_CONSTRAINED";
          break;
        case -2147220897:
          result = L"VFW_E_NOT_IN_GRAPH";
          break;
        case -2147220895:
          result = L"VFW_E_NO_TIME_FORMAT";
          break;
        case -2147220894:
          result = L"VFW_E_READ_ONLY";
          break;
        case -2147220892:
          result = L"VFW_E_BUFFER_UNDERFLOW";
          break;
        case -2147220891:
          result = L"VFW_E_UNSUPPORTED_STREAM";
          break;
        case -2147220890:
          result = L"VFW_E_NO_TRANSPORT";
          break;
        case -2147220887:
          result = L"VFW_E_BAD_VIDEOCD";
          break;
        case -2147220879:
          result = L"VFW_E_OUT_OF_VIDEO_MEMORY";
          break;
        case -2147220878:
          result = L"VFW_E_VP_NEGOTIATION_FAILED";
          break;
        case -2147220877:
          result = L"VFW_E_DDRAW_CAPS_NOT_SUITABLE";
          break;
        case -2147220876:
          result = L"VFW_E_NO_VP_HARDWARE";
          break;
        case -2147220875:
          result = L"VFW_E_NO_CAPTURE_HARDWARE";
          break;
        case -2147220874:
          result = L"VFW_E_DVD_OPERATION_INHIBITED";
          break;
        case -2147220873:
          result = L"VFW_E_DVD_INVALIDDOMAIN";
          break;
        case -2147220872:
          result = L"VFW_E_DVD_NO_BUTTON";
          break;
        case -2147220871:
          result = L"VFW_E_DVD_GRAPHNOTREADY";
          break;
        case -2147220870:
          result = L"VFW_E_DVD_RENDERFAIL";
          break;
        case -2147220869:
          result = L"VFW_E_DVD_DECNOTENOUGH";
          break;
        case -2147220868:
          result = L"VFW_E_DDRAW_VERSION_NOT_SUITABLE";
          break;
        case -2147220867:
          result = L"VFW_E_COPYPROT_FAILED";
          break;
        case -2147220865:
          result = L"VFW_E_TIME_EXPIRED";
          break;
        case -2147220863:
          result = L"VFW_E_DVD_WRONG_SPEED";
          break;
        case -2147220862:
          result = L"VFW_E_DVD_MENU_DOES_NOT_EXIST";
          break;
        case -2147220861:
          result = L"VFW_E_DVD_CMD_CANCELLED";
          break;
        case -2147220860:
          result = L"VFW_E_DVD_STATE_WRONG_VERSION";
          break;
        case -2147220859:
          result = L"VFW_E_DVD_STATE_CORRUPT";
          break;
        case -2147220858:
          result = L"VFW_E_DVD_STATE_WRONG_DISC";
          break;
        case -2147220857:
          result = L"VFW_E_DVD_INCOMPATIBLE_REGION";
          break;
        case -2147220856:
          result = L"VFW_E_DVD_NO_ATTRIBUTES";
          break;
        case -2147220855:
          result = L"VFW_E_DVD_NO_GOUP_PGC";
          break;
        case -2147220854:
          result = L"VFW_E_DVD_LOW_PARENTAL_LEVEL";
          break;
        case -2147220853:
          result = L"VFW_E_DVD_NOT_IN_KARAOKE_MODE";
          break;
        case -2147220850:
          result = L"VFW_E_FRAME_STEP_UNSUPPORTED";
          break;
        case -2147220849:
          result = L"VFW_E_DVD_STREAM_DISABLED";
          break;
        case -2147220848:
          result = L"VFW_E_DVD_TITLE_UNKNOWN";
          break;
        case -2147220847:
          result = L"VFW_E_DVD_INVALID_DISC";
          break;
        case -2147220846:
          result = L"VFW_E_DVD_NO_RESUME_INFORMATION";
          break;
        case -2147220845:
          result = L"VFW_E_PIN_ALREADY_BLOCKED_ON_THIS_THREAD";
          break;
        case -2147220844:
          result = L"VFW_E_PIN_ALREADY_BLOCKED";
          break;
        case -2147220843:
          result = L"VFW_E_CERTIFICATION_FAILURE";
          break;
        case -2147220736:
          result = L"DIERR_DRIVERFIRST";
          break;
        case -2147220735:
          result = L"DIERR_DRIVERFIRST+1";
          break;
        case -2147220734:
          result = L"DIERR_DRIVERFIRST+2";
          break;
        case -2147220733:
          result = L"DIERR_DRIVERFIRST+3";
          break;
        case -2147220732:
          result = L"DIERR_DRIVERFIRST+4";
          break;
        case -2147220731:
          result = L"DIERR_DRIVERFIRST+5";
          break;
        default:
          return L"Unknown";
      }
    }
  }
  else
  {
    if ( a1 == -2147220999 )
      return L"CO_E_ERRORINDLL";
    if ( a1 > -2147316575 )
    {
      if ( a1 > -2147221246 )
      {
        switch ( a1 )
        {
          case -2147221233:
            result = L"DRAGDROP_E_LAST";
            break;
          case -2147221232:
            result = L"CLASSFACTORY_E_FIRST";
            break;
          case -2147221231:
            result = L"CLASS_E_CLASSNOTAVAILABLE";
            break;
          case -2147221230:
            result = L"CLASS_E_NOTLICENSED";
            break;
          case -2147221217:
            result = L"CLASSFACTORY_E_LAST";
            break;
          case -2147221216:
            result = L"MARSHAL_E_FIRST";
            break;
          case -2147221201:
            result = L"MARSHAL_E_LAST";
            break;
          case -2147221200:
            result = L"DATA_E_FIRST";
            break;
          case -2147221185:
            result = L"DATA_E_LAST";
            break;
          case -2147221184:
            result = L"VIEW_E_FIRST";
            break;
          case -2147221169:
            result = L"VIEW_E_LAST";
            break;
          case -2147221168:
            result = L"REGDB_E_FIRST";
            break;
          case -2147221167:
            result = L"REGDB_E_WRITEREGDB";
            break;
          case -2147221166:
            result = L"REGDB_E_KEYMISSING";
            break;
          case -2147221165:
            result = L"REGDB_E_INVALIDVALUE";
            break;
          case -2147221164:
            result = L"REGDB_E_CLASSNOTREG";
            break;
          case -2147221163:
            result = L"REGDB_E_IIDNOTREG";
            break;
          case -2147221162:
            result = L"REGDB_E_BADTHREADINGMODEL";
            break;
          case -2147221153:
            result = L"REGDB_E_LAST";
            break;
          case -2147221152:
            result = L"CAT_E_FIRST";
            break;
          case -2147221151:
            result = L"CAT_E_LAST";
            break;
          case -2147221148:
            result = L"CS_E_FIRST";
            break;
          case -2147221147:
            result = L"CS_E_NOT_DELETABLE";
            break;
          case -2147221146:
            result = L"CS_E_CLASS_NOTFOUND";
            break;
          case -2147221145:
            result = L"CS_E_INVALID_VERSION";
            break;
          case -2147221144:
            result = L"CS_E_NO_CLASSSTORE";
            break;
          case -2147221143:
            result = L"CS_E_OBJECT_NOTFOUND";
            break;
          case -2147221142:
            result = L"CS_E_OBJECT_ALREADY_EXISTS";
            break;
          case -2147221141:
            result = L"CS_E_INVALID_PATH";
            break;
          case -2147221140:
            result = L"CS_E_NETWORK_ERROR";
            break;
          case -2147221139:
            result = L"CS_E_ADMIN_LIMIT_EXCEEDED";
            break;
          case -2147221138:
            result = L"CS_E_SCHEMA_MISMATCH";
            break;
          case -2147221137:
            result = L"CS_E_LAST";
            break;
          case -2147221136:
            result = L"CACHE_E_FIRST";
            break;
          case -2147221121:
            result = L"CACHE_E_LAST";
            break;
          case -2147221120:
            result = L"OLEOBJ_E_FIRST";
            break;
          case -2147221119:
            result = L"OLEOBJ_E_INVALIDVERB";
            break;
          case -2147221105:
            result = L"OLEOBJ_E_LAST";
            break;
          case -2147221104:
            result = L"CLIENTSITE_E_FIRST";
            break;
          case -2147221089:
            result = L"CLIENTSITE_E_LAST";
            break;
          case -2147221088:
            result = L"INPLACE_E_NOTUNDOABLE";
            break;
          case -2147221087:
            result = L"INPLACE_E_NOTOOLSPACE";
            break;
          case -2147221073:
            result = L"INPLACE_E_LAST";
            break;
          case -2147221072:
            result = L"ENUM_E_FIRST";
            break;
          case -2147221057:
            result = L"ENUM_E_LAST";
            break;
          case -2147221056:
            result = L"CONVERT10_E_FIRST";
            break;
          case -2147221055:
            result = L"CONVERT10_E_OLESTREAM_PUT";
            break;
          case -2147221054:
            result = L"CONVERT10_E_OLESTREAM_FMT";
            break;
          case -2147221053:
            result = L"CONVERT10_E_OLESTREAM_BITMAP_TO_DIB";
            break;
          case -2147221052:
            result = L"CONVERT10_E_STG_FMT";
            break;
          case -2147221051:
            result = L"CONVERT10_E_STG_NO_STD_STREAM";
            break;
          case -2147221050:
            result = L"CONVERT10_E_STG_DIB_TO_BITMAP";
            break;
          case -2147221041:
            result = L"CONVERT10_E_LAST";
            break;
          case -2147221040:
            result = L"CLIPBRD_E_FIRST";
            break;
          case -2147221039:
            result = L"CLIPBRD_E_CANT_EMPTY";
            break;
          case -2147221038:
            result = L"CLIPBRD_E_CANT_SET";
            break;
          case -2147221037:
            result = L"CLIPBRD_E_BAD_DATA";
            break;
          case -2147221036:
            result = L"CLIPBRD_E_CANT_CLOSE";
            break;
          case -2147221025:
            result = L"CLIPBRD_E_LAST";
            break;
          case -2147221024:
            result = L"MK_E_FIRST";
            break;
          case -2147221023:
            result = L"MK_E_EXCEEDEDDEADLINE";
            break;
          case -2147221022:
            result = L"MK_E_NEEDGENERIC";
            break;
          case -2147221021:
            result = L"MK_E_UNAVAILABLE";
            break;
          case -2147221020:
            result = L"MK_E_SYNTAX";
            break;
          case -2147221019:
            result = L"MK_E_NOOBJECT";
            break;
          case -2147221018:
            result = L"MK_E_INVALIDEXTENSION";
            break;
          case -2147221017:
            result = L"MK_E_INTERMEDIATEINTERFACENOTSUPPORTED";
            break;
          case -2147221016:
            result = L"MK_E_NOTBINDABLE";
            break;
          case -2147221015:
            result = L"MK_E_NOTBOUND";
            break;
          case -2147221014:
            result = L"MK_E_CANTOPENFILE";
            break;
          case -2147221013:
            result = L"MK_E_MUSTBOTHERUSER";
            break;
          case -2147221012:
            result = L"MK_E_NOINVERSE";
            break;
          case -2147221011:
            result = L"MK_E_NOSTORAGE";
            break;
          case -2147221010:
            result = L"MK_E_NOPREFIX";
            break;
          case -2147221009:
            result = L"MK_E_LAST";
            break;
          case -2147221008:
            result = L"CO_E_NOTINITIALIZED";
            break;
          case -2147221007:
            result = L"CO_E_ALREADYINITIALIZED";
            break;
          case -2147221006:
            result = L"CO_E_CANTDETERMINECLASS";
            break;
          case -2147221005:
            result = L"CO_E_CLASSSTRING";
            break;
          case -2147221004:
            result = L"CO_E_IIDSTRING";
            break;
          case -2147221003:
            result = L"CO_E_APPNOTFOUND";
            break;
          case -2147221002:
            result = L"CO_E_APPSINGLEUSE";
            break;
          case -2147221001:
            result = L"CO_E_ERRORINAPP";
            break;
          case -2147221000:
            result = L"CO_E_DLLNOTFOUND";
            break;
          default:
            return L"Unknown";
        }
      }
      else
      {
        if ( a1 == -2147221246 )
          return L"DRAGDROP_E_INVALIDHWND";
        if ( a1 > -2147286766 )
        {
          if ( a1 > -2147221493 )
          {
            if ( a1 > -2147221401 )
            {
              if ( a1 > -2147221396 )
              {
                switch ( a1 )
                {
                  case -2147221395:
                    return L"DV_E_NOIVIEWOBJECT";
                  case -2147221249:
                    return L"OLE_E_LAST";
                  case -2147221248:
                    return L"DRAGDROP_E_FIRST";
                  case -2147221247:
                    return L"DRAGDROP_E_ALREADYREGISTERED";
                }
                return L"Unknown";
              }
              switch ( a1 )
              {
                case -2147221396:
                  return L"DV_E_DVTARGETDEVICE_SIZE";
                case -2147221400:
                  return L"DV_E_LINDEX";
                case -2147221399:
                  return L"DV_E_TYMED";
                case -2147221398:
                  return L"DV_E_CLIPFORMAT";
                default:
                  return L"DV_E_DVASPECT";
              }
            }
            else
            {
              if ( a1 == -2147221401 )
                return L"DV_E_STATDATA";
              if ( a1 > -2147221487 )
              {
                switch ( a1 )
                {
                  case -2147221486:
                    return L"OLE_E_NOSTORAGE";
                  case -2147221404:
                    return L"DV_E_FORMATETC";
                  case -2147221403:
                    return L"DV_E_DVTARGETDEVICE";
                  case -2147221402:
                    return L"DV_E_STGMEDIUM";
                }
                return L"Unknown";
              }
              switch ( a1 )
              {
                case -2147221487:
                  return L"OLE_E_CANTCONVERT";
                case -2147221492:
                  return L"OLE_E_PROMPTSAVECANCELLED";
                case -2147221491:
                  return L"OLE_E_INVALIDRECT";
                case -2147221490:
                  return L"OLE_E_WRONGCOMPOBJ";
                case -2147221489:
                  return L"OLE_E_INVALIDHWND";
                default:
                  return L"OLE_E_NOT_INPLACEACTIVE";
              }
            }
          }
          else
          {
            if ( a1 == -2147221493 )
              return L"OLE_E_STATIC";
            if ( a1 <= -2147221503 )
            {
              if ( a1 == -2147221503 )
                return L"OLE_E_ADVF";
              if ( a1 > -2147286264 )
              {
                switch ( a1 )
                {
                  case -2147286263:
                    return L"STG_E_CSS_SCRAMBLED_SECTOR";
                  case -2147286262:
                    return L"STG_E_CSS_REGION_MISMATCH";
                  case -2147286261:
                    return L"STG_E_RESETS_EXHAUSTED";
                  case -2147221504:
                    return L"OLE_E_FIRST";
                }
              }
              else
              {
                switch ( a1 )
                {
                  case -2147286264:
                    return L"STG_E_CSS_KEY_NOT_ESTABLISHED";
                  case -2147286527:
                    return L"STG_E_INCOMPLETE";
                  case -2147286526:
                    return L"STG_E_TERMINATED";
                  case -2147286267:
                    return L"STG_E_STATUS_COPY_PROTECTION_FAILURE";
                  case -2147286266:
                    return L"STG_E_CSS_AUTHENTICATION_FAILURE";
                  case -2147286265:
                    return L"STG_E_CSS_KEY_NOT_PRESENT";
                }
              }
              return L"Unknown";
            }
            switch ( a1 )
            {
              case -2147221502:
                result = L"OLE_E_ENUM_NOMORE";
                break;
              case -2147221501:
                result = L"OLE_E_ADVISENOTSUPPORTED";
                break;
              case -2147221500:
                result = L"OLE_E_NOCONNECTION";
                break;
              case -2147221499:
                result = L"OLE_E_NOTRUNNING";
                break;
              case -2147221498:
                result = L"OLE_E_NOCACHE";
                break;
              case -2147221497:
                result = L"OLE_E_BLANK";
                break;
              case -2147221496:
                result = L"OLE_E_CLASSDIFF";
                break;
              case -2147221495:
                result = L"OLE_E_CANT_GETMONIKER";
                break;
              case -2147221494:
                result = L"OLE_E_CANT_BINDTOSOURCE";
                break;
              default:
                return L"Unknown";
            }
          }
        }
        else
        {
          if ( a1 == -2147286766 )
            return L"STG_E_NOTSIMPLEFORMAT";
          if ( a1 > -2147286953 )
          {
            if ( a1 > -2147286782 )
            {
              switch ( a1 )
              {
                case -2147286781:
                  result = L"STG_E_CANTSAVE";
                  break;
                case -2147286780:
                  result = L"STG_E_OLDFORMAT";
                  break;
                case -2147286779:
                  result = L"STG_E_OLDDLL";
                  break;
                case -2147286778:
                  result = L"STG_E_SHAREREQUIRED";
                  break;
                case -2147286777:
                  result = L"STG_E_NOTFILEBASEDSTORAGE";
                  break;
                case -2147286776:
                  result = L"STG_E_EXTANTMARSHALLINGS";
                  break;
                case -2147286775:
                  result = L"STG_E_DOCFILECORRUPT";
                  break;
                case -2147286768:
                  result = L"STG_E_BADBASEADDRESS";
                  break;
                case -2147286767:
                  result = L"STG_E_DOCFILETOOLARGE";
                  break;
                default:
                  return L"Unknown";
              }
            }
            else
            {
              if ( a1 == -2147286782 )
                return L"STG_E_REVERTED";
              if ( a1 <= -2147286787 )
              {
                switch ( a1 )
                {
                  case -2147286787:
                    return L"STG_E_UNKNOWN";
                  case -2147286928:
                    return L"STG_E_MEDIUMFULL";
                  case -2147286800:
                    return L"STG_E_PROPSETMISMATCHED";
                  case -2147286790:
                    return L"STG_E_ABNORMALAPIEXIT";
                  case -2147286789:
                    return L"STG_E_INVALIDHEADER";
                  case -2147286788:
                    return L"STG_E_INVALIDNAME";
                }
                return L"Unknown";
              }
              switch ( a1 )
              {
                case -2147286786:
                  return L"STG_E_UNIMPLEMENTEDFUNCTION";
                case -2147286785:
                  return L"STG_E_INVALIDFLAG";
                case -2147286784:
                  return L"STG_E_INUSE";
                default:
                  return L"STG_E_NOTCURRENT";
              }
            }
          }
          else
          {
            if ( a1 == -2147286953 )
              return L"STG_E_INVALIDPARAMETER";
            if ( a1 > -2147287034 )
            {
              if ( a1 > -2147287011 )
              {
                switch ( a1 )
                {
                  case -2147287010:
                    return L"STG_E_READFAULT";
                  case -2147287008:
                    return L"STG_E_SHAREVIOLATION";
                  case -2147287007:
                    return L"STG_E_LOCKVIOLATION";
                  case -2147286960:
                    return L"STG_E_FILEALREADYEXISTS";
                }
              }
              else
              {
                switch ( a1 )
                {
                  case -2147287011:
                    return L"STG_E_WRITEFAULT";
                  case -2147287032:
                    return L"STG_E_INSUFFICIENTMEMORY";
                  case -2147287031:
                    return L"STG_E_INVALIDPOINTER";
                  case -2147287022:
                    return L"STG_E_NOMOREFILES";
                  case -2147287021:
                    return L"STG_E_DISKISWRITEPROTECTED";
                  case -2147287015:
                    return L"STG_E_SEEKERROR";
                }
              }
              return L"Unknown";
            }
            if ( a1 == -2147287034 )
              return L"STG_E_INVALIDHANDLE";
            if ( a1 <= -2147287039 )
            {
              switch ( a1 )
              {
                case -2147287039:
                  return L"STG_E_INVALIDFUNCTION";
                case -2147316574:
                  return L"TYPE_E_IOERROR";
                case -2147316573:
                  return L"TYPE_E_CANTCREATETMPFILE";
                case -2147312566:
                  return L"TYPE_E_CANTLOADLIBRARY";
                case -2147312509:
                  return L"TYPE_E_INCONSISTENTPROPFUNCS";
                case -2147312508:
                  return L"TYPE_E_CIRCULARTYPE";
              }
              return L"Unknown";
            }
            switch ( a1 )
            {
              case -2147287038:
                return L"STG_E_FILENOTFOUND";
              case -2147287037:
                return L"STG_E_PATHNOTFOUND";
              case -2147287036:
                return L"STG_E_TOOMANYOPENFILES";
              default:
                return L"STG_E_ACCESSDENIED";
            }
          }
        }
      }
    }
    else
    {
      if ( a1 == -2147316575 )
        return L"TYPE_E_OUTOFBOUNDS";
      if ( a1 > -2147417838 )
      {
        if ( a1 > -2147352577 )
        {
          if ( a1 > -2147319786 )
          {
            if ( a1 > -2147319765 )
            {
              if ( a1 > -2147317571 )
              {
                switch ( a1 )
                {
                  case -2147317563:
                    return L"TYPE_E_SIZETOOBIG";
                  case -2147317562:
                    return L"TYPE_E_DUPLICATEID";
                  case -2147317553:
                    return L"TYPE_E_INVALIDID";
                  case -2147316576:
                    return L"TYPE_E_TYPEMISMATCH";
                }
              }
              else
              {
                switch ( a1 )
                {
                  case -2147317571:
                    return L"TYPE_E_BADMODULEKIND";
                  case -2147319764:
                    return L"TYPE_E_AMBIGUOUSNAME";
                  case -2147319763:
                    return L"TYPE_E_NAMECONFLICT";
                  case -2147319762:
                    return L"TYPE_E_UNKNOWNLCID";
                  case -2147319761:
                    return L"TYPE_E_DLLFUNCTIONNOTFOUND";
                }
              }
              return L"Unknown";
            }
            if ( a1 == -2147319765 )
            {
              return L"TYPE_E_ELEMENTNOTFOUND";
            }
            else
            {
              switch ( a1 )
              {
                case -2147319785:
                  result = L"TYPE_E_FIELDNOTFOUND";
                  break;
                case -2147319784:
                  result = L"TYPE_E_INVDATAREAD";
                  break;
                case -2147319783:
                  result = L"TYPE_E_UNSUPFORMAT";
                  break;
                case -2147319780:
                  result = L"TYPE_E_REGISTRYACCESS";
                  break;
                case -2147319779:
                  result = L"TYPE_E_LIBNOTREGISTERED";
                  break;
                case -2147319769:
                  result = L"TYPE_E_UNDEFINEDTYPE";
                  break;
                case -2147319768:
                  result = L"TYPE_E_QUALIFIEDNAMEDISALLOWED";
                  break;
                case -2147319767:
                  result = L"TYPE_E_INVALIDSTATE";
                  break;
                case -2147319766:
                  result = L"TYPE_E_WRONGTYPEKIND";
                  break;
                default:
                  return L"Unknown";
              }
            }
          }
          else if ( a1 == -2147319786 )
          {
            return L"TYPE_E_BUFFERTOOSMALL";
          }
          else
          {
            switch ( a1 )
            {
              case -2147352575:
                result = L"DISP_E_UNKNOWNINTERFACE";
                break;
              case -2147352573:
                result = L"DISP_E_MEMBERNOTFOUND";
                break;
              case -2147352572:
                result = L"DISP_E_PARAMNOTFOUND";
                break;
              case -2147352571:
                result = L"DISP_E_TYPEMISMATCH";
                break;
              case -2147352570:
                result = L"DISP_E_UNKNOWNNAME";
                break;
              case -2147352569:
                result = L"DISP_E_NONAMEDARGS";
                break;
              case -2147352568:
                result = L"DISP_E_BADVARTYPE";
                break;
              case -2147352567:
                result = L"DISP_E_EXCEPTION";
                break;
              case -2147352566:
                result = L"DISP_E_OVERFLOW";
                break;
              case -2147352565:
                result = L"DISP_E_BADINDEX";
                break;
              case -2147352564:
                result = L"DISP_E_UNKNOWNLCID";
                break;
              case -2147352563:
                result = L"DISP_E_ARRAYISLOCKED";
                break;
              case -2147352562:
                result = L"DISP_E_BADPARAMCOUNT";
                break;
              case -2147352561:
                result = L"DISP_E_PARAMNOTOPTIONAL";
                break;
              case -2147352560:
                result = L"DISP_E_BADCALLEE";
                break;
              case -2147352559:
                result = L"DISP_E_NOTACOLLECTION";
                break;
              case -2147352558:
                result = L"DISP_E_DIVBYZERO";
                break;
              case -2147352557:
                result = L"DISP_E_BUFFERTOOSMALL";
                break;
              default:
                return L"Unknown";
            }
          }
        }
        else if ( a1 == -2147352577 )
        {
          return L"RPC_E_UNEXPECTED";
        }
        else
        {
          switch ( a1 )
          {
            case -2147417837:
              result = L"RPC_E_INVALID_IPID";
              break;
            case -2147417836:
              result = L"RPC_E_INVALID_OBJECT";
              break;
            case -2147417835:
              result = L"RPC_S_CALLPENDING";
              break;
            case -2147417834:
              result = L"RPC_S_WAITONTIMER";
              break;
            case -2147417833:
              result = L"RPC_E_CALL_COMPLETE";
              break;
            case -2147417832:
              result = L"RPC_E_UNSECURE_CALL";
              break;
            case -2147417831:
              result = L"RPC_E_TOO_LATE";
              break;
            case -2147417830:
              result = L"RPC_E_NO_GOOD_SECURITY_PACKAGES";
              break;
            case -2147417829:
              result = L"RPC_E_ACCESS_DENIED";
              break;
            case -2147417828:
              result = L"RPC_E_REMOTE_DISABLED";
              break;
            case -2147417827:
              result = L"RPC_E_INVALID_OBJREF";
              break;
            case -2147417826:
              result = L"RPC_E_NO_CONTEXT";
              break;
            case -2147417825:
              result = L"RPC_E_TIMEOUT";
              break;
            case -2147417824:
              result = L"RPC_E_NO_SYNC";
              break;
            case -2147417823:
              result = L"RPC_E_FULLSIC_REQUIRED";
              break;
            case -2147417822:
              result = L"RPC_E_INVALID_STD_NAME";
              break;
            case -2147417821:
              result = L"CO_E_FAILEDTOIMPERSONATE";
              break;
            case -2147417820:
              result = L"CO_E_FAILEDTOGETSECCTX";
              break;
            case -2147417819:
              result = L"CO_E_FAILEDTOOPENTHREADTOKEN";
              break;
            case -2147417818:
              result = L"CO_E_FAILEDTOGETTOKENINFO";
              break;
            case -2147417817:
              result = L"CO_E_TRUSTEEDOESNTMATCHCLIENT";
              break;
            case -2147417816:
              result = L"CO_E_FAILEDTOQUERYCLIENTBLANKET";
              break;
            case -2147417815:
              result = L"CO_E_FAILEDTOSETDACL";
              break;
            case -2147417814:
              result = L"CO_E_ACCESSCHECKFAILED";
              break;
            case -2147417813:
              result = L"CO_E_NETACCESSAPIFAILED";
              break;
            case -2147417812:
              result = L"CO_E_WRONGTRUSTEENAMESYNTAX";
              break;
            case -2147417811:
              result = L"CO_E_INVALIDSID";
              break;
            case -2147417810:
              result = L"CO_E_CONVERSIONFAILED";
              break;
            case -2147417809:
              result = L"CO_E_NOMATCHINGSIDFOUND";
              break;
            case -2147417808:
              result = L"CO_E_LOOKUPACCSIDFAILED";
              break;
            case -2147417807:
              result = L"CO_E_NOMATCHINGNAMEFOUND";
              break;
            case -2147417806:
              result = L"CO_E_LOOKUPACCNAMEFAILED";
              break;
            case -2147417805:
              result = L"CO_E_SETSERLHNDLFAILED";
              break;
            case -2147417804:
              result = L"CO_E_FAILEDTOGETWINDIR";
              break;
            case -2147417803:
              result = L"CO_E_PATHTOOLONG";
              break;
            case -2147417802:
              result = L"CO_E_FAILEDTOGENUUID";
              break;
            case -2147417801:
              result = L"CO_E_FAILEDTOCREATEFILE";
              break;
            case -2147417800:
              result = L"CO_E_FAILEDTOCLOSEHANDLE";
              break;
            case -2147417799:
              result = L"CO_E_EXCEEDSYSACLLIMIT";
              break;
            case -2147417798:
              result = L"CO_E_ACESINWRONGORDER";
              break;
            case -2147417797:
              result = L"CO_E_INCOMPATIBLESTREAMVERSION";
              break;
            case -2147417796:
              result = L"CO_E_FAILEDTOOPENPROCESSTOKEN";
              break;
            case -2147417795:
              result = L"CO_E_DECODEFAILED";
              break;
            case -2147417793:
              result = L"CO_E_ACNOTINITIALIZED";
              break;
            case -2147417792:
              result = L"CO_E_CANCEL_DISABLED";
              break;
            default:
              return L"Unknown";
          }
        }
      }
      else
      {
        if ( a1 == -2147417838 )
          return L"RPC_E_INVALID_EXTENSION";
        if ( a1 > -2147467222 )
        {
          if ( a1 > -2147418096 )
          {
            if ( a1 > -2147417848 )
            {
              switch ( a1 )
              {
                case -2147417847:
                  result = L"RPC_E_RETRY";
                  break;
                case -2147417846:
                  result = L"RPC_E_SERVERCALL_RETRYLATER";
                  break;
                case -2147417845:
                  result = L"RPC_E_SERVERCALL_REJECTED";
                  break;
                case -2147417844:
                  result = L"RPC_E_INVALID_CALLDATA";
                  break;
                case -2147417843:
                  result = L"RPC_E_CANTCALLOUT_ININPUTSYNCCALL";
                  break;
                case -2147417842:
                  result = L"RPC_E_WRONG_THREAD";
                  break;
                case -2147417841:
                  result = L"RPC_E_THREAD_NOT_INIT";
                  break;
                case -2147417840:
                  result = L"RPC_E_VERSION_MISMATCH";
                  break;
                case -2147417839:
                  result = L"RPC_E_INVALID_HEADER";
                  break;
                default:
                  return L"Unknown";
              }
            }
            else
            {
              if ( a1 == -2147417848 )
                return L"RPC_E_DISCONNECTED";
              if ( a1 <= -2147417853 )
              {
                switch ( a1 )
                {
                  case -2147417853:
                    return L"RPC_E_NOT_REGISTERED";
                  case -2147418095:
                    return L"RPC_E_CANTCALLOUT_AGAIN";
                  case -2147418094:
                    return L"RPC_E_SERVER_DIED_DNE";
                  case -2147417856:
                    return L"RPC_E_SYS_CALL_FAILED";
                  case -2147417855:
                    return L"RPC_E_OUT_OF_RESOURCES";
                  case -2147417854:
                    return L"RPC_E_ATTEMPTED_MULTITHREAD";
                }
                return L"Unknown";
              }
              switch ( a1 )
              {
                case -2147417852:
                  return L"RPC_E_FAULT";
                case -2147417851:
                  return L"RPC_E_SERVERFAULT";
                case -2147417850:
                  return L"RPC_E_CHANGED_MODE";
                default:
                  return L"RPC_E_INVALIDMETHOD";
              }
            }
          }
          else
          {
            if ( a1 == -2147418096 )
              return L"RPC_E_INVALID_PARAMETER";
            if ( a1 <= -2147418107 )
            {
              if ( a1 == -2147418107 )
                return L"RPC_E_CANTCALLOUT_INEXTERNALCALL";
              if ( a1 > -2147418113 )
              {
                switch ( a1 )
                {
                  case -2147418111:
                    return L"RPC_E_CALL_REJECTED";
                  case -2147418110:
                    return L"RPC_E_CALL_CANCELED";
                  case -2147418109:
                    return L"RPC_E_CANTPOST_INSENDCALL";
                  case -2147418108:
                    return L"RPC_E_CANTCALLOUT_INASYNCCALL";
                }
              }
              else
              {
                switch ( a1 )
                {
                  case -2147418113:
                    return L"E_UNEXPECTED";
                  case -2147467221:
                    return L"CO_E_NO_SECCTX_IN_ACTIVATE";
                  case -2147467216:
                    return L"CO_E_TRACKER_CONFIG";
                  case -2147467215:
                    return L"CO_E_THREADPOOL_CONFIG";
                  case -2147467214:
                    return L"CO_E_SXS_CONFIG";
                  case -2147467213:
                    return L"CO_E_MALFORMED_SPN";
                }
              }
              return L"Unknown";
            }
            switch ( a1 )
            {
              case -2147418106:
                result = L"RPC_E_CONNECTION_TERMINATED";
                break;
              case -2147418105:
                result = L"RPC_E_SERVER_DIED";
                break;
              case -2147418104:
                result = L"RPC_E_CLIENT_DIED";
                break;
              case -2147418103:
                result = L"RPC_E_INVALID_DATAPACKET";
                break;
              case -2147418102:
                result = L"RPC_E_CANTTRANSMIT_CALL";
                break;
              case -2147418101:
                result = L"RPC_E_CLIENT_CANTMARSHAL_DATA";
                break;
              case -2147418100:
                result = L"RPC_E_CLIENT_CANTUNMARSHAL_DATA";
                break;
              case -2147418099:
                result = L"RPC_E_SERVER_CANTMARSHAL_DATA";
                break;
              case -2147418098:
                result = L"RPC_E_SERVER_CANTUNMARSHAL_DATA";
                break;
              case -2147418097:
                result = L"RPC_E_INVALID_DATA";
                break;
              default:
                return L"Unknown";
            }
          }
        }
        else
        {
          if ( a1 == -2147467222 )
            return L"CO_E_SERVER_INIT_TIMEOUT";
          if ( a1 > -2147467243 )
          {
            switch ( a1 )
            {
              case -2147467242:
                result = L"CO_E_OLE1DDE_DISABLED";
                break;
              case -2147467241:
                result = L"CO_E_RUNAS_SYNTAX";
                break;
              case -2147467240:
                result = L"CO_E_CREATEPROCESS_FAILURE";
                break;
              case -2147467239:
                result = L"CO_E_RUNAS_CREATEPROCESS_FAILURE";
                break;
              case -2147467238:
                result = L"CO_E_RUNAS_LOGON_FAILURE";
                break;
              case -2147467237:
                result = L"CO_E_LAUNCH_PERMSSION_DENIED";
                break;
              case -2147467236:
                result = L"CO_E_START_SERVICE_FAILURE";
                break;
              case -2147467235:
                result = L"CO_E_REMOTE_COMMUNICATION_FAILURE";
                break;
              case -2147467234:
                result = L"CO_E_SERVER_START_TIMEOUT";
                break;
              case -2147467233:
                result = L"CO_E_CLSREG_INCONSISTENT";
                break;
              case -2147467232:
                result = L"CO_E_IIDREG_INCONSISTENT";
                break;
              case -2147467231:
                result = L"CO_E_NOT_SUPPORTED";
                break;
              case -2147467230:
                result = L"CO_E_RELOAD_DLL";
                break;
              case -2147467229:
                result = L"CO_E_MSI_ERROR";
                break;
              case -2147467228:
                result = L"CO_E_ATTEMPT_TO_CREATE_OUTSIDE_CLIENT_CONTEXT";
                break;
              case -2147467227:
                result = L"CO_E_SERVER_PAUSED";
                break;
              case -2147467226:
                result = L"CO_E_SERVER_NOT_PAUSED";
                break;
              case -2147467225:
                result = L"CO_E_CLASS_DISABLED";
                break;
              case -2147467224:
                result = L"CO_E_CLRNOTAVAILABLE";
                break;
              case -2147467223:
                result = L"CO_E_ASYNC_WORK_REJECTED";
                break;
              default:
                return L"Unknown";
            }
          }
          else
          {
            if ( a1 == -2147467243 )
              return L"CO_E_WRONG_SERVER_IDENTITY";
            if ( a1 > -2147467254 )
            {
              switch ( a1 )
              {
                case -2147467253:
                  result = L"CO_E_INIT_TLS_SET_CHANNEL_CONTROL";
                  break;
                case -2147467252:
                  result = L"CO_E_INIT_TLS_CHANNEL_CONTROL";
                  break;
                case -2147467251:
                  result = L"CO_E_INIT_UNACCEPTED_USER_ALLOCATOR";
                  break;
                case -2147467250:
                  result = L"CO_E_INIT_SCM_MUTEX_EXISTS";
                  break;
                case -2147467249:
                  result = L"CO_E_INIT_SCM_FILE_MAPPING_EXISTS";
                  break;
                case -2147467248:
                  result = L"CO_E_INIT_SCM_MAP_VIEW_OF_FILE";
                  break;
                case -2147467247:
                  result = L"CO_E_INIT_SCM_EXEC_FAILURE";
                  break;
                case -2147467246:
                  result = L"CO_E_INIT_ONLY_SINGLE_THREADED";
                  break;
                case -2147467245:
                  result = L"CO_E_CANT_REMOTE";
                  break;
                case -2147467244:
                  result = L"CO_E_BAD_SERVER_NAME";
                  break;
                default:
                  return L"Unknown";
              }
            }
            else
            {
              if ( a1 == -2147467254 )
                return L"CO_E_INIT_RPC_CHANNEL";
              if ( a1 <= -2147467259 )
              {
                switch ( a1 )
                {
                  case -2147467259:
                    return L"E_FAIL";
                  case -2147483638:
                    return L"E_PENDING";
                  case -2147467263:
                    return L"E_NOTIMPL";
                  case -2147467262:
                    return L"E_NOINTERFACE";
                  case -2147467261:
                    return L"E_POINTER";
                  case -2147467260:
                    return L"E_ABORT";
                }
                return L"Unknown";
              }
              switch ( a1 )
              {
                case -2147467258:
                  return L"CO_E_INIT_TLS";
                case -2147467257:
                  return L"CO_E_INIT_SHARED_ALLOCATOR";
                case -2147467256:
                  return L"CO_E_INIT_MEMORY_ALLOCATOR";
                default:
                  return L"CO_E_INIT_CLASS_CACHE";
              }
            }
          }
        }
      }
    }
  }
  return result;
}
