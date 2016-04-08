package org.kaaproject.kaa.server.common.paf.shared.context;

public interface OutboundSessionMessage extends SessionMessage {

    byte[] replyPayload();
    
    RegistrationResult getEndpointRegistrationResult();
    
}
