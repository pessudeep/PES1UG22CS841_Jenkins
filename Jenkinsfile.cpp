pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'g++ PES1UG21CS373-1.cpp -o temp'
                 build job: 'PES1UG21CS373-1', wait: false
                 echo 'Build by CS373 successful'
            }
        }

        stage('Test') {
            steps {
                sh 'cat PES1UG21CS373-1.cpp'
                echo 'Test by CS373 successful'
            }
        }

        stage('Deploy') {
            steps {
               
                 echo 'Deploy by CS373 successful'
            }
        }
    }

    post {
        failure {
            
                echo 'Pipeline Failed'
          
        }
    }
}