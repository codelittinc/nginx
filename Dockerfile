FROM nginx:1.21.1-alpine

#COPY includes/expires.inc /etc/nginx/conf.d/expires.inc
#RUN chmod 0644 /etc/nginx/conf.d/expires.inc

COPY templates /etc/nginx/templates/
COPY nginx.conf /etc/nginx/nginx.conf
