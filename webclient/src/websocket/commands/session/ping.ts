import webClient from '../../WebClient';
import { SessionPersistence } from '../../persistence';

export function ping(pingReceived: Function): void {
  const command = webClient.protobuf.controller.Command_Ping.create();

  const sc = webClient.protobuf.controller.SessionCommand.create({
    '.Command_Ping.ext': command
  });

  webClient.protobuf.sendSessionCommand(sc, pingReceived);
}
